/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = ((((18446744073709551615 ? (((60 << (9306629039785370692 - 9306629039785370690)))) : var_2)) * 2060253173));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((-((232 - (var_5 - var_8))))))));
                                var_14 = (~var_7);
                                var_15 |= ((((min(var_10, var_11))) ? ((((var_6 > 0) != var_2))) : (((!(var_11 - var_8))))));
                                var_16 = ((!(9306629039785370692 % var_10)));
                            }
                        }
                    }
                }
            }
        }
        var_17 = 195;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    {
                        var_18 = var_8;
                        var_19 = (min(((16375 && (1666463443 || var_2))), (((var_10 || 6494) || var_7))));
                        var_20 = var_1;
                    }
                }
            }
        }
    }
    var_21 = (((((1666463443 ? 7340032 : 0))) ? var_2 : ((((max(-7340041, var_8)) << ((((-118 ? var_7 : 524287)) - 7759487528388477039)))))));
    var_22 = (max(var_22, var_6));
    #pragma endscop
}
