/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_8, -var_4));
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 &= (((((9283900576287586209 ? 0 : 120))) ? (((var_5 || 18446744073709551615) ^ (4 < var_10))) : (((((min(9223372036854775807, var_1))) >= 7)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_15 = 18446744073709551615;

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_16 = ((0 | (((((((var_5 ? 73 : 896))) && 18))))));
                                var_17 &= (max((min(var_3, var_6)), 22));
                                arr_12 [i_4] [i_1] = (min((min(18446744073709551589, 12209271757876830002)), -61));
                                var_18 = 3943031922742725407;
                            }
                        }
                    }
                }
                arr_13 [0] [i_1] = ((((min(20, var_5))) ? (~-1) : (1 || 14426730332666204227)));
            }
        }
    }
    #pragma endscop
}
