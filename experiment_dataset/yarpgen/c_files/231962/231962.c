/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = ((((-7621710606534433776 / (arr_0 [i_0 + 2]))) + ((((min((arr_3 [i_0 - 1]), var_5))) ? (arr_2 [i_0]) : (min(-7621710606534433776, -1))))));
                arr_6 [i_0] = (((((-9223372036854775790 ? 9223372036854775806 : ((max((arr_0 [i_0]), var_5)))))) ? (((((((max(96, var_2)))) > (max(var_6, 3)))))) : (max(((9223372036854775789 ? var_3 : var_6)), ((var_3 ? 276343170 : var_4))))));
            }
        }
    }
    var_12 = (((((~(6413585284056992589 != var_3)))) ? var_5 : var_8));
    #pragma endscop
}
