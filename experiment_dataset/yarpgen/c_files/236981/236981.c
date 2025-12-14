/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = -var_3;
                    arr_9 [i_0] [i_0] [i_0 + 1] [i_0 + 1] = ((((((((arr_8 [i_0] [i_0 + 1] [i_0]) <= var_8)) ? 3162019282010258467 : (((max((arr_6 [i_0] [i_1 + 1] [i_2 - 3]), var_5))))))) ? var_9 : ((var_6 ? ((max(var_3, var_8))) : (arr_1 [i_0 + 1])))));
                    var_13 = (((var_7 * (((arr_5 [i_1] [i_1]) ? 1 : var_1)))));
                }
            }
        }
    }
    var_14 = (max(var_14, (((((!(235 || 32766))) ? (((var_5 && ((max(var_5, var_7)))))) : (!var_1))))));
    var_15 += (max((((8205752007563964811 || -64) ? 1782677456 : (var_4 * var_6))), ((((((var_6 ? var_4 : var_0))) ? (!var_8) : var_7)))));
    #pragma endscop
}
