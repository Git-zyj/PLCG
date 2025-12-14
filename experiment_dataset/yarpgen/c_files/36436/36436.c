/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((min(((234 ? var_1 : 1)), (var_7 | var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = 1;
                arr_6 [i_1] [i_1] = 118;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_14 = (min(var_14, ((((max((~var_1), ((min(1, var_3))))) >> ((var_2 ? (arr_0 [i_0 + 3] [i_1]) : (arr_0 [i_0 + 3] [i_1]))))))));
                    arr_10 [10] [10] [i_1] [i_2] = ((((((var_1 - var_11) ? (((!(arr_1 [i_2])))) : (225 && 3584)))) == (arr_1 [i_1])));
                }
            }
        }
    }
    var_15 = var_5;
    #pragma endscop
}
