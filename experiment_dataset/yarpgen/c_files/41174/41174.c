/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (max((((arr_4 [i_0 + 1] [i_1]) || 115)), ((((((arr_4 [i_0] [i_1]) ? (arr_0 [i_0]) : var_15))) || (25 && 1822)))));
                arr_6 [0] [i_0] = ((((!var_7) ? -759221883513313877 : ((var_6 ? var_2 : 1236630152937534966)))));
                var_17 = ((min((~6760255757980611829), -6760255757980611801)));
            }
        }
    }
    var_18 = -var_6;
    #pragma endscop
}
