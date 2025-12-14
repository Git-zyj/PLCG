/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = (!((((((8598584757973855061 ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? 1 : ((min((arr_0 [7]), 5)))))));
        arr_3 [i_0] = (min(117440512, 0));
        var_20 += (((arr_0 [i_0]) / ((~((-1049318143 ? -117440512 : -41))))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_21 = 117440512;
        arr_8 [i_1 + 4] [i_1 + 2] = 112;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_22 |= ((~(1345741528 / 1)));
                        arr_19 [i_5] [i_4] [i_2] [i_2] = ((((var_11 ? (arr_17 [i_5] [i_3] [i_3] [i_3] [i_2]) : 1)) + var_18));
                        var_23 = 3072;
                        arr_20 [i_4] [i_4] [i_3] [i_2] = -1;

                        for (int i_6 = 4; i_6 < 9;i_6 += 1)
                        {
                            arr_24 [i_6 + 3] [i_5] [i_2] [i_2] [i_2] = ((-117440497 ? (arr_11 [i_2] [i_2]) : (arr_13 [i_6 + 1] [i_3 - 2] [i_3 + 1])));
                            var_24 = ((arr_22 [i_6] [i_6 - 3] [i_6 - 3] [i_3 - 3] [i_3 - 1]) | 88);
                            var_25 += var_4;
                            var_26 = 1;
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_27 = ((-(arr_13 [i_7] [i_3 - 3] [i_3 - 1])));
                            arr_27 [i_5] [i_2] [i_2] &= (((arr_25 [i_4]) ? (arr_2 [i_3 + 1]) : -1701272611));
                        }
                    }
                    arr_28 [i_4] [i_3] [i_2] = (((arr_4 [i_2] [i_2]) ? ((((arr_4 [i_3 - 1] [i_2]) ? var_15 : (arr_4 [i_4] [i_3 - 3])))) : ((0 ? 1 : 13525025394410273107))));
                    var_28 -= ((((min((arr_4 [i_3 - 2] [i_3 - 1]), 5))) ? 8 : ((var_2 ? -11230 : (arr_12 [i_2] [i_3] [i_2])))));
                }
            }
        }
        arr_29 [i_2] = 1;
    }
    var_29 |= (min(var_4, 8475886184255671405));
    var_30 = -117440500;
    #pragma endscop
}
