/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, -4068));
                    var_14 = ((((max((arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1]), var_1))) << ((-(arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                    var_15 = (max(var_15, (((((-(arr_0 [i_0 - 1]))) > ((((arr_3 [9]) < 40))))))));
                    var_16 = (max(var_16, var_4));
                    var_17 = (((arr_2 [i_1 + 1]) ? (((arr_6 [i_0] [i_0]) ? (var_7 < var_6) : -119)) : -57));
                }
            }
        }
    }
    var_18 = (min(var_18, (((var_7 == (max(((108 ? var_0 : 13482)), var_5)))))));
    #pragma endscop
}
