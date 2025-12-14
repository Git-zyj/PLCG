/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((var_2 ^ ((-(0 * var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [11] [i_0] = 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 = (min((((var_11 | var_10) & (arr_2 [i_3]))), (1 | 1)));
                            arr_13 [i_0] [i_0] [9] = ((((((arr_0 [i_0] [i_0]) | (arr_0 [i_0] [i_0])))) ^ (((((arr_10 [i_0] [i_1] [i_0] [i_1] [i_3]) ? 8612468675351109010 : (arr_1 [i_3]))) & (((~(arr_2 [i_0]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
