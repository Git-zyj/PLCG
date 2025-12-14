/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((var_5 > (((((var_4 ? var_4 : (arr_4 [i_1])))) ? ((min(4294967289, var_10))) : ((1335690153 ? (arr_4 [i_1]) : (arr_4 [i_1])))))));
                var_21 = arr_1 [i_0 + 1];
                var_22 = var_15;
                var_23 = arr_0 [i_1] [6];
                var_24 = 22615;
            }
        }
    }
    var_25 = (max(52244429, ((var_3 ? (min(var_8, -7936194482856651296)) : (var_12 && var_7)))));
    var_26 = ((var_10 << (var_15 - 2204006258622052891)));
    #pragma endscop
}
