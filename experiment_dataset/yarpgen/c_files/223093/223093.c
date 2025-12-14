/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = (((arr_4 [i_0] [i_0]) ? 232 : ((232 ? (!-124) : (~108086391056891904)))));
                var_14 = (max((((arr_2 [i_0]) ? (!var_9) : (((!(arr_1 [i_0])))))), var_5));
                var_15 = (max((((((arr_4 [i_0] [i_1]) && -5217122250568160943)) ? 112 : -9058915171039811767)), (((var_1 & (((!(arr_7 [i_0] [i_0] [4])))))))));
            }
        }
    }
    var_16 = ((((min(var_1, (((122 >> (var_3 - 59619))))))) ? ((var_4 ? ((var_13 ? var_8 : 24)) : var_13)) : 28885));
    var_17 = var_11;
    #pragma endscop
}
