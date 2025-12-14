/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_18 = 3124535212;
                    arr_10 [i_0] [i_1] [i_2 + 1] = max(127, 1170432083);
                }
            }
        }
    }
    var_19 = ((((((3 ? 127 : 127)))) && ((((((3903397162 ? var_2 : 4294967288))) ? 0 : 4294967295)))));
    var_20 = ((((((max(-74, 74))) ? ((1302618129 ? 3365936001 : var_0)) : (max(3124535212, 1477289154))))) ? var_10 : var_5);
    #pragma endscop
}
