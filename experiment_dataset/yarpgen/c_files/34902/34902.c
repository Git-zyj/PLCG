/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_5 | var_13);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (max(((((min(var_1, var_13))) ? (((var_5 + 2147483647) >> (var_2 - 15344))) : ((var_10 ? (arr_5 [i_1] [i_1] [1]) : var_10)))), ((((arr_4 [i_2] [i_1] [i_0]) == (arr_7 [i_0] [i_0] [i_0]))))));
                    var_16 = ((~((((arr_5 [i_0] [i_0] [i_2]) >= var_12)))));
                    arr_8 [i_1] [i_0] = (min(((((((6171998429233524152 ? -6171998429233524142 : var_0)) + 9223372036854775807)) >> ((((var_0 ? var_12 : 15176)) + 10612)))), ((max((((var_12 + 2147483647) >> (((arr_1 [1]) - 1081063480086678665)))), ((max((arr_6 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0])))))))));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            var_17 = (min(var_17, -6171998429233524164));
                            arr_15 [i_0] [i_3] = var_6;
                            var_18 = ((((((arr_11 [i_0]) ? ((max(var_8, -5977))) : (((arr_10 [i_3] [i_1] [i_1] [i_1] [i_1]) ? var_2 : 7))))) ? -3635476154451754169 : ((max((arr_2 [i_4 + 1] [i_4 + 2] [i_4]), -var_8)))));
                            arr_16 [i_3] [i_3] [i_3] [i_3] = ((3635476154451754163 ? (max(var_1, 0)) : (((~((min(var_4, (arr_13 [i_0] [i_0] [i_2] [i_2] [i_0] [i_4 + 3])))))))));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_19 = ((var_7 ? ((~(~6171998429233524176))) : var_2));
                            arr_19 [i_2] [i_3] [i_2] = var_10;
                            arr_20 [i_5] [i_1] [8] [i_3] [i_5] &= var_0;
                        }
                        arr_21 [i_3] [i_3] [i_3] [i_0] = arr_14 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3] [i_3 + 1];
                        var_20 = (max(var_20, var_10));
                        var_21 -= 1;
                    }
                }
            }
        }
    }
    var_22 = ((((max(var_12, ((var_1 ? 224 : var_7))))) ? var_2 : ((min(var_1, var_13)))));
    #pragma endscop
}
