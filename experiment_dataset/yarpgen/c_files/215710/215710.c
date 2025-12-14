/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 ? (!1) : ((((max(var_1, var_2)) <= var_3)))));
    var_12 += var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_1] [i_2] [i_3] [i_1] = (((min(var_7, 1))) ? ((((arr_8 [i_0] [i_2] [i_0] [i_1] [i_0]) * (arr_6 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 1])))) : (max((max(13927977199300504559, -159589493)), 1843837868)));
                            var_13 |= ((arr_2 [i_0]) && 4518766874409047056);
                        }
                    }
                }
                arr_10 [i_1] [13] = (arr_7 [i_0] [i_1] [i_1] [i_1] [i_0 + 1]);
                arr_11 [i_0 - 1] [i_1] = (((((1 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 2])))) ? (max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))) : (min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_5] [i_4] [i_4] [i_5 + 1] [i_5] = (964064075789278093 * 89);
                            arr_18 [i_0] [i_5] [i_4] [i_5] = var_8;

                            for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                            {
                                var_14 += var_2;
                                arr_22 [i_0] [i_1] [i_5] [i_4] [i_1] = (~(max((!var_0), var_7)));
                                arr_23 [i_0] [i_1] [i_4] [i_5] [i_5] [i_6] = (min((arr_13 [i_5 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 1]), (((arr_13 [i_5 - 1] [i_4] [i_4] [i_0 + 1]) ^ (arr_13 [i_5 + 1] [i_5] [i_4] [i_0 + 1])))));
                                var_15 = ((619231502 ? 1 : -21983));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                            {
                                arr_26 [i_0 - 1] [i_1] [i_5] [i_0] [1] = (arr_12 [i_0]);
                                arr_27 [20] [14] [i_4] [i_5] [i_0] [i_0] &= ((((53 ? var_3 : 37)) <= ((28 ? (arr_3 [i_0]) : (arr_3 [i_0])))));
                            }
                            for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                            {
                                var_16 = (min((min(((0 ? 964064075789278093 : 65535)), 1)), var_5));
                                arr_31 [i_5] = ((-(arr_28 [i_1] [i_4] [i_4] [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
