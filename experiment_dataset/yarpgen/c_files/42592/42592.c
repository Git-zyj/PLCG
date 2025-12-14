/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = var_4;
                arr_5 [i_0] [i_0] [i_0] = (max((min((arr_3 [i_0]), ((215 ? 932 : 932)))), (!1821292876)));
                arr_6 [i_0] = (max(1, (max(-3760, (((var_6 && (arr_4 [0] [0] [i_1]))))))));
            }
        }
    }
    var_12 = ((var_7 ? ((((!32481) >> ((var_5 ? var_6 : var_5))))) : 469250498));
    #pragma endscop
}
