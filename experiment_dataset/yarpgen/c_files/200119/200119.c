/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = (((((117807105511580440 ? 117807105511580446 : 18328936968197971170))) ? (((((-(arr_4 [i_2] [i_0])))) ? (arr_3 [i_2]) : -18328936968197971200)) : ((((min(48686, (arr_0 [i_1]))))))));
                    var_21 = (~(min(18328936968197971175, 818325746)));
                    var_22 ^= (arr_7 [i_0]);
                }
            }
        }
    }
    var_23 = (min(var_4, var_0));
    var_24 = (min(var_24, var_14));
    var_25 = var_4;
    #pragma endscop
}
