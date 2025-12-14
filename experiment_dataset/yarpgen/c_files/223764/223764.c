/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -67108864;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [0] [i_1] [i_1] = 1375078372;
                var_21 = (min((((!var_10) ? (((1375078372 || (arr_2 [4] [i_0 + 1] [i_1])))) : var_7)), (((-1375078372 ? -1375078373 : var_5)))));
            }
        }
    }
    var_22 *= ((2856267299 ? var_14 : var_0));
    #pragma endscop
}
