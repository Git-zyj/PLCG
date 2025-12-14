/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = ((((((arr_5 [i_2] [i_0 + 1]) - (arr_5 [i_0 - 2] [i_0 - 2])))) == (((arr_1 [i_0 - 2]) ^ (arr_2 [i_0 - 2])))));
                    var_20 = (max(var_20, (((((((arr_2 [i_0 - 2]) | (arr_5 [i_0] [i_1])))) ^ (((-1 ^ 31904) | 3052396828)))))));
                }
            }
        }
    }
    #pragma endscop
}
