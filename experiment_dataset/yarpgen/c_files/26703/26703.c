/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_3, ((((min(var_0, 141))) ? var_12 : (~1008)))));
    var_21 = ((var_5 ? ((((max(var_5, 1537395360))) ? var_7 : ((140737488355327 ? var_17 : 4731960005752105045)))) : (((((((8989607068696576 ? var_2 : 30))) >= ((var_5 ? var_14 : (-127 - 1)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, var_0));
                    arr_9 [i_0] [i_1] [i_2] = ((((min(var_15, -32230))) ? (-127 - 1) : (((!(((arr_0 [i_0]) > 1537395360)))))));
                }
            }
        }
    }
    var_23 = ((((((18446744073709551615 > var_2) & var_16))) ? ((((var_10 > 2017335526301546223) != ((1562802121352004917 ? var_14 : 302277063))))) : ((var_19 ? ((min(var_2, 11))) : ((min(var_1, -118)))))));
    #pragma endscop
}
