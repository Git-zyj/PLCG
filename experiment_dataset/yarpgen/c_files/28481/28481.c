/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!((((25236 / var_0) ? var_5 : ((max(var_11, 21911)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 &= ((((!((max(18280, var_0))))) && (((((max(var_4, var_6))) ? (((!(arr_3 [i_1])))) : (~var_9))))));
            arr_6 [i_0] [i_0] [i_0] = (arr_3 [i_0]);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        var_14 = (max(var_14, (arr_8 [i_0] [i_0] [i_0])));
                        var_15 = (min(var_15, (((((arr_4 [i_4 - 1] [i_4] [i_4 - 1]) ? (arr_4 [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_4 [i_4 - 1] [i_4 - 1] [i_4 - 1])))))));
                        var_16 ^= (min(((~(arr_3 [i_4 - 1]))), ((max(21886, (arr_3 [i_4 - 1]))))));
                    }
                }
            }
            arr_14 [i_0] [i_0] [i_0] = ((-(((((var_6 ? (arr_2 [i_0]) : 43632))) ? var_3 : (((!(arr_12 [i_0] [i_2]))))))));
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
        {
            var_17 = -var_4;
            arr_17 [i_0] [i_0] [i_5] = ((~(max((~var_10), (max((arr_9 [i_5]), (arr_1 [i_5])))))));
            var_18 = arr_4 [i_0] [i_0] [i_5 + 1];
            var_19 = (47249 >= ((-(~var_4))));
        }
        for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
        {
            arr_22 [i_6] [i_6] = ((min(18287, 9896694106609130965)));
            arr_23 [i_0] &= (-25212 || 8275894522706502258);
            var_20 &= ((var_7 ? var_6 : (((!(arr_21 [i_6 + 1] [i_6] [i_6]))))));
        }
        arr_24 [i_0] = ((-((-(arr_11 [i_0] [i_0])))));
        var_21 = (!21904);
        var_22 = (max(var_22, (arr_2 [i_0])));
    }
    #pragma endscop
}
