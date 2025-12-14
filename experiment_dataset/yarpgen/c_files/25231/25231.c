/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] = (max(var_8, -0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = -1;
                            var_20 = ((-(arr_2 [i_1] [i_1 + 1])));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_21 = 30;
                                var_22 *= -1401475417818892241;
                                arr_14 [5] [i_1 + 2] = ((((((5 - 0) ? (((31020 >= (arr_12 [i_4] [1] [i_4] [i_4] [i_4] [i_4] [i_4])))) : 0))) ? 31020 : 22));
                                var_23 *= (((((((6 > (arr_3 [i_0]))) ? 10 : (((~(arr_5 [i_0]))))))) ? (((((~34675) != (arr_12 [20] [i_1 + 2] [20] [i_3] [i_4] [i_3] [i_2]))))) : ((((min(var_7, 315271481))) ? ((((arr_13 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]) << (((((arr_5 [i_0]) + 84)) - 20))))) : (var_4 / var_7)))));
                                arr_15 [i_0] [i_2] [i_4] = 43072;
                            }

                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 18;i_5 += 1)
                            {
                                var_24 += (~-17250);
                                var_25 = (((~34681) - (arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_5 + 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(-34531, (var_5 != -1401475417818892241)));
    var_27 = ((10883499122666221530 ? var_6 : 79));
    var_28 = (((((1 ? 43072 : 30997))) && (!var_17)));
    #pragma endscop
}
