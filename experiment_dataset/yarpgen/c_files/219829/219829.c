/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 15697;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] = (min((6213652560561094230 || 963559565), (min(((((arr_1 [i_2]) ? (arr_1 [i_0]) : 1))), (arr_0 [i_0])))));
                    arr_7 [i_0] [i_2] [i_2] = ((-(((arr_3 [i_1 + 1] [i_1 + 1] [i_2 - 1]) ? (arr_3 [i_1 + 2] [i_2] [i_2 - 1]) : (arr_3 [i_1 + 1] [i_1 + 1] [i_2 - 1])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                {
                    var_16 |= (((((-(~0)))) ? (arr_11 [i_5] [i_3]) : ((var_5 ? (((min((arr_9 [i_3]), (arr_14 [16] [i_4] [16]))))) : (var_12 % var_2)))));
                    arr_16 [i_3] = (arr_10 [i_3 + 1]);
                    var_17 = (max(var_17, (((((((arr_15 [6]) ? ((((arr_10 [i_5]) ? (arr_10 [i_4]) : (arr_9 [i_3])))) : (max(var_7, (arr_15 [20])))))) ? (~var_9) : (min((min(var_13, var_1)), 15714)))))));

                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_3] [i_4 + 1] [i_6] [i_6] |= ((((max((arr_11 [i_6] [i_5]), ((max((arr_12 [i_5] [i_4]), (arr_17 [i_3] [i_4] [i_4] [i_6]))))))) ? ((((var_6 ? (arr_8 [i_4] [i_6]) : (arr_10 [i_5]))))) : (((arr_19 [i_3] [i_3 + 1] [i_4 - 1] [i_5 - 1] [i_3] [i_4 - 1]) ? (arr_14 [i_6] [i_4 + 1] [i_5 - 1]) : (arr_14 [i_6] [i_4 - 3] [i_5 + 1])))));
                        arr_21 [i_3] [i_3] [i_3] = (min((((~(arr_18 [i_3] [i_4 + 1] [i_6] [i_3 - 1])))), 1));
                        var_18 -= (!15697);
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_3] [i_3] [i_5] [i_7] [i_3] = ((min((((var_11 ? var_1 : (arr_8 [i_5] [i_5])))), ((var_2 ? (arr_15 [i_3]) : var_3)))));
                        var_19 |= (~((1261579022 ? (~-4463612227525530141) : (~15697))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_28 [i_4 + 1] [i_3] = (((max((min((arr_14 [i_3] [i_3] [i_5]), (arr_27 [i_3] [i_4 - 1]))), (max((arr_8 [i_8] [i_3]), (arr_26 [i_8] [i_5] [i_4] [i_3]))))) - ((-3033388280 ? ((var_5 ? (arr_24 [4] [4] [i_5] [i_8]) : 25787)) : (min((arr_26 [i_3 + 1] [i_3 + 1] [i_5 - 2] [i_8]), (arr_17 [i_3 - 2] [i_4] [i_5 - 2] [i_4])))))));
                        var_20 = (min((((var_13 ? (arr_9 [i_3 - 1]) : (arr_18 [i_3] [i_4 - 3] [i_5 + 1] [i_8])))), ((~(min(62515, 13742444491878823891))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
