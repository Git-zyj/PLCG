/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (max(var_10, ((((((arr_1 [i_0]) == var_2)) ? (min(-32754, (max(0, 0)))) : 32754)))));
                arr_5 [1] [i_1] [i_1] = 850676247;
                arr_6 [i_1] = (min((((var_5 ? -32738 : -27802))), 0));
                arr_7 [i_0] [i_1] = ((((var_8 <= 1319945735) ? (((arr_3 [i_1]) ? 490343019 : 4294967283)) : 4294967295)));
                arr_8 [i_0] = (((((!(!var_6)))) - (((!(arr_3 [i_0]))))));
            }
        }
    }
    var_11 = ((((min(var_7, var_8)) <= var_2)) ? (((min(var_9, var_9)))) : var_7);

    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_12 = 27801;
        arr_13 [i_2 - 1] [i_2] = ((((!((max((arr_12 [i_2]), 913137854))))) ? var_0 : ((((-27812 && ((!(arr_11 [i_2])))))))));
    }
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_13 = ((!((min(2537576340, (((arr_9 [i_3]) ? var_7 : 2437260509905952351)))))));
            var_14 = (arr_17 [i_4] [i_3 - 1]);
            arr_20 [i_4] = (!19006);

            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                arr_25 [i_4] [i_4] = 1273014312867997737;
                arr_26 [i_4] [i_4] [i_4] = ((arr_15 [i_3 - 2] [i_3 - 2]) * var_5);
                arr_27 [i_3] [i_4] [i_4] [i_4] = (min(((((min(1, var_5))) ? (((arr_16 [i_3] [1]) ? 9223372036854775807 : 9223372036854775796)) : (((32747 ? (arr_9 [i_3]) : (arr_12 [i_3])))))), ((min((((arr_12 [8]) ? 1 : 15141)), (arr_14 [i_5]))))));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                arr_30 [i_3] [10] [i_4] [i_6] |= (min((arr_15 [i_3 - 2] [i_3 - 1]), ((var_2 >> (arr_15 [i_3 - 3] [i_3 - 3])))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_36 [i_8] [i_8] [i_7] |= (arr_34 [i_3 - 1] [i_4] [i_6] [i_7] [i_8]);
                            arr_37 [i_8] [i_8] [i_8] [4] [i_6] [i_4] [i_8] |= 19006;
                            var_15 = ((arr_16 [i_3 + 1] [0]) >= ((((arr_23 [i_3 - 3] [i_3 + 1]) || (arr_23 [i_3 - 1] [i_3 - 2])))));
                            arr_38 [i_3 - 3] [i_3] [i_4] [9] [i_4] [i_7] [16] = ((!((max((var_5 - var_7), 972833760)))));
                            var_16 = ((!((((arr_22 [i_4] [i_7] [i_8]) ? var_9 : (((arr_24 [i_3] [i_4] [i_4] [i_8]) + 115)))))));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                var_17 = (((var_0 || var_9) ? 4294967295 : (arr_10 [i_4])));
                arr_42 [i_3] [i_4] = (((max(var_5, 0))));
            }
        }
        var_18 = (max(var_18, 80));
        arr_43 [i_3 - 3] = (arr_11 [i_3]);
        var_19 = (((!(arr_28 [i_3] [i_3] [i_3] [i_3]))));
    }
    #pragma endscop
}
