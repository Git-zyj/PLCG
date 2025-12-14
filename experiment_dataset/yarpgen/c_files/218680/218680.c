/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min(((var_8 ? var_14 : 32767)), 114))) ? (--107) : ((((-1 ? 32780 : var_0)) % 18446744073709551615)));
    var_17 = (!var_3);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_2] = ((-(min((min(7544, 18446744073709551615)), 217))));
                    arr_10 [i_2] [i_1] [i_2] = var_15;
                    var_18 = ((((var_11 == (arr_5 [i_1] [i_1 + 1] [i_1 + 2]))) ? (arr_5 [i_1] [i_1 - 1] [i_1 + 2]) : (((arr_5 [i_1] [i_1 + 1] [i_1 + 2]) ? var_9 : (arr_5 [5] [i_1 - 1] [i_1 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
