/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] = (max(((((max((arr_5 [i_1] [i_1]), (arr_1 [i_0])))) ? -var_1 : 4294967279)), (~19925)));
                arr_7 [i_1] = 0;
                var_12 = (min(var_12, (((((min((arr_0 [i_0 - 1] [i_1 + 1]), (arr_0 [i_0 + 1] [i_1 + 1])))) & ((((arr_0 [i_0 - 2] [i_1 + 1]) || (arr_0 [i_0 + 1] [i_1 - 1])))))))));
                var_13 = (min(var_13, (((var_1 ? (((min(-7, 30)) & ((((arr_0 [i_0] [i_1]) ? 3304 : 15))))) : var_10)))));
                var_14 = (18 == var_0);
            }
        }
    }
    var_15 = var_0;
    var_16 = (min(var_16, ((min((~var_11), ((min((~var_8), 30))))))));
    #pragma endscop
}
