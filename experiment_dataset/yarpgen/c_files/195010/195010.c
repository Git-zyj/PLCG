/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (max(var_11, (((((((-(39 < var_9))) + 2147483647)) >> var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((12288 ? (((min((arr_3 [i_0] [0]), var_3)))) : ((var_0 - (arr_3 [i_0] [i_1]))))))));
                arr_7 [i_1] [i_1] = (((~var_7) & (min(var_6, (arr_0 [i_1] [i_0])))));
                arr_8 [i_1] [i_1] [i_1] = ((var_1 - -744130534975780830) ? (max((3064824592197669526 || 1), (min(var_3, var_6)))) : 1);
                arr_9 [i_1] = 6480529075237803250;
            }
        }
    }
    var_13 = min(-1064726778, -1064726778);
    #pragma endscop
}
