/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_4 [13] = ((~((max((max(1023, (arr_2 [i_0 - 1]))), -1)))));
        arr_5 [i_0 - 1] = var_0;
        var_20 = (min(((-((var_17 ? (arr_0 [i_0] [i_0 - 1]) : var_17)))), (arr_2 [i_0])));
        var_21 += (min(-1, (max((((-1 ? (arr_2 [2]) : (arr_1 [i_0])))), var_3))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, -1023));
                    var_23 = -1023;
                    var_24 = (min(1022, (arr_0 [10] [i_0])));
                    var_25 = (min(var_25, ((((134 ? (((max(var_14, var_7)))) : -1566402725284549484)) * -4096))));
                }
            }
        }
    }
    var_26 = ((max(var_9, var_10)));
    var_27 = ((-var_8 ? (~var_17) : (((~((var_4 ? var_12 : 110)))))));
    #pragma endscop
}
