/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_17 = ((-597206101 ? 67108863 : -5492454041146280705));
        var_18 = (!var_2);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_19 = -597206101;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_20 += 7;
                        var_21 = (min(var_21, var_6));
                        arr_14 [i_1 + 3] [i_2] [i_3] = ((-1467002915 ? 18446744073709551615 : var_1));
                    }
                }
            }
        }
        var_22 = (!2929091596);
    }
    for (int i_5 = 4; i_5 < 21;i_5 += 1)
    {
        arr_17 [i_5] = 65256;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                {
                    arr_22 [i_5 - 4] [i_6] [i_7] [16] = (min(1409139147319739626, 279));
                    var_23 = (var_10 - 1);
                }
            }
        }
        var_24 = var_11;
    }
    var_25 = (((max(var_16, 248))));
    #pragma endscop
}
