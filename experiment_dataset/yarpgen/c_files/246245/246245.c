/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((((1479577796 ? (min(12466872530818569023, 71916856549572608)) : -var_6))) ? 1 : var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_0] [0] |= (!var_17);
                var_20 = var_13;
                var_21 -= (((((72055395014672384 - 127) % -12909)) >= (((101 >> (-1 + 15))))));
            }
        }
    }
    var_22 = 54;
    #pragma endscop
}
