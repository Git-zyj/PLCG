/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_14 = (((((var_0 != (((!(arr_1 [i_0 + 1]))))))) <= (!65535)));
                        arr_13 [i_0] [i_1] [i_1] [i_3] = (!-693110895);
                    }
                }
            }
        }
        arr_14 [i_0] = (max(var_3, ((8796093022207 ? (((arr_6 [17] [i_0 + 1]) - 8796093022194)) : (~var_10)))));
        arr_15 [i_0] = (((var_7 < (arr_6 [i_0 + 1] [i_0]))));
        var_15 = (arr_10 [i_0] [15] [i_0 + 1] [i_0]);
    }
    var_16 = (min(var_16, var_6));
    var_17 = (((max((~-8796093022208), var_1)) >> (var_8 + 46)));
    var_18 = ((((min(var_9, (max(8796093022196, var_0))))) ? var_0 : var_11));
    #pragma endscop
}
