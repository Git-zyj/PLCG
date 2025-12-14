/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_11 += (((arr_1 [i_0 + 2]) ? (((arr_1 [i_0 - 1]) ? 0 : var_3)) : ((((arr_0 [i_0 + 1] [i_0 + 1]) * (arr_0 [i_0 + 2] [i_0]))))));
        var_12 = 0;
        arr_2 [i_0] = ((((((arr_0 [i_0 + 2] [i_0 - 2]) || (arr_0 [i_0 - 2] [i_0 - 1]))))) <= ((-(arr_0 [i_0 + 2] [i_0 - 2]))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [1] &= (min((min((min(var_5, var_3)), 0)), ((((arr_7 [i_1 - 1] [i_0 - 2]) ? (-32767 - 1) : (((-32760 ? -1942025694 : -29126))))))));
                    var_13 = (min(var_13, (((((var_1 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_1]))) ^ (!1942025694))))));
                    var_14 &= (arr_0 [i_0] [i_2]);
                    var_15 &= -1942025694;
                }
            }
        }
    }
    var_16 = ((((((((1 ? var_8 : var_5))) ? (((var_1 ? var_7 : (-32767 - 1)))) : -var_4))) ^ 11691144478797157582));
    #pragma endscop
}
