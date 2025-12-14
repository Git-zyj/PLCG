/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((var_9 ? var_10 : ((((-1576517431 ? var_1 : -755799342)) * var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((((18446744073709551608 != (((((arr_2 [i_0 + 2]) != (arr_0 [i_1] [i_0]))))))) ? (((~var_8) ? (arr_3 [i_0 - 1]) : (arr_6 [i_0 - 1]))) : 755799342)))));
                arr_7 [2] [i_1] = (arr_1 [i_1]);
                arr_8 [i_0] [i_1] = (min((arr_3 [i_0]), (arr_6 [i_0])));
            }
        }
    }
    var_20 = (min(var_20, -755799342));
    #pragma endscop
}
