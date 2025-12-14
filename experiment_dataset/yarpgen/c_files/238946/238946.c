/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((3434201620 ? (((((25484 ? 40051 : var_10))) ? ((min(var_8, var_14))) : ((min(20051, 51))))) : 54593));
    var_17 = ((+((1 ? (!1) : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = (2047 ? -829973494 : ((min(1, 54574))));
                            var_19 = (((((54593 ? (arr_0 [i_1]) : (arr_0 [i_0])))) <= (min(1, (((40052 ? var_11 : 25484)))))));
                            var_20 = 65535;
                            var_21 += (min((max(((~(arr_4 [i_0]))), (var_13 | 3434201620))), (((10120 ? -10120 : (~860765670))))));
                        }
                    }
                }
                var_22 = (((0 ? 1 : (arr_1 [i_0] [i_1]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_23 -= ((!(((-var_14 ? ((~(arr_16 [i_4]))) : 65515)))));
                                var_24 = ((-((2929630559 >> (((~-559764209) - 559764200))))));
                                var_25 = min((max((arr_12 [i_7]), ((var_5 ? (arr_12 [i_4]) : (arr_24 [i_4] [i_4] [i_4] [i_6] [i_7] [i_8]))))), 4294967295);
                                var_26 = (arr_13 [19]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_27 = (min((max(-19999, (arr_20 [i_4 - 1]))), 1));
                            arr_31 [14] [i_10] = ((1 ? -57 : ((-(max(-1, 14111784325530638323))))));
                            var_28 = (1 == (((!(1274701350562805066 + 1)))));
                            arr_32 [i_5] = (max((~-43), 35979));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            arr_37 [2] [i_12] [i_12] [i_12] [i_12] = (min(((-18133136135011964549 ? ((65535 ? 0 : var_11)) : ((-119 ? 9763 : var_5)))), (((((~(arr_28 [i_4] [i_4 + 1] [i_5 + 1] [i_5] [17] [i_12])))) ? (!-92901322) : (max(var_5, 65535))))));
                            var_29 -= ((+((((((arr_25 [i_4] [6] [i_12]) ? var_13 : -3911981222876431560)) == 92901343)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
