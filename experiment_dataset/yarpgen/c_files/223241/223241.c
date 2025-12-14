/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(1 | 244)));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((~(arr_1 [i_0])));
        var_12 = (((((((min((arr_2 [i_0]), (arr_1 [i_0])))) ? (arr_0 [i_0] [i_0]) : (var_4 ^ var_2)))) ? var_10 : ((max(31039, ((min(-84, var_4))))))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = var_7;
        var_13 = (((arr_2 [i_1 - 1]) == ((((!(arr_7 [i_1])))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_17 [i_5] [i_5] [i_2] = (max(((var_7 ^ ((((arr_15 [i_5]) ? -3 : 127))))), ((min(((max(65505, (arr_9 [i_1] [i_3])))), ((~(arr_15 [i_5]))))))));
                                var_14 -= ((((var_4 ? (arr_1 [i_4 + 1]) : (arr_1 [i_4 - 1])))) && ((((arr_15 [i_4]) << (((arr_6 [i_1]) ^ 1))))));
                                var_15 = (max(var_15, 1355595151));
                            }
                        }
                    }
                    arr_18 [i_1] [i_2] [i_2] [i_3] = ((-((((min((arr_10 [i_1] [i_2] [i_3]), var_2))) ? ((var_5 ? var_10 : var_10)) : 65535))));
                    arr_19 [i_1] [i_2] [i_3] = arr_10 [i_1] [i_3] [i_3];
                }
            }
        }
        arr_20 [i_1] [i_1] = (max((max(65535, (arr_4 [i_1 + 2]))), 65528));
        arr_21 [i_1] [i_1] = ((-((var_8 ? var_5 : (var_6 || var_8)))));
    }
    var_16 += var_7;
    #pragma endscop
}
