/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_2 ? var_11 : var_6)) ^ ((min((~var_9), (var_10 == 25))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((!((min((arr_5 [i_2] [i_2] [i_0]), 29))))))));
                    var_14 = ((((min((arr_3 [i_1] [i_1 - 1]), (arr_4 [i_0 - 2] [i_0] [i_1])))) * (((!(arr_4 [i_0] [i_0] [i_1]))))));
                    var_15 = (max(var_15, ((((((min(14, -7583035417799892000)))) ? (!1672045721) : (-1114593856 / -7583035417799891991))))));
                }
            }
        }
    }
    var_16 = (min(var_16, (((((var_7 ? ((max(var_9, var_2))) : ((7583035417799892000 ? 12280989601759128567 : 75))))) ? (max(var_1, 18446744073709551604)) : var_9))));
    var_17 = ((var_7 ? ((2 ? var_10 : ((254 ? var_11 : -6027665370360059734)))) : (((max(var_8, var_4))))));
    #pragma endscop
}
