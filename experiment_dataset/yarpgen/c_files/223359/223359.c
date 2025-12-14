/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = (max(var_18, ((((0 == 1) ^ ((23559 * ((var_14 ? 0 : var_1)))))))));
    var_19 = ((23559 || ((max((~2), ((max(var_6, var_4))))))));
    var_20 = ((var_10 ? 1 : var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 &= ((((((~var_8) ? (min(8245327720838614094, var_16)) : var_6))) ? ((((!((max(32767, 0))))))) : (min((((arr_0 [i_1] [i_1 - 1]) ? (arr_0 [i_1] [i_1]) : 238)), (!8245327720838614094)))));
                    arr_7 [i_0] [i_0] = ((var_0 ? (((!(((-(arr_5 [i_1] [i_1 + 1] [i_1] [i_0]))))))) : -32767));
                }
            }
        }
    }
    #pragma endscop
}
