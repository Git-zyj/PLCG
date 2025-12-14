/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (((((234881024 & (234881024 & -1597530182260934603)))) ? ((min((~234881024), (1597530182260934606 != 67)))) : (((~14700970967150848422) | ((((!(-9223372036854775807 - 1)))))))));
                    var_12 = (max(var_12, (((((~1597530182260934606) ^ (~21)))))));
                    var_13 = (-(((1592857820 == -1597530182260934607) - ((127 ? 1 : 6)))));
                }
            }
        }
    }
    var_14 = var_5;
    var_15 = (((((-651882113700704027 & ((1 ? -42 : 5634252765876029335))))) ? -62 : ((var_3 >> (var_3 - 103)))));
    #pragma endscop
}
