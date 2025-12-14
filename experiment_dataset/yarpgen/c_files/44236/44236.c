/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((-(((~4) | 0))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    var_20 = (max(var_20, (((65518 >> (!1))))));
                    var_21 *= 30205;
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_22 = (((((37 || 248) & 2244397464)) < ((((1 <= ((0 ? 111 : var_5))))))));
                    arr_12 [i_0] [i_1] [i_0] = (--1769751904);
                    var_23 = (((((0 ? 6 : ((65535 ? var_14 : 1))))) ? (((11 <= (1 <= 2244397466)))) : (0 % -1934731434)));
                    var_24 = ((((min(1, (30205 && 1)))) - (max(13353, 4294967289))));
                    var_25 = ((!(-127 - 1)));
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_26 ^= (-(3771490443 & var_9));
                                arr_20 [i_0] [i_0] [i_0] = (((((1 << (65535 - 65530)))) ? (111 != 17) : (min(-5608462054524653737, 0))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_5] [i_6] [i_0] = (!5608462054524653736);
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] [i_0] = ((((-(!3))) ^ var_8));
                }
                arr_23 [i_0] = (((((((max(1, 678447114))) < ((3616520170 ? 2244397471 : 3188018897790686369))))) < 149));
            }
        }
    }
    var_27 = var_10;
    var_28 = 17863263124949218042;
    var_29 &= (min(var_13, (22876 ^ 17863263124949218042)));
    #pragma endscop
}
