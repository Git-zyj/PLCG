/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= max(((((14054163567258320892 || 193) != var_11))), (max(((min(var_13, 32767))), (14054163567258320884 - var_5))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (((arr_0 [i_0]) < ((((((arr_3 [i_0] [i_0] [11]) & var_1))) ? (arr_1 [i_1] [0]) : (max((arr_2 [i_0] [i_1]), var_0))))));
                var_17 *= (min(4392580506451230748, 4392580506451230696));
                arr_4 [i_0] [11] [i_1] = (min((((((min((arr_1 [i_0] [1]), 32767)))) + -2238607645506455902)), (((251 | (min(var_13, var_6)))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_18 += (5 + var_14);
                    arr_8 [i_0] [i_1] [i_2 + 1] |= var_6;
                }
            }
        }
    }
    var_19 += (max(var_10, 1));
    var_20 = ((((-((var_11 ? -2238607645506455914 : var_2)))) / var_5));
    #pragma endscop
}
