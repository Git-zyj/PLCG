/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((((var_3 + var_1) < var_7))) >= var_0)))));
    var_15 = ((((var_5 ? var_10 : (max(var_8, var_0)))) < var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (max(var_9, (((((max(var_6, var_6))) || ((min(var_10, var_11))))))));
                arr_5 [21] = (min(((var_12 % (arr_1 [i_0]))), (((!(237 + 127))))));
                var_16 = ((((((min(18766, (arr_2 [i_1] [i_0])))) >> (((arr_0 [14]) - 82)))) > ((min(255, var_6)))));
            }
        }
    }
    #pragma endscop
}
