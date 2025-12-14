/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((4294967295 > (max(var_10, var_3))))))));
    var_17 = (min(var_17, (((var_14 & (((~31921) ? -31926 : (~0))))))));
    var_18 = (((((max((-32767 - 1), -31912))) ? var_7 : var_10)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = ((-(((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])))));
                arr_6 [i_1] = ((((1 ? (arr_4 [i_1]) : (((arr_0 [11] [11]) ? var_9 : -31922)))) != (arr_2 [i_0 + 1])));
                var_20 = (min(var_20, (arr_0 [i_1] [i_0 + 1])));
            }
        }
    }
    #pragma endscop
}
