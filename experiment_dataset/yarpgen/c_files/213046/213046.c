/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = var_6;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((arr_0 [i_0] [15]) / (arr_0 [i_0] [9])))) ? 65535 : (arr_1 [i_0]));
        arr_4 [0] [i_0] = (((((((!(arr_0 [1] [1])))))) ? ((((((min(7399312834674477489, 0))) || ((!(arr_2 [i_0]))))))) : (~var_14)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] = (max((((((var_1 + (arr_10 [i_1 - 1] [i_2] [i_3] [i_4])))) + (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? -1 : -4991580109518471910)))), (((!(!var_14))))));
                                var_18 = ((((~(max(11047431239035074126, 255))))) ? ((-323820918 / (min(var_7, -115)))) : 1);
                                var_19 = var_11;
                            }
                        }
                    }
                    arr_15 [1] [i_1] [i_2] = (((-7171133237874929011 | 38145) - (max(0, (arr_9 [i_0] [i_1 + 3] [i_1 + 1] [i_1 + 4] [i_2])))));

                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        arr_19 [i_5] [i_0] [i_0] [i_0] = 16572;
                        arr_20 [i_0] [i_1] [i_1] = (arr_7 [i_0] [i_2]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_20 += (((arr_17 [i_0] [i_1 + 1]) ? (arr_17 [i_2] [i_1 - 1]) : 11047431239035074133));
                        var_21 = (((~-3030) | 49553));
                        var_22 = var_8;
                    }
                    var_23 = var_8;
                }
            }
        }
        arr_23 [i_0] = (min((arr_22 [i_0]), ((11047431239035074133 * (arr_22 [i_0])))));
        arr_24 [i_0] = ((((((arr_16 [i_0] [i_0] [i_0] [6] [6] [i_0]) ? (arr_7 [i_0] [i_0]) : 7399312834674477489))) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((arr_16 [i_0] [10] [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0]) : (arr_7 [i_0] [i_0])))));
    }
    var_24 = ((!(((~(~-3035))))));
    #pragma endscop
}
