/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((+((((!0) >= (1784 & var_10)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (arr_2 [i_1]);
                var_22 = (max((max(10418, (max(549755813887, 12550382943076039213)))), ((min((arr_5 [i_0]), ((~(arr_0 [i_1]))))))));
                arr_6 [7] [i_0] = min((+-9301), -9312);
                arr_7 [1] [i_1] = ((+(((~1) ? -9289 : (18303817075753688929 > 65535)))));

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_23 ^= (((~(arr_0 [i_2 - 1]))));
                    arr_10 [i_0] [i_0] = (((((min(var_10, -9301))) < (!-9303))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_4] [i_4] = (max((max((((1716806053 ? (arr_12 [i_4] [i_3]) : -922339207197973447))), (min(var_17, var_13)))), (((3903286049365578302 != ((((arr_14 [i_4] [i_4] [i_4]) > 209))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_21 [i_3] [i_3] [i_3] [i_3] |= (((var_16 ? (~var_3) : -9289)));
                            var_24 = (!var_1);
                        }
                    }
                }
                var_25 = (!63);
                var_26 ^= 1;
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_27 *= (((((var_14 ? ((~(arr_28 [i_3] [i_4] [3] [i_3] [i_9]))) : 9296))) ? ((((((arr_19 [i_3] [i_4] [i_7] [i_7]) / 25))) ? (arr_14 [i_7 + 1] [i_8 + 2] [i_9]) : (!13))) : (arr_16 [i_3] [i_7 - 2] [i_3] [i_9])));
                                var_28 *= ((!(((~(arr_16 [i_9] [i_3] [i_3] [i_3]))))));
                                var_29 = ((~((max(32767, 7)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = (min((max(1725580446707510189, -18303817075753688929)), ((max(-0, ((min(var_12, var_18))))))));
    #pragma endscop
}
