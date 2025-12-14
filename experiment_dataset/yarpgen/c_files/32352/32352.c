/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_14 -= (min((var_10 - var_10), (17494382249361997829 << var_13)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = 17494382249361997829;
                    var_16 = ((3543282414309510482 - (((var_6 ? 57035 : var_13)))));
                    var_17 = (((max(849783181, var_7))) ? -7800581515594383501 : (max(14903461659400041150, var_4)));
                    arr_7 [i_0] [i_0] = var_13;
                    arr_8 [i_0] = ((((14903461659400041150 ? (max(1658003326090564513, -317027807)) : (-60 ^ 52)))) ? (max((min(198, var_7)), (((150 ? var_8 : var_0))))) : (((((max(var_0, var_4))) ? -70 : (var_2 >= 1)))));
                }
            }
        }
        var_18 = ((min((~var_2), ((-70 ? var_10 : var_2)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_19 = ((8 <= 17732923532771328) + ((1 ? var_2 : var_1)));
        var_20 |= (((-7787 + 2147483647) << (var_0 - 111)));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = (min(var_6, (14903461659400041122 != var_4)));
        var_21 = (max(var_21, ((((var_5 ? ((max(70, -107260807))) : (var_8 | var_5)))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] [i_5] = (((((-9223372036854775807 - 1) && var_4)) ? (max((var_12 != 1341298104), (14903461659400041150 - 1))) : ((((-32767 - 1) ? -11 : (0 - 0))))));
        var_22 = (min(var_22, ((((59195 / 384) ? 16788740747618987102 : (((((-9818 ? var_7 : 1341298104))) ? 0 : ((1 ? var_0 : var_4)))))))));
    }
    var_23 = var_10;
    var_24 = (min(var_24, 3641617723));
    var_25 = ((9223372036854775807 ? ((max(((224 ? 0 : var_12)), var_3))) : var_7));
    var_26 = ((((-7067365504568466619 ? 33680 : var_8))) + (((14683399779703031809 - 255) ? var_9 : var_0)));
    #pragma endscop
}
