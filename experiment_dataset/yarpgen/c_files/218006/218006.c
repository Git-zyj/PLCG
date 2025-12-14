/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = (~((max(1, 1))));
                    var_16 = ((((max(5858, -20792))) ? (~0) : (min(11118999095615824091, 4294967295))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] &= ((max(18446744073709551615, 104)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 6;i_5 += 1)
            {
                {
                    var_17 = ((((min(9, 5))) ? 1 : 3246365330));

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_20 [i_3] [i_3] [6] [i_5] = ((~(max(1, 5))));
                        var_18 = (((((1 ? 90 : -1))) ? (~-1) : ((max(3246365336, -24357)))));
                        arr_21 [i_3] [i_3] [i_5] [5] = ((~(~-4294967282)));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_19 = (min(var_19, (((8480360709385786322 ? 1 : 4950342941499183107)))));
                            var_20 = 0;
                            arr_25 [i_3] [i_5] [i_6] [i_5] = 13686930179112795891;
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_21 += ((-((1 ? (max(18446744073709551615, 253)) : 16141364045542739193))));
                            var_22 = (max(var_22, ((max(((min(1, 7649802389048601747))), ((-1 ? 17672968285982595361 : 1048601958)))))));
                            arr_28 [i_3] [i_3] [i_3] [i_3] [i_5] [i_3] [i_3] = ((((max(-2017873055, -6))) ? (((((min(4900792211798719202, 4900792211798719202))) ? -4294967275 : -1))) : (min(-1, ((16383 ? 511 : 7649802389048601742))))));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_23 *= (max(((-7649802389048601747 ? -6205369401749120982 : 96)), 3347772937));
                            var_24 = (max(var_24, -7649802389048601748));
                        }
                        var_25 = (min(var_25, (~14)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
