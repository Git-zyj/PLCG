/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((2954459826 - var_3) ? var_7 : (max(701119117517624726, 17745624956191926883)))), var_9));
    var_13 = (((((((701119117517624703 ? var_0 : var_7))) && ((var_11 || (-127 - 1))))) ? var_8 : (((!(((56720942 ? var_8 : var_11))))))));
    var_14 = ((((max((var_6 && var_11), var_10))) ? ((((!var_3) % var_3))) : (min(var_4, (var_5 + var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max(1, ((((arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1]) <= (arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))));
                arr_5 [i_1] = var_7;
            }
        }
    }
    #pragma endscop
}
