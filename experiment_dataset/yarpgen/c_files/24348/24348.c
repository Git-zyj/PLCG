/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 |= ((((((arr_1 [i_0] [i_1]) ^ (arr_1 [i_0] [i_0])))) ? (arr_1 [i_1] [i_1]) : (min(var_14, (arr_1 [i_2] [i_0])))));
                    arr_8 [i_0] [i_0] [i_2] = (((-(var_17 <= 18446744073709551611))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_3 - 1] [i_3] = (max((((-(((104 && (arr_10 [i_3]))))))), (arr_14 [i_3] [i_3])));
                arr_16 [i_4] &= (((max(5, (arr_14 [i_4] [i_4]))) | (~var_7)));
            }
        }
    }
    var_20 = var_4;
    var_21 *= var_12;
    #pragma endscop
}
