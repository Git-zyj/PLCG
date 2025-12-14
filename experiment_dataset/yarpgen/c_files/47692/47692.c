/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [0] [0] &= (min(var_6, (((~var_5) ? ((var_6 ? var_7 : 1484927290252476533)) : (((max(var_3, (arr_5 [6] [i_0] [i_0] [14])))))))));
                    var_11 ^= (((((((var_8 ? var_3 : var_1))) ? (arr_6 [i_2] [i_1 + 2] [18]) : ((0 ? 223 : 0)))) == (var_4 - 11)));
                }
            }
        }
    }
    var_12 &= (((((-var_7 ? (((var_4 ? var_5 : var_5))) : (max(var_6, var_7))))) ? var_0 : ((((((var_5 ? 231 : var_5))) ? (var_5 * var_2) : ((max(255, 231))))))));
    #pragma endscop
}
