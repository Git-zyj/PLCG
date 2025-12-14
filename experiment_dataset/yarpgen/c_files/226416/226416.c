/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((-1331124641192470042 ? var_10 : (max(var_12, var_0))))), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = ((((max((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1])))) ^ ((max((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1]))))));
                var_19 = (((min((arr_2 [i_0] [i_1]), ((var_7 ? var_10 : var_9))))) ? ((57344 ? -3343737498736533884 : (((var_3 ? (arr_0 [10]) : (arr_1 [i_0] [i_1])))))) : ((min((~var_5), (((32767 > (arr_3 [i_1]))))))));
            }
        }
    }
    var_20 *= (min(((((~var_4) ? (var_7 / var_11) : var_5))), (((((var_9 ? var_0 : 0))) ? var_11 : ((2766579622 ? var_8 : -1))))));
    #pragma endscop
}
