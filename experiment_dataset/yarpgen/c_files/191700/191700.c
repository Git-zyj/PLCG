/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((min(var_5, var_6))) ? var_9 : var_12))) < var_13));
    var_15 = 6817;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_16 = (arr_2 [i_0 + 1]);
                arr_5 [i_1] = -6240056871020215809;
                var_17 -= (min(((-(min((arr_0 [i_1]), (arr_4 [i_0] [i_1 + 2] [i_1]))))), -864534216));
                var_18 = (min(((-26718 ? -26397 : 18147562716114428567)), (min((var_1 && var_5), (arr_4 [i_0 - 1] [i_0 + 1] [i_1 + 3])))));
            }
        }
    }
    #pragma endscop
}
