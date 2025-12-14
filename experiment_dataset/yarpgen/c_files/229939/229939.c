/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 18446744073709551615));
    var_13 = (min(var_7, (max(var_9, (min(0, var_6))))));
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (((arr_4 [i_1] [i_1] [i_0]) ? (((((~(arr_2 [i_0]))) << ((((var_10 ? var_5 : var_6)) - 205))))) : 72057594037927872));
                arr_6 [i_1] [i_1] [i_1] = ((-((~((44 ? 896 : (arr_4 [i_0] [i_0] [i_1])))))));
            }
        }
    }
    var_16 = -2636377200531359360;
    #pragma endscop
}
