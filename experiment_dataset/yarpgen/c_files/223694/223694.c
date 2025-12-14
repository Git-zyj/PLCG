/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= 40377;
    var_13 = ((var_9 ? var_10 : ((var_6 << (((var_3 << 1) - 118240))))));
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] |= ((max(((max(1, (arr_3 [i_0])))), (((arr_3 [i_0]) ? (arr_1 [i_0] [i_0]) : var_2)))));
        var_15 -= (((((((!(arr_3 [i_0]))) || (((1 ? var_9 : var_5)))))) % (((((max((arr_1 [i_0] [14]), var_8))) >= 1)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = (min(var_16, ((max(((1 ? (arr_3 [i_1]) : (arr_1 [i_1] [i_1]))), (((((1 ? 1 : 1))) ? (var_10 && 8188) : 1)))))));
        var_17 = 1;
        var_18 *= ((var_11 ? (((!var_11) ? 8166 : ((20819 ? var_10 : (arr_6 [1]))))) : (((((max((arr_6 [i_1]), 43611))) > 20841)))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((((!var_1) ? var_5 : ((((arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1]) == var_5))))))));
                            arr_20 [i_2] [1] [i_2] = ((((((((~(arr_11 [i_1] [i_1] [i_1])))) ? (arr_18 [i_5] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]) : ((57347 ? 1 : 0))))) ? ((max((max(var_4, (arr_3 [i_3 - 1]))), ((((arr_16 [i_5] [i_4] [i_3 - 1] [i_1] [i_1] [i_1]) != (arr_1 [i_3] [i_1]))))))) : ((min((max(1, 38775)), var_6)))));
                            var_20 += (!(arr_16 [i_1] [9] [i_1] [i_1] [i_1] [i_1]));
                        }
                    }
                }
            }
            var_21 = var_1;
        }
        var_22 -= 1;
    }
    #pragma endscop
}
