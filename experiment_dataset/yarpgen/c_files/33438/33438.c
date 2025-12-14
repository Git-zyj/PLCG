/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((max(var_12, 33)), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_0] [i_0] = (((((var_5 < (arr_0 [i_2 - 1])))) % (((-5 || (arr_0 [i_2 - 1]))))));
                            arr_9 [i_3] [i_1] [i_1] [i_0] = ((((((arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]) + (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1])))) ? (((arr_1 [i_2 - 1]) ? (((var_2 >> (var_1 - 17985902832280487546)))) : 8810937527811813328)) : (((((arr_2 [i_1]) != (((140703128616960 ? (arr_3 [i_0] [i_1] [3]) : (arr_3 [i_2] [i_1] [i_2 - 1]))))))))));
                            arr_10 [i_0] [1] [i_1] [i_0] = (((arr_5 [i_0] [i_1] [i_2]) ? (arr_6 [i_0] [i_1] [9] [i_0] [i_3] [i_1]) : (arr_1 [i_2 - 1])));
                        }
                    }
                }
                var_15 = (((((arr_7 [i_0] [i_1] [i_1]) + 9223372036854775807)) << (((max((((-8810937527811813359 + 9223372036854775807) >> (var_3 - 223))), ((max((arr_0 [i_1]), 1))))) - 100692018809317))));
            }
        }
    }
    var_16 = (var_6 ^ var_9);
    #pragma endscop
}
