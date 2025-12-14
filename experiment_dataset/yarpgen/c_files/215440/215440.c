/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (min(((var_1 ? -16840 : (1252503880 + var_14))), var_16))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(var_6, -2127));
                var_18 = ((((min((arr_0 [i_0]), (arr_3 [i_0] [i_0])))) ? (!var_3) : ((~(((var_11 > (arr_4 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [i_2] = ((+(((((min((-2147483647 - 1), 3))) || (13 >= 1252503896))))));
                            var_19 = (min((((max(var_5, var_8)))), var_14));
                            var_20 += (((((var_6 ? var_14 : -361123734651299752)))) ? (((!(((arr_0 [i_0]) || -361123734651299750))))) : ((max((arr_1 [i_3 + 2]), 123))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
