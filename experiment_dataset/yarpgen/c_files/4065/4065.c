/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((17649966142586100729 >= 0) >= ((((max(-257611729, var_5))) ? (11551700654500171920 <= var_3) : ((-257611729 | (arr_1 [i_0])))))));
        var_14 |= (1 + var_0);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_15 = ((((((arr_1 [i_1]) > 1))) <= (((-22383 + 2147483647) << (1 - 1)))));
        var_16 = (min(var_16, ((min((arr_5 [14] [14]), (min((arr_1 [i_1]), (arr_5 [2] [i_1]))))))));
        arr_6 [i_1] = ((~(arr_0 [i_1] [i_1])));
        arr_7 [i_1] [i_1] = ((((~(arr_0 [i_1] [i_1])))));
        var_17 *= 7457283947539604250;
    }
    var_18 = (var_0 >= var_10);
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_19 = (min(var_19, 1));
                arr_13 [i_2] [i_2] = (((((max(240, (min(var_12, (arr_12 [i_3 + 1] [i_3] [i_2]))))))) + ((var_7 + (arr_8 [i_3])))));
                var_20 = (max(var_20, -402403061));
            }
        }
    }
    var_21 = ((var_2 ? ((((9159 < var_5) <= var_5))) : ((((var_12 >> (var_5 - 48684))) * (!211)))));
    var_22 = (min(var_6, var_12));
    #pragma endscop
}
