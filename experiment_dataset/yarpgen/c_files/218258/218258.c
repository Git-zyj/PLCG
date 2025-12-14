/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((-32767 >= (max((arr_5 [i_0 - 2] [i_0 - 1]), (arr_5 [i_0 - 1] [i_0 - 1])))));
                arr_7 [i_0] [i_0] [i_0 + 1] = ((-(18446744073709551593 || -32767)));
            }
        }
    }
    var_17 = ((var_13 ? ((((((var_0 ? var_9 : var_5))) && (54 && 114)))) : (((((min(var_6, var_5))) || var_0)))));
    #pragma endscop
}
