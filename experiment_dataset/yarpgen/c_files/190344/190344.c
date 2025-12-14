/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(var_5, (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : 25))));
                arr_6 [i_0] [i_0] [i_0] = (((arr_1 [i_0 + 1]) / 830547078));
                var_17 = ((206 ? ((((5275775419883094750 > (!830547078))))) : (((((-98 ? (arr_4 [i_0] [i_0 + 1] [i_0 + 1]) : 562949953421311))) ? 830547078 : ((max(3072, (-127 - 1))))))));
                var_18 = ((((max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))) + var_6));
            }
        }
    }
    var_19 &= ((var_11 ? (min(((min(0, var_4))), (-71 + 89379579))) : (((65515 ? var_15 : var_4)))));
    var_20 = (((((-(~var_2)))) && ((min((!208), var_4)))));
    #pragma endscop
}
