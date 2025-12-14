/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (max((~var_4), (var_3 ^ 87)));
    var_14 = (((128 ? 153 : var_7)));
    var_15 = (((((180 ? (~42174) : 237))) == var_2));
    var_16 = (max((((var_8 ^ var_3) ? var_5 : var_0)), ((((((-10150 ? 32102 : 33433))) ? ((32102 ? var_3 : 2129493739)) : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (max((var_8 < var_1), (arr_1 [8] [i_1])));
                arr_5 [i_1] [i_1] = var_8;
                var_17 += ((35542436 ? (~31) : (((arr_3 [i_0] [i_1] [i_1]) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_0 [3] [3])))));
                var_18 -= (arr_2 [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
