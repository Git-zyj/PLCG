/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    var_10 ^= (!(((((((arr_7 [i_0] [15] [14]) * var_2))) ? var_9 : (arr_3 [i_0] [i_1] [i_1])))));
                    var_11 = (max((((1 * 0) ? (arr_1 [i_0] [i_2 + 3]) : 23)), (arr_7 [i_0] [i_1] [i_2 - 3])));
                    var_12 = (((223 ? var_1 : (arr_0 [8] [i_2 - 1]))));
                }
                arr_8 [i_0] [i_0] [i_0] = (((arr_4 [i_0] [1]) | ((~((~(arr_7 [i_0] [i_1] [22])))))));
            }
        }
    }
    var_13 = 23;
    #pragma endscop
}
