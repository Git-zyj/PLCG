/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((((((62 ? 217 : -181935793))) ? (((((var_14 << (-68 + 110)))) ? 194 : (!var_12))) : (((((var_17 ? var_15 : 0))) ? var_10 : (!42))))))));
                    var_20 = var_6;
                    var_21 ^= (max((min(18446744073709551615, (var_10 ^ 0))), (((((min(var_5, var_13))) ? 28 : (((!(arr_6 [i_0] [i_0] [12])))))))));
                    arr_8 [i_1] [i_0] [i_1] [i_1] = ((((min(62, 58))) ? (~62) : 9223372036854775807));
                }
            }
        }
    }
    #pragma endscop
}
