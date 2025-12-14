/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= 1403321;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_1 - 1] [i_2] = (arr_4 [i_1 - 3]);
                    var_21 ^= ((1403321 - ((~(arr_0 [i_1 + 1] [i_2 - 1])))));
                    var_22 |= ((~(((-65535 <= (arr_6 [i_0] [i_1 + 1] [12] [i_0]))))));
                    var_23 = ((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 - 1] [i_1 + 1]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            {
                var_24 = (((((arr_1 [i_3 - 1]) || (~-4096))) ? 1403321 : ((((5967 || (arr_3 [i_3] [i_4 + 2]))) ? (arr_2 [i_3]) : (((arr_1 [i_4 - 1]) << (((arr_13 [1]) - 124))))))));
                var_25 ^= (((((arr_14 [i_4 - 1] [i_4 + 2] [i_3 - 1]) + 2147483647)) << ((((~(arr_11 [i_4]))) - 26698))));
            }
        }
    }
    #pragma endscop
}
