/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_4 ? var_6 : var_2));
    var_12 = (max(var_12, ((~(((var_3 > var_7) ? ((max(var_0, var_2))) : var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 *= 1;

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_7 [i_2] = (((~234) ^ ((var_4 - (arr_2 [i_0])))));
                    arr_8 [10] [i_2] [i_2] [i_2] = ((((((((arr_3 [1] [i_1]) || 261243072)) ? (((224 >> (((arr_0 [i_0]) - 3820332563))))) : (~var_4)))) ? (((min(1, var_2)))) : (((arr_2 [i_2]) / (arr_2 [i_0])))));
                    arr_9 [i_0] [i_2] [i_2] = ((((arr_5 [i_0] [i_0] [i_0] [i_2]) ? 112 : (arr_5 [i_0] [i_0] [18] [i_2]))) >= 117);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_18 [i_2] [i_1] [i_2] [8] [8] [i_2] = ((!((min((arr_11 [i_2] [i_1] [i_2] [i_3] [i_3] [i_2]), (((var_10 ? -8600053040569725811 : var_9))))))));
                                var_14 = (min(var_14, -19321));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_15 = (max((((((((arr_21 [i_0] [i_0] [i_0] [i_2]) < var_10)))) & (max(var_9, 17451698817922816715)))), (((var_3 ? (arr_5 [i_0] [i_0] [i_2] [i_5]) : 253)))));
                        var_16 = (max((19 ^ -17807), (((((max(849601649, var_9))) || (-9783 != var_0))))));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_17 = (min(var_17, (((((((!var_4) ? ((min((arr_21 [6] [18] [i_2] [i_6]), 755523452))) : (arr_11 [i_6] [i_6] [i_6] [i_1] [18] [i_6])))) ? (((!((min(var_10, (arr_14 [i_0] [i_1] [i_1] [i_6] [i_6]))))))) : (((((var_5 * (arr_19 [i_6] [i_1] [i_2] [i_2] [i_6] [i_2])))) ? (arr_25 [i_0] [2] [i_0] [i_0]) : var_10)))))));
                        var_18 = ((var_2 ? (!1) : (~var_9)));
                        var_19 = (arr_0 [i_0]);
                        var_20 = (((min(21001, (min(var_0, var_8)))) > ((((!32531) && ((max(var_10, var_7))))))));
                    }
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        var_21 = (!(arr_21 [i_2] [i_2] [i_0] [i_2]));
                        var_22 = (min((((arr_0 [i_0]) >= (~var_3))), (!var_4)));
                    }
                }
                arr_29 [i_0] [i_1] [i_0] = var_0;
                arr_30 [2] [i_1] [i_1] = ((((2100035681 ? -1 : 2194931610)) * (((var_4 ? (((arr_11 [2] [i_0] [14] [i_1] [i_1] [i_1]) ? (arr_13 [i_0] [i_0] [i_0] [16]) : var_3)) : (!849601659))))));
            }
        }
    }
    #pragma endscop
}
