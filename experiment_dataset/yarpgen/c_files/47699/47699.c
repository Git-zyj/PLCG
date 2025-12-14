/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 -= (max(1, (min(var_0, var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] [i_0 + 1] = (min((max((arr_2 [i_0 + 1] [i_0 + 1]), (arr_1 [i_1]))), (((var_5 || ((var_6 && (-127 - 1))))))));
                var_14 ^= ((1 >= ((~(arr_1 [i_0 + 1])))));
                var_15 = (max((((!(~1)))), ((((((arr_3 [i_0] [i_1 + 2] [i_1]) || (arr_3 [i_1] [i_1] [8])))) & var_7))));
            }
        }
    }
    var_16 |= ((var_4 % (((~var_7) ? 1 : var_1))));
    #pragma endscop
}
