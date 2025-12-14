/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (min((~var_5), var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (((-((max(0, -9881))))));
                var_13 = ((((((arr_3 [i_0]) ? (!204) : (arr_2 [i_0] [i_1])))) || ((min((-9885 < 162), 9885)))));
                var_14 = (((min((arr_3 [i_0 + 4]), var_7)) + (min((((-(arr_2 [i_1] [i_1])))), -112))));
            }
        }
    }
    var_15 = (min(((-((-2027427267 ? -1747356037130232008 : 18014261070528512)))), 2233834589));
    #pragma endscop
}
