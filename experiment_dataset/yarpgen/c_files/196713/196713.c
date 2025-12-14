/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 *= max(88, 88);
        var_19 = arr_1 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = ((((max((arr_3 [i_2]), var_1))) ? (((arr_1 [i_1]) / var_6)) : ((((arr_3 [i_1]) && (((var_5 ? (arr_3 [i_0]) : var_2))))))));

                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        var_21 = var_10;
                        arr_8 [i_2] [i_2] [i_1] [i_2] = ((((((arr_4 [i_2] [i_3 - 3] [i_3 - 3] [i_2]) ? var_3 : (arr_4 [i_2] [i_3] [i_3 - 3] [i_2])))) ? (((arr_4 [i_2] [i_3 - 2] [i_3 + 1] [i_2]) ? (arr_4 [i_2] [i_3 - 3] [i_3 - 1] [i_2]) : var_7)) : ((~(arr_4 [i_2] [i_3] [i_3 - 1] [i_2])))));
                    }
                    var_22 = ((((((-78 ? 127 : 89)) >= ((((arr_0 [i_0]) < var_1))))) ? (!var_6) : ((-((min(109, -66)))))));
                }
            }
        }
    }
    var_23 = ((~(((!var_4) * (((var_15 != (-127 - 1))))))));
    var_24 = ((-var_1 || (((var_10 ? var_16 : (var_9 >= var_1))))));
    var_25 &= (((((var_3 / ((max(var_4, var_1)))))) && (var_0 <= var_17)));
    #pragma endscop
}
