/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = var_0;

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_13 *= (min(((((arr_3 [i_2]) - (arr_3 [i_2])))), (max((arr_0 [i_2]), var_10))));
                arr_9 [i_2] [i_1] [i_2] &= ((min((arr_0 [i_2]), (arr_0 [i_2]))));
            }
            var_14 |= 442096926;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_0] [i_0] = ((~(max(var_3, (((arr_5 [i_0] [i_0] [i_0]) ? -2189118346599415110 : (arr_7 [i_0] [i_3] [i_0])))))));
            var_15 = (((((10 ? var_6 : -12810))) ? (max(10, -1390145369)) : (arr_5 [i_0] [i_3] [i_3])));
            arr_13 [i_0] [i_0] = ((2147483647 ? ((((-201102515 ? 0 : 761754301)) | (arr_0 [i_0]))) : var_2));
            var_16 = 252;
        }
        arr_14 [6] |= (432633846 > 11831127144859630988);
        var_17 = 0;
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        arr_18 [i_4] = ((((((arr_8 [i_4 + 1]) ? ((((arr_16 [i_4]) || var_2))) : ((((arr_11 [i_4] [i_4] [i_4]) && 745980502)))))) ? (arr_1 [18]) : ((~(~var_12)))));
        var_18 = (max(var_18, ((var_10 ? 201102494 : 10))));
        arr_19 [i_4] [i_4] &= -114;
        arr_20 [i_4] = ((min((arr_16 [i_4 - 1]), -1940459678)));
        var_19 = ((-((((((-(arr_15 [i_4]))) + 2147483647)) << (((-var_1 + 37) - 21))))));
    }
    var_20 |= (((-8925434434265048515 && -540095079) ? (((var_10 ? var_1 : -32766))) : var_7));
    #pragma endscop
}
