/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((5678676039624378252 ? (((((6077743688861606757 >> (var_11 - 168))) << (((var_6 | var_5) - 15882588651805699184))))) : var_5));
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = ((~((var_11 | (~152)))));
                arr_4 [i_0] [i_1] = max((max((((-6077743688861606771 + 9223372036854775807) >> (var_11 - 169))), (max((arr_1 [i_1]), 6077743688861606770)))), (((max(var_11, 1)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = (arr_1 [i_3]);
                            arr_12 [i_3] = ((((((-6077743688861606791 ? var_9 : (arr_3 [i_3] [i_2] [i_0]))) * var_9)) * var_13));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
