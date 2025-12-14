/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((((~var_7) + 2147483647)) >> (((~var_6) - 1847289399))))) ? (((((var_2 ? var_2 : 15646120672656815140))))) : (((!24) ? var_6 : ((223080405 ? -11 : -220606477604467117))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0 + 3] [i_1] [i_0 + 3] = ((((((47 ? 32764 : -9223372036854775796)))) ? 208 : (min(35, -11))));
                arr_5 [i_0] [i_0] [i_1] = (max((~var_3), (arr_0 [i_1])));
            }
        }
    }
    var_11 -= max((-32767 - 1), -19);
    #pragma endscop
}
