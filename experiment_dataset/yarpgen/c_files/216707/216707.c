/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_1 [i_1] [i_0]);
                var_20 ^= (((((var_13 ? (!var_14) : (!-1143281385)))) ? (((((var_1 ? 1 : var_2))) ? ((-5675 ? (arr_3 [4]) : var_18)) : -11173)) : ((((!(((var_3 ^ (arr_3 [6]))))))))));
                var_21 = (min((arr_0 [i_0]), ((((((111 ? var_14 : 67108864))) || var_12)))));
            }
        }
    }
    #pragma endscop
}
