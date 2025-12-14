/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_3, (max((var_9 % var_1), -var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 = (var_13 - var_6);
                arr_6 [16] = (min((max(((var_13 ? (arr_0 [i_0] [i_1]) : 2414189248)), var_15)), ((((min((arr_2 [16] [16] [i_1]), (arr_3 [i_0] [i_1] [i_1])))) ? (arr_0 [i_1] [i_1]) : (max((arr_2 [0] [i_0] [i_0]), var_11))))));
            }
        }
    }
    var_22 ^= ((var_19 ? (((((var_8 ? 1958621167 : var_5))) ? var_13 : ((var_11 ? 3470669905 : var_2)))) : var_1));
    var_23 = 6552783673372080829;
    #pragma endscop
}
