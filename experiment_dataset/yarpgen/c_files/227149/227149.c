/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (((((-23 ? (arr_2 [i_0] [i_0]) : 629421442))) ? (max(var_11, (arr_4 [i_0]))) : var_10));
                arr_5 [i_0] [i_0] = (((arr_0 [i_0]) != var_7));
                var_16 = (((arr_2 [18] [i_1]) ? var_12 : ((((arr_4 [i_1]) ? var_10 : -12)))));
                var_17 = (max(var_17, ((((arr_0 [i_0]) ? (max((arr_3 [i_0] [i_0]), (arr_2 [i_0] [i_1]))) : ((var_12 / (arr_0 [i_0]))))))));
            }
        }
    }
    var_18 = ((var_14 ? ((((max(var_5, -12))) ? ((var_14 ? 1630104010 : 8710976521386178124)) : var_7)) : var_5));
    #pragma endscop
}
