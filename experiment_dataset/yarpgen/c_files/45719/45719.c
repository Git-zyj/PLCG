/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (min(4294967271, 5129425420590133316));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = 3992316635;
                    var_17 = -8;
                }
            }
        }
        var_18 = (-9223372036854775807 - 1);
        arr_8 [i_0] &= 302650660;
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_26 [i_3] [i_3] [i_7] [i_3] [i_3] = max(302650660, (min(3992316636, var_10)));
                                arr_27 [i_7] [i_7] [i_3] = ((((max((arr_21 [i_3] [2] [i_5] [i_3] [i_5]), ((3992316635 ? 83 : var_14))))) ? var_0 : 8065665189000459582));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_3] [i_8] [i_5] [i_8] [i_3] = min((arr_6 [i_3] [i_4] [i_3] [i_8]), (min(3704256388701562941, var_1)));
                        arr_31 [i_3] [i_8] [i_4] [i_4 - 3] [i_5] [8] = (max((max((arr_24 [i_4] [i_4 - 1] [i_8] [4]), 302650638)), ((16777215 ? (arr_24 [i_4] [i_4 - 1] [i_8] [i_8]) : 2513080936))));
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_19 |= 3495326321436103427;
                            arr_37 [i_3] [i_9] [i_9] [i_9] [8] [i_5] = 302650660;
                            arr_38 [i_9] = (arr_20 [i_10] [i_9] [i_3] [i_3] [i_3]);
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            arr_43 [i_4] [i_9] [i_9] [i_9] [i_11] = (((max(var_5, (arr_34 [i_9] [i_4 + 1] [i_9] [i_4] [i_4 - 3])))) ? (!var_3) : (arr_41 [i_4 + 1] [i_4 + 1] [i_4] [4] [i_4 - 1] [i_4] [i_4 + 1]));
                            arr_44 [i_4] [i_4 - 1] [i_4] [i_4] [i_9] = (((!((min((arr_29 [8] [i_4] [2]), var_8))))));
                        }

                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_20 = (min(((3992316634 ? ((var_5 ? (arr_47 [i_3]) : 9223372036854775807)) : (((min(-1, 34)))))), ((min(9560607, -34)))));
                            var_21 = var_6;
                        }
                    }
                    var_22 = ((min((arr_2 [i_3]), var_7)));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 10;i_14 += 1)
                        {
                            {
                                var_23 = -2995311239104334999;
                                var_24 = -35;
                                var_25 ^= (min(4294967295, ((-var_4 ? 8697839808049612127 : -1288341009969112253))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
