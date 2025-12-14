/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (var_3 / var_2);
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (!11288351221907655056);
                var_13 ^= (((((8571239997763700859 ? 9875504075945850743 : (arr_0 [0] [i_1])))) ? (arr_0 [2] [i_1]) : 3994352015091481768));
                var_14 -= ((((arr_0 [4] [4]) & var_10)) & ((var_7 ? ((var_4 ? 6369285441482444700 : var_7)) : (arr_0 [12] [i_1 + 1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                            {
                                var_15 -= (-((+(min((arr_3 [i_3] [i_3]), var_10)))));
                                var_16 = -504006852;
                                var_17 ^= var_1;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                var_18 += (9875504075945850735 - (arr_11 [i_1 + 3] [i_1 + 1]));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_0] = 1244716640;
                                var_19 |= var_2;
                                var_20 *= (((arr_6 [i_3] [i_3]) << (var_5 - 16774836945618895154)));
                                arr_17 [i_0] [5] [i_1] [0] [i_2] [i_1] [i_5] = var_7;
                            }
                            for (int i_6 = 0; i_6 < 20;i_6 += 1)
                            {
                                var_21 = (max(var_21, ((max((((!((max(var_6, var_10)))))), -12077458632227106925)))));
                                var_22 = (((~var_0) ? (((var_7 + 2147483647) << (11 - 10))) : (((!(arr_1 [i_0]))))));
                                arr_21 [i_0] [i_3] [i_0] [i_0] [i_6] = ((((((((-2147483647 - 1) * 4240587420776633799)) * var_3))) ? ((6369285441482444700 ? (var_9 * var_8) : ((var_8 ? 6369285441482444700 : var_9)))) : -var_10));
                            }
                            for (int i_7 = 1; i_7 < 16;i_7 += 1)
                            {
                                var_23 = ((((var_4 ? (6369285441482444687 ^ var_5) : (~8617786669265069628)))) ? (arr_22 [i_7 - 1] [i_7 + 4] [i_7 + 3] [i_1 + 1] [i_1 + 2]) : ((~(((var_2 > (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_24 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] [i_7 + 2] = (((((arr_0 [i_0] [i_0]) != var_1))) + ((((arr_13 [i_1 + 3] [i_1 + 1] [i_1 - 1]) != (arr_13 [i_1 + 1] [i_1 + 2] [i_1 - 1])))));
                            }
                            var_24 = (((min((var_9 % var_7), (min(var_8, (arr_14 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3]))))) != (!-2147483647)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
