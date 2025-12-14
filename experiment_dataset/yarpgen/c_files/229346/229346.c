/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((arr_2 [1] [i_1]) + ((((~(arr_0 [i_0]))) - (~var_12)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 = (min((arr_0 [i_0]), (((max(10, 5917)) >> (((max((arr_6 [19] [19] [i_1] [i_0]), var_9)) - 4294951531))))));
                            var_19 += (min(((((((32767 >> (arr_1 [i_0] [i_1])))) & var_1))), (min((max(8318406205802234114, (arr_0 [i_1]))), (min(var_6, 59598))))));
                        }
                    }
                }
                arr_11 [i_0] = (max((36630 * 13231145625163955844), 49764));
                var_20 = (((arr_2 [i_0 + 1] [i_0 + 1]) > var_4));
            }
        }
    }
    var_21 &= (!var_9);
    #pragma endscop
}
