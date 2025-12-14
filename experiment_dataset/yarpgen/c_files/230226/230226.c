/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = ((-8208348498889571345 ? 55837 : -18039));
                    var_13 = ((-6349440079024178968 ? ((var_1 ? 57362 : var_10)) : (7583195047101486915 <= 2847659209949263306)));
                }
            }
        }
    }
    var_14 *= ((var_8 ? ((((-2993815053848910346 == 7583195047101486909) ? var_0 : 18011))) : var_4));
    #pragma endscop
}
