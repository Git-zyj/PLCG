/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 -= (((arr_2 [i_1]) ? var_9 : (arr_0 [i_1])));
                var_21 = (((2728132765007770073 ? (arr_1 [i_0]) : (arr_4 [5] [i_1]))));
                var_22 = (min(var_22, ((((max((127 != 14075052146604550860), ((-2728132765007770076 / (arr_5 [i_1]))))) == (((4371691927105000755 ? (arr_1 [i_1]) : var_6))))))));
                var_23 = (max(var_23, ((max((max((-9223372036854775807 - 1), ((var_3 ? (arr_1 [i_0]) : -2728132765007770074)))), ((((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [i_0]) : 1))))))));
            }
        }
    }
    var_24 = (min(var_24, 127));
    var_25 += -97;
    var_26 = (max(var_26, var_10));
    #pragma endscop
}
