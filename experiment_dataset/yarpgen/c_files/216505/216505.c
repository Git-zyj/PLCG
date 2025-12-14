/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = (576459676 >= 1836579464);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 += (((max(1836579464, (arr_1 [i_1 - 3])))) && ((((arr_1 [i_2 - 4]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])))));
                    var_16 = (min(var_16, (((!((((max(29, 18446744073709551615)) + (((-(arr_1 [i_1 - 2]))))))))))));
                }
            }
        }
    }
    #pragma endscop
}
