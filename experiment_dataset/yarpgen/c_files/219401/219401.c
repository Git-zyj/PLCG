/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            {
                arr_5 [i_1] |= (max((min(var_15, (arr_0 [i_0]))), ((((arr_4 [i_1 - 2] [i_1 + 1]) - (arr_4 [i_1 + 2] [i_1 + 3]))))));

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_17 ^= (((((~(arr_6 [i_3] [1] [0])))) | (min((arr_3 [i_2 + 1] [7] [4]), (min(var_11, (arr_1 [i_0])))))));
                        arr_10 [i_0] [i_3] [i_3] [9] = ((-(max((arr_4 [i_1] [i_1 + 1]), (min(var_14, -9223372036854775798))))));
                        var_18 = (((((max(-9223372036854775798, var_1)) * 16383)) >= (((var_0 ^ (arr_7 [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_1 - 3]))))));
                    }
                    arr_11 [6] [6] [6] |= (arr_8 [i_2] [i_1] [4] [i_0]);
                }
                var_19 = (min(var_19, ((min((min(2047, -7268578969004744607)), ((((arr_0 [i_1 - 1]) ? (arr_4 [i_1 + 2] [i_1]) : var_12))))))));
            }
        }
    }
    #pragma endscop
}
