/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_13;
    var_20 = (min(var_20, (((!((((~var_10) | var_15))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = var_8;
                var_22 = (min(var_22, (((((-(arr_5 [i_0] [i_0]))) % -226143095)))));
            }
        }
    }
    var_23 = (((min(var_7, (2457334251395632166 >= 2457334251395632166))) ^ var_18));
    #pragma endscop
}
