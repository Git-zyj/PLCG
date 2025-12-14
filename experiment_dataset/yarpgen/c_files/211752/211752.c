/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = (max(var_2, (max((~18446744073709551612), 32))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = (((((~(max(var_0, 4009057207))))) ? 336069314 : ((((((-5358045931508253297 + (arr_5 [i_2] [8] [i_0]))) + 9223372036854775807)) >> var_7))));
                            var_13 = (min(var_13, 336069323));
                        }
                    }
                }
                var_14 = (((((1578 + ((-1671362581 ? 336069316 : 7581662033189464593))))) || ((((arr_8 [i_0 + 1]) ? (arr_8 [i_0 + 1]) : -336069316)))));
            }
        }
    }
    var_15 = (((((17583596109824 ? ((var_0 >> (-1 + 8))) : var_3))) || ((min((205 ^ 3010611904635747758), 2703777877669921906)))));
    var_16 = (max(((((!3492880773) || -11566))), (--336069316)));
    #pragma endscop
}
