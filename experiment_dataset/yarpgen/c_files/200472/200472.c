/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = 40679;
                    var_11 = (arr_7 [i_1]);
                }
            }
        }
    }
    var_12 = var_8;
    var_13 = -var_1;

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_14 = (arr_6 [i_3] [i_3]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    {
                        var_15 = (min(var_15, ((((((((arr_18 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6]) ? -5136855574835718238 : 118)) + 9223372036854775807)) << (((((arr_18 [i_6 + 2] [i_6 - 1] [i_6] [i_6 - 1] [i_4]) + 11193)) - 18)))))));
                        var_16 = 1;
                        var_17 = (arr_16 [i_3] [i_4] [i_4] [0] [i_6 + 4]);
                        var_18 -= (((-2147483647 - 1) * (~3280522855)));
                    }
                }
            }
        }
    }
    var_19 = (-3280522855 / 1014444436);
    #pragma endscop
}
