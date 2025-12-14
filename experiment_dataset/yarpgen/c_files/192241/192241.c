/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_6;
    var_13 = (max(var_13, var_8));
    var_14 = var_10;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 = (21680 % 20220);
            var_16 = (max(var_16, (((arr_3 [18] [i_0 + 1]) == (var_8 & var_0)))));
            var_17 = 100663296;
        }
        var_18 = (min(var_18, -1));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_2] [i_3] [i_2] = ((((((!-5735781416838798478) ? var_2 : var_11))) && var_7));
                    arr_18 [i_2] [i_3] [i_3] [i_2] = ((((((arr_15 [i_2] [i_4 - 2] [i_3]) + 331229287837438325))) + ((var_1 ? var_1 : var_10))));
                    var_19 = (min((((var_1 ^ ((54 ? var_1 : var_0))))), (max((min(-20, var_5)), 1264133076))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((((244 ? 27 : 1852295895213397852))))));
                                arr_23 [i_3] [i_3] [i_4 - 2] [i_5] = (max((!var_0), (min((min(2044, 532676608)), var_4))));
                                var_21 = (min((max(1792, -11989)), (arr_19 [3] [i_2] [i_2])));
                            }
                        }
                    }
                }
            }
        }
        var_22 ^= ((63491 >> (-3 + 16)));
    }
    for (int i_7 = 2; i_7 < 12;i_7 += 1)
    {
        var_23 = (max(var_23, var_9));
        var_24 ^= var_3;
        var_25 = (max(var_25, ((max((var_6 >= -54), (min(-11, (arr_3 [i_7] [i_7]))))))));
    }
    var_26 &= var_3;
    #pragma endscop
}
