/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            var_11 = (min(var_11, ((max(var_10, var_7)))));
            var_12 = (min(((min((arr_3 [i_0]), var_3))), (min(((max((arr_5 [5] [i_0] [5]), var_5))), (min((arr_3 [i_0]), (arr_1 [i_0])))))));
            var_13 = (max((min((arr_3 [i_0]), -932086416483828739)), (max((max(var_5, 932086416483828738)), ((max(4176664156, var_0)))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 = (min(((max((max(var_7, 1)), 84))), (min(1, -7193520513509375490))));
            var_15 = (max((min((-127 - 1), (arr_3 [i_0]))), (min((min((arr_7 [3] [i_0]), (arr_0 [3]))), (min(var_3, -932086416483828738))))));

            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                var_16 = (min((((max((arr_1 [i_0]), var_3)))), (max(171, (min(17740, -7032573929218988646))))));
                var_17 = (min(8, 59528));
            }
            var_18 = ((min((min(var_8, (arr_10 [7]))), ((max(932086416483828738, var_7))))));
            var_19 = (min((max(((min(var_5, var_1))), (max((arr_3 [i_0]), (arr_12 [i_0] [6]))))), ((min(((max(1, var_10))), (min((arr_2 [i_0] [i_0]), 41)))))));
        }
        var_20 = (((min((arr_5 [i_0] [7] [i_0]), 16777215))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_21 = (min(((min((arr_12 [i_0] [i_5]), var_10))), (min((min(var_8, var_1)), var_10))));
                        var_22 = (max((min((min(var_6, var_2)), ((max((arr_6 [i_0] [i_0] [i_5]), 0))))), (((max((arr_19 [i_0] [i_0] [i_5] [i_6]), (arr_0 [i_5])))))));
                        var_23 = (max(var_23, (arr_10 [i_0])));
                        var_24 = (min((((min(var_7, 1090715534753792)))), (min((max(9223372036854775807, (arr_8 [i_0] [i_4] [i_4]))), (arr_1 [i_0])))));
                    }
                }
            }
        }
    }
    var_25 = (max((min(var_9, (min(var_6, 4028150441)))), 932086416483828738));
    var_26 = ((min(0, 647044075)));
    var_27 = (max(var_8, var_7));
    #pragma endscop
}
