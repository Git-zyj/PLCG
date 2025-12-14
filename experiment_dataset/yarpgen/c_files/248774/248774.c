/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-10749 ? 1 : 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_16 = (((((-22608 ? 41321 : var_10))) && ((!(var_2 && var_7)))));
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_3] [i_1] = (((min(-19105, 10046))) < (((((var_3 ? var_2 : 230))) ? var_13 : ((3881880266058003957 ? 1 : var_8)))));
                            }
                            for (int i_5 = 3; i_5 < 10;i_5 += 1)
                            {
                                arr_18 [i_1] [i_5] = ((-((var_4 ? 25128 : 55490))));
                                var_17 = 15712125916962350341;
                            }
                            for (int i_6 = 0; i_6 < 11;i_6 += 1)
                            {
                                var_18 = ((((48 << (var_1 - 984351621)))) ? ((-10768 ? 415880749 : var_0)) : ((var_8 ? var_8 : var_10)));
                                var_19 = (((((~(~10050)))) ? var_0 : var_14));
                                var_20 = 10061;
                                var_21 &= (((var_1 ? var_4 : ((var_9 ? var_2 : 25)))));
                                var_22 = (min((((55490 ? var_6 : 13518)), -1500437093)));
                            }
                            arr_22 [i_0] [i_0] [i_0] [i_1] = -11705;
                            var_23 = (-6200121767979087408 + var_12);
                        }
                    }
                }
                var_24 = (((var_2 ? -10768 : ((var_9 ? var_7 : 1)))));
            }
        }
    }
    #pragma endscop
}
