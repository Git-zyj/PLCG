/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218107
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
                var_13 = (((((1 ? -1168103414 : (((arr_0 [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : 59564))))) ? (arr_3 [i_0] [i_0] [i_0]) : (((-(((!(arr_2 [i_0] [i_0])))))))));
                var_14 = 1659520117;
                var_15 *= -81;
                arr_6 [i_1] &= 0;
            }
        }
    }
    var_16 = (max(var_16, (((((max((min(218, 1659520129)), (!var_1)))) ? (~-1659520118) : ((30491 ? 0 : var_3)))))));
    #pragma endscop
}
