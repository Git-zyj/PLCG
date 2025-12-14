/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_11 ^= ((-((127 << (((arr_0 [i_0] [i_0 + 2]) - 37383))))));
        var_12 &= var_1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] = 12;
                    var_13 = ((-(min(((min((arr_5 [i_0] [i_2]), 138))), (((arr_4 [i_0 + 2]) + 33135))))));
                    arr_8 [i_2] [i_2] = 0;
                    var_14 += ((-(((arr_0 [i_0 + 2] [i_0 + 2]) ^ var_5))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_15 = 716868209;
                            var_16 -= ((((114 << (((((arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) % -115)) - 38)))) != (((arr_1 [i_4] [i_1]) ? (((arr_12 [i_1] [i_2] [i_3] [i_4]) ? 39 : var_0)) : (arr_14 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0] [i_0 + 1] [i_0])))));
                        }
                        var_17 *= ((-(((-(arr_5 [i_0] [i_3]))))));
                    }
                }
            }
        }
    }
    var_18 = var_5;
    #pragma endscop
}
