/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = (min(var_18, (((-11818368478280259713 - (((var_13 - (65535 < -101)))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((var_10 < (arr_1 [i_0])))) < (30301 < var_15))) ? (~var_2) : -1);
        var_19 = (max(var_19, (((((!((min(8417555636610195688, var_14))))) ? 4294967295 : ((var_3 ? var_0 : var_4)))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_20 = (min(-280375465082880, (-1 - -1)));
        arr_6 [i_1] [i_1] = (((arr_4 [i_1] [i_1]) ? ((((!65535) < (arr_5 [i_1])))) : ((12 ? var_0 : var_2))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_18 [i_3] [i_3] [i_3] [15] = ((arr_8 [i_2]) - ((((0 == var_6) < (var_3 == var_15)))));
                        var_21 = ((var_8 < ((((var_8 - 14818) ? ((var_1 ? var_10 : var_12)) : (~0))))));
                        arr_19 [i_2] [i_2] [i_3] [i_2] = 4294967295;

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_24 [i_3] = ((((min(var_10, (arr_11 [i_4] [i_3] [i_4])) - var_15))));
                            var_22 = ((((~(arr_9 [i_2] [i_5]))) == ((-1 - (arr_11 [i_2] [i_3] [i_6])))));
                            arr_25 [1] [i_6] [i_3] [i_3] [i_3] [i_2] = 100;
                        }
                        var_23 = (((var_7 == -31) < (arr_11 [i_2] [i_3] [i_5])));
                    }
                }
            }
        }
        var_24 *= ((((max((arr_14 [i_2] [i_2] [i_2]), 4095))) ? ((((min(var_11, var_2))) & var_9)) : 100));
        arr_26 [i_2] [i_2] = var_7;
    }
    #pragma endscop
}
