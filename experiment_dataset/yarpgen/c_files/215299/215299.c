/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    var_21 = (var_11 ? var_1 : ((max(var_1, var_1))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_22 = (max(var_22, ((min((((var_5 || ((max(var_10, var_7)))))), (arr_0 [i_0]))))));
        var_23 = ((~(max(var_12, (arr_1 [i_0])))));
        var_24 = (min(var_24, ((max((!var_8), 15482)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_25 = ((((max((((0 ? 1 : (arr_3 [i_0] [i_1] [i_1])))), (~var_9)))) ? 576460752303423487 : (arr_1 [i_2 - 1])));
                    var_26 = ((((((arr_6 [i_0] [i_2 - 3] [i_2]) ? (arr_6 [i_0] [i_2 + 1] [i_0]) : (arr_6 [i_2] [i_2 + 1] [i_2])))) || ((max((((arr_2 [i_0]) ? var_15 : (arr_7 [i_0] [i_1] [i_2]))), var_15)))));
                }
            }
        }
        arr_8 [i_0] [i_0] = ((~((max(-15510, -92)))));
    }
    var_27 = var_10;
    #pragma endscop
}
