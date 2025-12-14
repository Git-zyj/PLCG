/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 8599;
    var_21 = (min(((22465 ? var_10 : -2)), var_17));
    var_22 = (max(11, (((!(-18 | 37))))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((var_2 ? ((((arr_0 [i_0 + 1]) && 121))) : (min(var_15, (18 && 17)))));
        arr_3 [i_0] = var_15;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_23 = (min(var_23, ((min((~var_4), 11)))));
        var_24 = (-((((var_18 ? var_12 : -1)))));
        var_25 = 130023424;
        var_26 = (min(var_26, ((((((8191 ? 8206 : (min(130023443, 185))))) ? 85 : (max(130023429, 142)))))));
        arr_7 [i_1] &= 904407755;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_10 [i_2] = var_5;
        arr_11 [i_2] = (((((min((min((arr_0 [i_2]), var_9)), 8209)))) ^ (((arr_8 [i_2]) ? (((var_7 ? -18 : 4247))) : (arr_9 [i_2] [i_2])))));
        arr_12 [i_2] [i_2] = ((((var_2 ? 8208 : var_9)) | (!65)));
        arr_13 [i_2] = max(var_7, 130023423);
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_20 [i_2] [i_2] [i_2] = ((-964278815463105687 && (((130023425 ? -1267956581 : -8207)))));
                    var_27 = (max(((8232 ? 1267956589 : 18)), ((min(var_9, (arr_1 [i_3 + 2]))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        arr_23 [i_5 - 2] = ((402653184 ? var_14 : -1267956567));
        arr_24 [i_5] = ((!(arr_19 [i_5] [i_5 + 1] [6] [15])));
    }
    #pragma endscop
}
