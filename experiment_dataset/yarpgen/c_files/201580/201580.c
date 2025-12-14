/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((140737488355320 && (((var_5 ? 1 : 1)))))), var_7));
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (arr_6 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 &= (((((!var_2) != -1945557104)) ? (((arr_1 [i_0 - 3]) / (arr_1 [i_0 - 1]))) : ((((max(1, 57935))) - 1))));
                                arr_14 [i_0 - 3] [i_0 - 3] = 224;
                                arr_15 [i_0] [17] [i_2] [17] [10] = (min(((((((var_8 ^ (arr_3 [i_2] [i_3] [i_4])))) || ((((arr_7 [i_0 + 2] [i_1] [11]) ? var_9 : (arr_7 [i_0] [i_0] [i_0]))))))), ((826816437 ? 1298780679286340602 : 2778))));
                                var_13 += arr_7 [i_0] [i_1] [i_4];
                                var_14 += ((((-var_0 * (var_2 == var_0))) + ((((!(arr_12 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_3 - 3] [i_4])))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = (arr_11 [i_5] [i_5] [i_5]);
        var_15 = (max(var_15, 65535));
        var_16 = (!1);
        var_17 = (max(var_17, (((((min(423523528, (arr_2 [i_5] [i_5] [i_5])))) == ((((arr_0 [i_5]) ? (arr_5 [i_5]) : (arr_10 [1] [1] [i_5] [i_5] [i_5] [i_5])))))))));
    }
    #pragma endscop
}
