/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((min(1, -var_16)))));
                                var_20 = ((~(((max(0, 4))))));
                                var_21 *= ((!((((max(89, 17239165808517822664)) >> (((var_1 == (arr_5 [i_0] [i_1])))))))));
                                var_22 = (~13);
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_5] [i_0] = ((211 ? -100 : 4361957946804826751));

                        for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] [i_6] [i_0] [i_0 + 1] = ((32512 ? 64 : 18326008304781722799));
                            var_23 *= (((((((var_11 / (arr_9 [i_0] [i_1] [i_2] [i_5]))) * var_11))) ? ((((13 - 64) / ((var_6 ? 155 : 2196899087))))) : ((((1526064720 ? (arr_21 [i_0] [i_1] [i_2] [i_2] [i_6 + 1] [i_1]) : var_3)) - ((((arr_1 [i_0] [i_0]) / (arr_1 [i_5] [i_6]))))))));
                        }
                        for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_1] [i_5] [i_5] [i_7] = ((((((!-1143081051) && ((var_16 && (arr_9 [i_7] [i_0] [i_1] [i_0])))))) > (~-100)));
                            arr_27 [i_0 - 1] [i_1] [i_1] [i_2] [i_5] [i_7] [i_7 + 1] |= ((~((-1 ? -29 : -3614))));
                        }
                    }
                    for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            arr_34 [i_8] [i_8] = (~0);
                            var_24 = (--15288);
                            arr_35 [i_2] [i_8] [i_0] = (((--46) ? ((-1 ? (var_0 * var_14) : ((-507516718 ? 868795123 : 2305702271725338624)))) : (((max(var_8, 16))))));
                        }
                        var_25 = (((!6) ? (18326008304781722799 & 58) : (((((arr_33 [i_8] [i_2] [i_2] [i_1] [i_8]) > (((var_8 >= (arr_18 [i_0]))))))))));
                    }
                    arr_36 [i_0] [i_1] [i_1] = (+-107478501644816146);
                }
            }
        }
    }
    var_26 = (min(((~(74 ^ 16849066322018435450))), -29561));
    #pragma endscop
}
