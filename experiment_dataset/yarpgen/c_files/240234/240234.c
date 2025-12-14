/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_3 || var_11) && (((((50 ? 206 : 1))) || (!62159)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 |= ((((max(50, 70368744177663))) ? (((!(arr_2 [i_1] [i_2])))) : (((~var_11) ? (-2147483647 - 1) : ((max(-1494, 204)))))));
                    var_16 -= (((arr_2 [i_0 + 1] [i_0 - 2]) < (arr_2 [i_0 + 1] [i_0 + 1])));
                    var_17 = (205 ? (~var_1) : (((arr_2 [i_0 + 1] [i_0 - 2]) ? (arr_1 [i_1] [i_2]) : (arr_5 [i_0 - 2] [i_1] [i_2] [i_2]))));
                }
            }
        }
    }
    var_18 = (max(var_18, var_12));
    var_19 |= (-((-(45582 % var_12))));
    #pragma endscop
}
