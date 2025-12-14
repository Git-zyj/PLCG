/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_16 = ((var_10 ? ((3940997973 ? (arr_3 [i_0 - 3] [i_1]) : (!0))) : 1));
                    var_17 = (((min(var_15, -14614)) != 76));

                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        var_18 = (!var_15);
                        var_19 = ((((max(1139266952860462776, 353969305))) ? var_4 : var_3));
                    }
                }
                arr_10 [i_1] [6] = ((~(min((18446744073709551615 ^ var_10), var_15))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_19 [2] [i_1] [i_1] [i_5] [i_1] = 12108339820893745847;
                                var_20 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_21 = (-var_9 - 111);
                                var_22 *= (max((((-9223372036854775807 - 1) * (max((arr_28 [i_7] [14] [i_9] [i_10]), 255)))), (((var_8 + (arr_21 [i_11] [i_11]))))));
                            }
                        }
                    }
                    arr_35 [i_9] = ((!(((var_7 - (min(var_4, (arr_24 [4] [i_8] [6]))))))));
                }
            }
        }
    }
    var_23 = ((max(var_7, 228)));
    var_24 = ((-31399 ? 31373 : (((!(!var_0))))));
    var_25 = -1139266952860462769;
    #pragma endscop
}
