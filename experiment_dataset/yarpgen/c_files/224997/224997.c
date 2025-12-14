/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -10062;
    var_15 = (min((min(1, ((-734146358554850446 ? 1 : -734146358554850446)))), (min(var_9, 8160))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [10] [i_0] = (((arr_4 [i_0 - 1] [i_0] [i_0 + 1]) ? (min((((arr_2 [i_0 - 1]) / (arr_0 [11]))), -1187796456)) : ((-(((arr_5 [i_0] [i_1]) - (arr_2 [i_0])))))));
                var_16 = (min(var_16, (((((min(var_5, var_4))) ? ((min((((arr_4 [i_0] [i_1] [i_1]) ? var_8 : (arr_3 [7]))), (!3710452963901855935)))) : var_6)))));
                var_17 = ((((arr_4 [i_0] [i_0] [i_0]) || 18683)) ? var_3 : (min((arr_4 [4] [9] [9]), (((arr_2 [6]) - 66)))));
                var_18 = (min(67, 26));
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
