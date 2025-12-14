/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max((min(1, 20)), var_9)) >> (var_9 + 3921051081710319244)));
    var_16 = (max(var_16, -21));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = var_2;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (arr_5 [i_0]);
                    var_19 -= (min(53, var_11));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_11 [i_3] = ((((max((arr_7 [13] [13] [i_3]), (arr_3 [i_3])))) ? ((((arr_2 [12]) & var_11))) : 127));
        arr_12 [i_3] = (arr_6 [i_3] [i_3]);
        var_20 = (((((~((var_14 << (var_6 - 181)))))) ? 6 : (((((!(arr_4 [i_3] [i_3] [i_3]))))))));
        arr_13 [i_3] = (((((max(var_9, -3)) + 9223372036854775807)) << (((max(7506507311295126241, 1818429784)) - 7506507311295126241))));
    }
    var_21 = min(((131071 ? (~8784494080391671644) : var_2)), 4065204430);
    var_22 = (max(var_22, var_12));
    #pragma endscop
}
