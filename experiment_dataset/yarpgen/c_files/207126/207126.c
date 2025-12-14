/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_8 ? (var_10 ^ 4410) : (((max(var_5, var_16))))))) ? var_17 : (((var_4 << (((~var_11) - 67)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_20 *= (((((var_8 ? var_6 : var_10))) ? ((((0 ? (arr_0 [i_0]) : 1)))) : 58555));
                arr_5 [i_0] = ((~((((~(arr_4 [i_1])))))));
            }
        }
    }
    var_21 = -61126;
    var_22 = ((-((((((var_7 ? var_2 : var_14))) != ((var_6 ? var_4 : var_3)))))));
    #pragma endscop
}
