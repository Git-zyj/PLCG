/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (((((arr_0 [i_0]) || (arr_1 [i_0]))) ? (((((min(var_11, (arr_0 [i_0])))) || (arr_1 [i_0])))) : ((((((-(arr_1 [i_0])))) || ((max((arr_0 [i_0]), -1778666774005694360))))))));
        arr_3 [i_0] = (max((min((~var_8), (((arr_1 [i_0]) ? 208 : (arr_1 [i_0]))))), (max((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_6)), var_7))));
        var_13 = ((((((max(4677, (arr_0 [i_0]))) || (49 || var_12))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] = var_11;
        arr_8 [i_1] = (!(((-(~var_0)))));

        for (int i_2 = 3; i_2 < 24;i_2 += 1)
        {
            var_14 = (((((var_9 ? var_7 : var_1))) || var_10));
            arr_11 [i_1] = ((1378313011869483060 ? 126 : 8115618419046461989));
        }
        arr_12 [i_1] = max(var_6, ((((((-(arr_4 [i_1])))) || var_2))));
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_15 = ((~(min((arr_9 [i_3 + 1] [i_3 - 1]), (arr_5 [i_3 - 1])))));
        var_16 = (((max(65, 36))));
        arr_15 [i_3] = (min(((((((var_7 ? var_9 : -1044028436))) || 165))), (max((min((arr_4 [i_3]), (arr_5 [i_3]))), (!var_0)))));
    }
    var_17 = min((((!(var_1 || var_11)))), (max((-60 || var_6), var_10)));
    var_18 = (max((1778666774005694363 || var_3), (max((max(var_9, var_8)), var_5))));
    var_19 = (((((var_4 ? ((min(var_7, var_1))) : ((max(var_4, var_5)))))) || var_2));
    var_20 = (((((~(min(12602887759876124247, 3354889579))))) ? (((((min(var_0, var_2))) ? (1 || 23) : var_4))) : (min(var_10, 32767))));
    #pragma endscop
}
