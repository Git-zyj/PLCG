/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((var_11 ? var_5 : ((~((16165658959861050898 ? 50312 : 10468965371575123698)))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = -7201757414927643683;
        arr_2 [i_0] = (max(-58, 549755811840));
        arr_3 [i_0] [i_0] = ((~54) ? ((((var_2 < var_11) != (min(2147483631, (arr_1 [i_0])))))) : ((((!12894271737267862002) < 7753488039100536377))));
        arr_4 [14] = ((4611685880988434432 ? 8869244164826132600 : 18446744073709551615));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 = ((-((~(arr_0 [i_1] [i_1])))));
        arr_8 [i_1] = -63;
        var_17 = (~30);
        var_18 = (min(var_18, (((((6112513897579917112 ? ((15424818924406786090 ? 1915170483066062852 : 466847833838757731)) : (((((arr_0 [i_1] [i_1]) != (arr_1 [i_1])))))))) ? (~466847833838757732) : (((((466847833838757732 ? var_11 : 22825))) ? var_8 : (arr_0 [6] [11])))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_19 = (511 < -183482032932356559);
                                var_20 = (max(var_20, (arr_14 [i_6])));
                                var_21 = (arr_19 [i_2] [i_3] [i_4] [i_5] [10] [i_2]);
                            }
                        }
                    }
                }
                var_22 &= ((~(((((var_9 ? (arr_9 [i_3]) : var_10)) < (arr_17 [i_3 - 1] [12] [i_2] [12]))))));
                var_23 += var_12;
            }
        }
    }
    var_24 = ((-87 ? -7877438286906309193 : 1152921504606845952));
    #pragma endscop
}
