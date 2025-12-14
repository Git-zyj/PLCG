/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (109 & 29903)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_15 = 1;
                        var_16 = (((((~(!1)))) ? (!1) : (max((2334894484 && 31), (1 * var_5)))));
                        var_17 |= (((((max(var_6, (arr_4 [16] [i_1] [i_2]))) / (((var_11 ? (arr_2 [i_2]) : 47266))))) / ((((min(1, 14)))))));
                    }
                }
            }
        }
        arr_11 [i_0] = (((((var_7 ? var_11 : var_12) - (!31297)))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        arr_14 [1] = ((-(18446744073709551615 && 60)));
        var_18 = (arr_13 [i_4]);
    }
    var_19 |= var_5;
    #pragma endscop
}
