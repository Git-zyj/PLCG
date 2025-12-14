/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 12572;
    var_21 = (max(var_21, var_15));
    var_22 = ((-(((((-12554 + 2147483647) << (-505783907923861781 + 505783907923861781))) * ((min(1, 69)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_23 = -69;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_24 = (max(var_24, 35184372086784));
                                arr_14 [i_0] [i_1 - 1] [10] [i_3] [i_3] [i_3] [i_0] |= (min(39, var_1));
                                var_25 += min(((2767055188541272547 << (32 - 32))), ((((arr_11 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]) << ((((var_3 << (var_2 - 26792))) - 262120))))));
                                var_26 ^= (min((max((59 + var_9), (921269127 != var_15))), (((var_9 + 9223372036854775807) << ((((((var_17 | (arr_2 [2]))) + 35)) - 30))))));
                            }
                        }
                    }
                }
                var_27 -= (~(~var_2));
                var_28 = (((((var_14 ? (arr_6 [i_0] [i_1] [i_1]) : ((1590315752 ? 2111952074 : var_2))))) != 4294967295));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_29 = ((min((!121), (0 | var_9))) * (((var_3 & (arr_6 [i_1] [i_1] [i_1])))));
                            arr_19 [i_1] [i_1] [i_5] [i_0] = ((34 ? 1104379522 : ((-101 ? 1179414784 : (~8201)))));
                            var_30 &= (((min((arr_9 [i_6 - 2] [i_6 + 1] [10] [10]), -52))) ? ((var_4 ? (arr_9 [i_6 - 2] [i_6 + 1] [4] [4]) : (arr_9 [i_6 - 3] [i_6 + 1] [10] [i_6 + 1]))) : (((arr_9 [i_6 + 1] [i_6 - 1] [8] [i_6 - 2]) * (arr_9 [i_6 - 2] [i_6 - 3] [1] [i_6]))));
                            arr_20 [i_1] = ((((min((arr_8 [i_0]), (arr_8 [i_6 - 1])))) ? var_16 : var_0));
                            arr_21 [9] [i_1] [i_5 + 2] [i_1] = (+(((arr_16 [i_1 + 1] [i_5 + 2] [i_1 + 1] [i_6 + 1]) / var_15)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
