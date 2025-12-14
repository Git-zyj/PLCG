/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((-(-1159638818 / -var_5)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (((min(((((arr_2 [i_0]) && var_7))), ((var_6 ? var_14 : (arr_2 [i_1]))))) == (((var_3 <= (arr_1 [i_1]))))));

                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    var_21 = (min(var_21, ((((((20559 <= var_2) && 1)) && (+-125))))));
                    var_22 = (min(var_22, (arr_1 [i_0])));
                    var_23 = (max((arr_0 [i_1]), (var_10 | -var_3)));
                }
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_14 [i_3] [i_3] [i_1] [i_4] = ((((((-9223372036854775807 - 1) ? var_14 : (arr_0 [i_3 - 1]))) != var_7)));
                            var_24 = (max(var_24, ((((((((arr_6 [i_1] [i_3 + 1]) && 4294967281)) ? (!1) : 1))) <= (max(957407803637812412, var_0))))));
                            arr_15 [i_0] [i_1] [i_3] [i_4] &= var_6;
                            var_25 = ((~((~(arr_10 [i_0] [i_0] [2])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
