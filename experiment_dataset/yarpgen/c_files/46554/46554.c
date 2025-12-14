/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min((~var_3), var_14))) ? (((((min(64, 1))) ? ((1 ? -30 : var_6)) : var_6))) : (min(var_0, (1 + 7)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (max(var_18, ((((((1 ? ((((arr_2 [i_0] [20]) << (var_7 - 1703514488)))) : (((arr_1 [i_0]) ? var_4 : var_4))))) ? (max(((1 ? 1 : 1042076246635198046)), ((var_3 ? var_3 : (arr_0 [6]))))) : (((((-432696155 ? 214 : 1))) ? (min(1, var_2)) : ((((arr_2 [i_0] [1]) ? -54 : (arr_3 [i_0])))))))))));
        var_19 = (max(var_19, ((max(((((arr_1 [i_0]) ? (min(-5460652590457325123, 7007)) : (arr_1 [i_0])))), ((-8692 ? var_5 : var_6)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 &= ((arr_3 [i_1]) ? (arr_6 [i_1]) : (arr_3 [i_1]));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_21 *= (((((arr_9 [4] [i_1]) ? (arr_7 [1]) : (arr_5 [i_4]))) < var_1));
                        var_22 = ((84 + (arr_3 [i_1])));
                        var_23 = (max(var_23, ((1020752392149042307 ? 1 : 1))));

                        for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_1] [i_2] [i_2] [i_3] [i_4] [i_5 + 3] = ((-1224128384 ? var_4 : var_2));
                            arr_20 [i_4] [i_1] [i_2] [i_4] [i_5] = ((var_6 ? 719363384138472121 : (arr_14 [i_5 + 2] [i_5 + 2] [i_5] [i_5 - 1])));
                            var_24 *= ((149 ? (arr_9 [i_5 + 1] [i_1]) : 4294967267));
                            var_25 = ((arr_7 [i_1]) ? (((22620 ? 184 : 23681))) : ((1 ? var_5 : 1)));
                        }
                        for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_1] [i_1] [i_3] [i_2] [18] [18] = (1 | -2147483632);
                            var_26 += ((((((arr_4 [i_3]) ? var_16 : (arr_0 [i_1])))) ? 84 : 8679));
                        }
                        for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, (((var_10 ? (((arr_16 [i_1] [i_2] [i_3] [i_4] [i_7]) ? (arr_8 [i_2] [i_3] [i_1]) : var_2)) : (arr_17 [i_7 - 1] [i_1] [i_7 - 1] [i_7] [0]))))));
                            arr_29 [i_2] [i_2] [i_2] [i_2] = (((((1299568768212664982 ? 4481673267474070925 : var_5))) ? (((arr_26 [i_1] [17] [3] [3]) ? (arr_10 [i_1]) : (arr_9 [i_2] [i_2]))) : (((arr_0 [i_2]) ? 153 : 159))));
                        }
                    }
                }
            }
        }
        var_28 = ((((1 ? (arr_4 [i_1]) : var_3)) ^ (((var_9 ? 811862525 : (arr_4 [13]))))));
        var_29 *= ((37 ? 0 : -1683316330));
    }
    var_30 = (min(var_30, (((((1654848446 ? -118 : 1))) ? ((((((var_11 ? var_7 : var_4))) ? ((65532 ? 65535 : 20362)) : ((122 ? 1 : var_9))))) : ((((max(-10610, 252))) ? ((var_5 ? 2700 : var_5)) : -1))))));
    #pragma endscop
}
