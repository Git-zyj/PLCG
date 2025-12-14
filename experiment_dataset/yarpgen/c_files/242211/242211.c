/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~var_4) ? (((var_9 ? ((min(27, var_1))) : ((var_4 ? var_5 : var_3))))) : ((((min(var_8, 26))) / 5164940940886313279)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = (((((2000779040 + var_18) ? var_4 : (((min(-117, var_0)))))) * ((var_14 % (min(1, 3307280843))))));
        var_22 = (var_0 && 15871);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_23 += (min((min(11, var_11)), var_11));
                    var_24 = (min(22148, 4294967290));
                    var_25 = min(((min((1707641321 ^ var_4), (((987686449 ? 0 : -32758)))))), var_16);
                    arr_7 [i_0] [i_1] = -1945359562;
                    var_26 = (min((min(3231659414, -var_13)), (((!(var_17 <= 64))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_27 = (1 && 10772422448552472360);
        var_28 = 7433;
        var_29 ^= (42419 ^ -118);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_30 |= var_7;
        var_31 = (min(var_31, 115));
        var_32 = ((!-96) <= var_16);
    }
    var_33 = (min(((-(60 ^ 43))), -376426473));
    #pragma endscop
}
