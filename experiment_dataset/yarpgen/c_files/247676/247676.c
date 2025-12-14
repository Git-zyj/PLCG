/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_12 = ((((((arr_5 [i_2 - 2] [i_2 + 1] [i_2 - 1]) - 44656))) ? ((min(20880, 44659))) : ((524032 & (-2147483647 - 1)))));
                    var_13 = (max(var_13, (((var_2 && ((max((arr_2 [i_2 + 2]), (arr_2 [i_2 - 2])))))))));
                }
            }
        }
    }
    var_14 = ((var_6 ? ((var_6 + (var_2 ^ -1835138043))) : ((var_8 * (var_6 != 20737)))));
    #pragma endscop
}
