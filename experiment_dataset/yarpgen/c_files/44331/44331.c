/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((min(1, 18446744073709551596)) * (var_2 / var_10))) >> var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = ((~((min(1, (arr_3 [i_1 + 3] [i_1]))))));
                arr_4 [i_0] [13] = min(((-(arr_0 [i_1]))), ((((1 && 1) != (((arr_1 [i_0]) ? var_11 : var_4))))));
                arr_5 [i_0] [i_1] = (((max((var_15 > var_10), ((1 ? var_11 : (arr_0 [i_0]))))) == (1 << 1)));
            }
        }
    }
    var_22 = ((((-((var_17 ? 14538 : var_5))))) ? ((((1 ? var_7 : 4095)))) : (((var_13 <= 65535) ? -var_13 : var_3)));
    #pragma endscop
}
