/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 757443210;
    var_12 = (var_10 >= -757443233);

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_13 += (((arr_5 [i_0 - 1] [i_0] [i_0 - 3]) ? (arr_5 [i_0] [i_0] [i_0 + 1]) : (arr_5 [i_0] [i_0] [i_0 - 2])));
            arr_7 [i_0] = (+((((arr_1 [i_0]) || (arr_1 [i_0])))));
            arr_8 [i_0 + 1] [i_0] = -757443233;
            var_14 = (-(max((((arr_6 [i_1] [i_1] [i_1]) ? -1462933582 : -1113400162)), 56)));
        }

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_15 = (((-757443233 / (arr_3 [i_0 - 3]))) % -272083602);
            var_16 = (max(var_16, (((485862522 ? ((((((arr_2 [i_2]) == 757443234)) || (((arr_0 [i_2]) < 4294967270))))) : (((var_4 <= ((601948801 ? 134217728 : -485862523))))))))));
        }
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_17 = 64;
            var_18 *= ((!(~-485862514)));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_16 [17] [i_0] [i_0] = (max(((~(~1457008873))), (arr_3 [i_0])));
            var_19 = (max(var_19, -16143749729941936940));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_20 [i_0] [i_5] [i_0] = var_7;
            var_20 = (min(var_20, (((arr_12 [i_0 - 2] [16]) ? (arr_18 [i_0 - 1] [i_0 - 3]) : (arr_18 [i_0 + 1] [i_0 - 3])))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    {
                        var_21 = (((!170) ? 757443254 : 272083602));
                        var_22 = (arr_21 [i_6]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_29 [i_8] = 1999607677;
        arr_30 [i_8] = 485862519;
    }
    var_23 = (((~var_2) ^ var_9));
    #pragma endscop
}
