/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (arr_3 [i_1]);
                arr_6 [i_1] = (((((arr_4 [i_0] [i_0] [i_1]) + (var_9 ^ var_5))) | ((((~140) ? var_0 : ((1 ? -17496 : 107)))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_9 [1] [i_2] = ((-((((((var_3 + 2147483647) >> (((arr_7 [i_2]) - 171)))) >= var_9)))));
        var_13 = (((min(var_10, (arr_7 [i_2]))) + (((var_11 ? ((var_1 - (arr_7 [i_2]))) : (((arr_8 [i_2]) + var_9)))))));
    }
    var_14 = var_12;
    #pragma endscop
}
