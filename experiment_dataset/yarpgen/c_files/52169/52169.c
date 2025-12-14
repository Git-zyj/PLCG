/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((!(~var_15))))) + (max(var_12, ((max(1282648115, 3012319179)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = 1282648115;

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_13 [i_0] = (max((max((((arr_3 [i_0] [i_0]) ? (arr_6 [i_1] [i_3]) : 248)), -26157)), (arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2])));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] = ((((-(-32765 | -1415695586)))) ? (arr_1 [7]) : ((-(arr_1 [i_1]))));
                    }
                }
            }
        }
    }
    var_18 = (((~var_12) ? var_8 : (((((max(911659874281622403, -7905665091992781260)) == (var_10 / var_9)))))));
    #pragma endscop
}
