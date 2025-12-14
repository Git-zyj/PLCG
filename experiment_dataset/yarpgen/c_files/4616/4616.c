/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_7 | var_12) ? (max(var_9, (-127 - 1))) : (min((((var_8 ? var_9 : 4064))), var_2))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_15 = ((((arr_1 [i_0]) / ((((arr_2 [i_0]) ? var_1 : 6803315833885167944))))));
            var_16 = ((((max(6803315833885167949, (arr_1 [i_0])))) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        }
        var_17 = (max(5233, (arr_3 [i_0] [i_0] [i_0])));
    }
    var_18 = ((~(var_5 != var_11)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_12 [i_3] [i_2] [i_2] = var_2;
                var_19 = (max(var_19, (((-(max(-201, ((1 ? -8966243772338931707 : 201)))))))));
            }
        }
    }
    #pragma endscop
}
