/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(4068844687, ((~(max(2439322871573485969, 1)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 += var_9;
        arr_3 [9] |= ((226122611 ? ((~((var_5 ? (arr_1 [i_0]) : 226122609)))) : ((-(4068844711 % 4068844662)))));
        arr_4 [i_0] [i_0] = ((226122555 ? 993161107 : 10078));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] [i_1 - 1] = -2071570771;
        var_22 = ((min((arr_2 [i_1 + 1]), (arr_2 [i_1 - 2]))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_3] [i_3] [i_3] [1] [i_6] = ((arr_19 [i_2] [i_3] [i_5] [i_5] [i_6]) / (arr_19 [i_6] [i_3] [i_4] [i_5] [i_6]));
                                var_23 = (((arr_11 [i_4 - 2] [i_4 - 2] [i_4]) ? 0 : (arr_21 [i_4 - 2])));
                                arr_23 [i_3] [i_3] [i_3] = (arr_20 [i_2] [6] [i_6] [i_3] [i_4 - 2]);
                                var_24 = (arr_15 [i_2] [i_3] [i_4 + 1] [i_5]);
                                var_25 = (arr_18 [i_5] [i_5] [i_4 - 1] [i_5] [5] [1]);
                            }
                        }
                    }
                    var_26 = (min(var_26, (((4068844706 ? 0 : var_14)))));
                    arr_24 [i_2] [i_3] [5] [i_3] = (((arr_20 [i_2] [i_3] [9] [i_3] [9]) ? (arr_8 [i_4 - 2]) : -966));
                }
            }
        }
        arr_25 [6] [i_2] |= 4068844699;
        arr_26 [i_2] [i_2] = ((!((((arr_17 [i_2] [i_2] [6] [i_2] [6]) | (arr_15 [7] [1] [i_2] [1]))))));
        var_27 &= (var_0 || 226122609);
    }

    for (int i_7 = 4; i_7 < 7;i_7 += 1)
    {
        var_28 = ((~-8) ? ((((((10062 ? 11 : 99)) != (arr_27 [i_7 - 3]))))) : ((((((arr_0 [i_7] [5]) ? (arr_6 [i_7] [i_7]) : var_1))) ? 1 : (arr_2 [i_7 + 2]))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        var_29 = (max(var_29, ((((-(arr_27 [i_7 - 4])))))));
                        var_30 = (max((max(226122572, (arr_38 [i_7 - 3]))), (0 && var_17)));
                    }
                }
            }
        }
    }
    var_31 = (~231);
    #pragma endscop
}
