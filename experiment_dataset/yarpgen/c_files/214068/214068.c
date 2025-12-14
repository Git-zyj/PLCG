/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((min((var_12 * var_19), 69)), ((min(((max(0, 96))), ((var_14 ? var_13 : var_3)))))));
    var_21 = ((((((((max(var_10, var_17))) > var_8)))) & ((var_14 ? var_8 : ((max(var_18, 96)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_4 [i_0 + 1] [i_0 + 1] = 2245970286471529156;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        var_22 = (((arr_0 [i_0 + 1] [i_3 + 3]) >> (-5296093237588469859 + 5296093237588469872)));
                        var_23 = ((!(arr_8 [i_3 - 1] [i_3 + 1])));
                        arr_14 [i_3 + 3] [i_2] [i_1] [i_0 + 1] = var_18;
                        arr_15 [i_2] [i_1] = (arr_7 [i_0 + 1] [i_2] [i_3 + 2]);
                    }
                }
            }
        }
        var_24 = 35;
    }
    var_25 = (max(var_25, 4544997817965980877));
    #pragma endscop
}
