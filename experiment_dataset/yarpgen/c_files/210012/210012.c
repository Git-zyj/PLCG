/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((((((129 ? var_9 : var_7)) > ((min(0, var_16)))))) >= (((var_13 >= var_11) ? var_14 : var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 -= ((((((2097151 > 129) * ((var_3 << (((arr_2 [i_2] [i_2]) - 7255975113786464800))))))) && (~0)));
                    var_22 = 80;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_1] = ((~(((var_10 && (arr_10 [i_0] [i_0] [i_2] [i_0]))))));
                                arr_15 [1] [1] [1] [i_3] [15] [i_1] = (((((max(0, (arr_2 [14] [i_1]))))) <= (((min(var_1, 15743821480056615845)) & ((min(var_4, -7206223402605788039)))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        var_23 *= var_2;
                        arr_19 [i_0] [i_1] [i_0] [i_1] [i_2] [i_0] = var_14;
                        var_24 *= ((var_17 == (126 >= var_14)));
                    }
                    var_25 = (arr_2 [i_0] [i_0]);
                }
            }
        }
    }
    var_26 *= (max(0, 0));
    var_27 -= ((-(~var_11)));
    var_28 = (((((1 ? var_8 : var_2))) * ((-(0 / 1)))));
    #pragma endscop
}
