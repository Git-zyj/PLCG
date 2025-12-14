/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_10 ^= (max((((((1 ? var_1 : 24094094)) >= ((var_6 ? 0 : 1))))), (min(((-24094086 ? (arr_2 [i_0] [i_0]) : 1)), (((~(arr_3 [i_0]))))))));
                var_11 += ((((min((arr_2 [i_1 - 1] [i_1]), 9))) > (((var_7 % 1) ? 1 : (var_1 / 9223372036854775807)))));
                var_12 = (min(((((min(var_8, 16837765376657262549))) ? (arr_2 [3] [9]) : (((1 ? 20 : 96))))), ((((arr_2 [i_1 + 2] [i_0]) ? 1 : (arr_1 [i_1 + 2] [i_1 + 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_13 = ((+(((((1 ? (arr_7 [i_1] [i_0] [i_1] [i_0] [i_1]) : 264241152))) ? -264241180 : var_9))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_14 = (max(var_14, (((-24094094 ? ((max(((max(11, 1))), (max((arr_1 [i_0] [i_2]), (arr_10 [i_0] [i_1] [i_1] [i_3] [i_4])))))) : ((((1 * 4230520985) && var_2))))))));
                                arr_12 [i_1] = ((-1 ? 245 : 400904341));
                                var_15 ^= (max(217, 3));
                            }
                            for (int i_5 = 4; i_5 < 21;i_5 += 1)
                            {
                                var_16 *= var_4;
                                arr_15 [i_1] = (min((max(((max(1, 32767))), var_8)), ((min(23, (arr_13 [i_5] [i_3] [i_1] [i_2] [i_1] [i_1] [i_0]))))));
                                var_17 = (min(1, (max(((~(arr_11 [16] [16] [i_1] [i_3] [i_3 - 3] [i_3 - 3]))), (var_2 != 2506111413308516565)))));
                                arr_16 [i_1] [i_1] [i_2] [i_1] [i_1] = ((((max(-1173710483, 0))) ? ((max(((min(var_2, var_9))), (var_1 + 1)))) : (min((min(1, -4302754737009529211)), (((var_8 ? 1 : 393216)))))));
                                var_18 &= (max(2940846446, -66));
                            }
                            for (int i_6 = 1; i_6 < 23;i_6 += 1)
                            {
                                arr_19 [i_0] [i_1] [i_6 - 1] = 1;
                                arr_20 [i_1] [i_1] = var_3;
                            }
                            for (int i_7 = 0; i_7 < 25;i_7 += 1)
                            {
                                var_19 = (min(var_19, -624281067));
                                var_20 = (-8452888658085980874 ? 212 : 7);
                            }
                            var_21 = var_7;
                        }
                    }
                }
            }
        }
    }
    var_22 = var_4;
    #pragma endscop
}
