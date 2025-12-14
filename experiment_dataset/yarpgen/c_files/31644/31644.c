/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = ((((((-10569 ? -3319883366434258826 : 65535)))) ? ((1 ? 3319883366434258821 : (65519 / 22105))) : 28801));
                    var_14 = ((((-1250919537 ? (-127 - 1) : 16383)) == (((4095 ? 1 : 768)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_15 = ((1 ? 65535 : 5371));
                        var_16 = ((-(0 & -1188798158)));
                        var_17 &= 0;
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_18 &= ((min(-1938550365, -1)));
                        var_19 = (min(((1602576547 ? -4106094144186765493 : -125)), (4294967291 - 208)));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_20 ^= (((595 ? 1 : 60922)));
                        var_21 += (60915 / 65535);
                    }
                    var_22 = (max(var_22, ((((-32767 - 1) != 5006086588823876061)))));
                    var_23 = (((((1984 ? 16 : 122))) ? 1 : ((49 ? 43000 : -5372643458869694543))));
                }
            }
        }
    }
    #pragma endscop
}
