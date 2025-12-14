/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = ((((arr_6 [i_1]) || (arr_6 [i_1]))));
                arr_7 [i_1] [i_1] [i_0] = (arr_4 [i_1]);
                var_19 = ((-((~(arr_5 [i_1 - 3] [i_1 - 2])))));
            }
        }
    }
    var_20 = ((!var_4) ? (((((var_9 ? var_12 : var_3))) + ((var_8 ? var_0 : var_2)))) : var_10);
    var_21 = var_14;
    var_22 = 1362849325835809081;
    var_23 = var_0;
    #pragma endscop
}
