/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [18] [i_1] = 32767;
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 = (!var_17);

                            /* vectorizable */
                            for (int i_4 = 4; i_4 < 19;i_4 += 1) /* same iter space */
                            {
                                arr_18 [i_2] [2] [i_0] [i_2] = (arr_17 [i_4] [i_3] [i_2] [i_1] [i_0]);
                                var_19 = (max(var_19, (~42)));
                                var_20 = (~32768);
                            }
                            for (int i_5 = 4; i_5 < 19;i_5 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_0 + 1] [i_0] [i_2] [20] [i_0] = (arr_4 [20] [i_2] [i_2]);
                                arr_23 [i_5] [i_5] [i_5 + 1] [i_2] = ((-((-(arr_19 [i_5] [i_5 - 4] [i_5] [8] [i_5 - 2])))));
                                var_21 &= ((32752 ^ ((((((var_11 ? 32778 : var_6))) != (min((arr_9 [i_3] [20] [i_3]), var_14)))))));
                                var_22 = (min(var_22, ((((-1 > 241) ? (max(575274380, (arr_12 [i_0] [i_0 - 1] [i_0] [i_2 + 1] [i_2 + 1]))) : ((((242 || (arr_12 [i_0] [i_0 - 1] [i_0] [i_2 - 4] [i_0]))))))))));
                                arr_24 [15] [i_2] [4] [i_2 - 2] [i_2] [i_2 + 1] [14] = var_0;
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_23 = (arr_1 [i_1]);
                                var_24 = (min(var_24, (6324029269533695778 > 922193301)));
                            }
                            var_25 = (3042255888 && -23098);
                            var_26 = (min(var_26, (((var_10 ? (arr_4 [i_0 + 3] [i_1] [i_2 + 3]) : ((-(arr_9 [i_3] [14] [i_3]))))))));
                            var_27 = (min(var_27, (((var_1 ^ ((((!(arr_19 [i_0] [i_0] [i_0] [0] [i_0]))))))))));
                        }
                    }
                }
            }
        }
    }
    var_28 = (min(var_28, var_0));
    var_29 = (var_3 | var_1);
    #pragma endscop
}
