/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (min(((-((max(var_11, 140))))), (!var_8)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_3] = ((max(2841986231, ((var_0 >> (((arr_9 [i_0] [i_1] [i_0]) + 49)))))));
                        arr_15 [i_0] = (min(var_5, ((-9078599361310351227 * (((9078599361310351233 ? 0 : 113)))))));
                        var_17 = (min(var_17, ((((((((min(var_15, var_0))) || (((var_0 ? var_15 : 9078599361310351214))))))) + -9078599361310351217))));
                        var_18 -= (!1);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_21 [i_0] [i_1] [i_4] [i_5 - 1] [i_5 - 1] [i_4] = (min((min(1, -9078599361310351223)), (((0 << (var_7 - 15985))))));
                        var_19 = ((-(((arr_10 [i_0] [i_1] [i_4] [i_4]) * (7829645159850765497 * var_5)))));
                    }
                }
            }
            var_20 = (~4968527907137823714);
            arr_22 [i_1] [i_1] [i_0] = var_4;
        }
        var_21 = (min(((min(((var_9 || (arr_10 [1] [0] [i_0] [i_0]))), ((!(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))), ((78 ? (((max(1, 1)))) : var_3))));
        arr_23 [i_0] |= var_0;
    }
    #pragma endscop
}
