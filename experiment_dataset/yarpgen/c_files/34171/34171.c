/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_13;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_16 = ((((((arr_5 [i_0]) ? var_7 : var_5))) * (var_6 * 0)));
                        arr_10 [i_0] [i_0 - 1] [3] [i_2] [1] [i_0] = (arr_6 [i_1] [i_2] [i_0]);
                        arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] = (!9650034798601594583);
                        arr_12 [i_0] [i_0] [i_2] [i_3] = var_11;
                    }
                }
            }
        }
        var_17 = ((1 ? (!var_2) : (arr_4 [i_0] [i_0 - 2])));
        arr_13 [i_0] = var_10;
        var_18 = (max(var_18, (arr_5 [1])));
    }
    var_19 = (((1 < var_4) ? (var_0 + 32767) : 1));
    var_20 += ((((((max(var_4, 1403018237))))) % (max((var_13 - var_10), var_6))));
    #pragma endscop
}
