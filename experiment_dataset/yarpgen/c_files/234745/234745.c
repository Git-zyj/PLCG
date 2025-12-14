/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-120 != 3994517330);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (((((1 >> (arr_7 [i_0] [i_1] [3])))) ? ((0 ^ ((max(1, (arr_5 [7])))))) : var_7));

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        var_20 = ((!((((arr_6 [i_0] [i_1] [i_2] [4]) ? (arr_0 [i_0] [i_1]) : (arr_6 [i_0] [i_1] [i_1] [i_1]))))));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_21 = ((~(((arr_10 [i_0] [i_1] [i_2] [i_4]) & (((-127 - 1) ^ -116))))));
                            var_22 += (min(1, 9783));
                            var_23 = (((arr_11 [i_2]) >> (-var_15 - 17098)));
                        }
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_24 += (arr_2 [i_0]);
                        var_25 = ((((((251 ? 37826 : 8125)) << (((((arr_6 [i_0 + 3] [i_0 + 3] [i_2] [i_5]) | (arr_11 [i_5]))) - 56)))) >> (121 != 4047154452)));
                        var_26 = 119;
                    }
                    var_27 = (~-8122);
                }
            }
        }
    }
    var_28 -= var_16;
    #pragma endscop
}
