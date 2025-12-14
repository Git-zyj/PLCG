/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_14 << (var_5 - 3963572386)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] [i_1] = (((((!(arr_7 [i_2] [i_1] [i_0])))) == (((arr_7 [i_0] [i_2] [i_2]) ? var_2 : (arr_7 [i_2] [i_1] [i_0])))));
                    var_18 = (-(arr_1 [i_0]));
                }
                var_19 = (((min(((var_5 ? var_14 : (arr_4 [i_0] [i_0] [i_0] [i_0]))), (((var_1 ? var_6 : var_9))))) << (((((((var_12 ? var_13 : var_10))) ? var_9 : var_5)) - 594602872))));
                var_20 ^= (((((var_16 ? var_3 : (arr_2 [i_1])))) ? (((arr_2 [i_0]) ? var_2 : (arr_2 [i_1]))) : ((var_11 ^ (arr_2 [i_0])))));
            }
        }
    }
    var_21 = (-115 || 63059);
    #pragma endscop
}
