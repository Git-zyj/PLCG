/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(2093284406947383238, 15002973208408307594));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(((-(arr_1 [i_0 - 1] [i_0]))), -59));
        arr_3 [i_0] = (((max(var_6, -var_12)) < (!var_0)));
        arr_4 [5] = (((~var_17) && ((((-1 ? 29049 : 69))))));

        for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_21 = (arr_7 [i_1]);
                        arr_12 [i_1] [i_1] [i_1] = (max((((!(arr_6 [i_0 + 1] [i_1 - 1] [i_1 - 1])))), (min((arr_10 [i_0] [i_0] [1] [i_3]), -59))));
                        var_22 |= ((((max((!-8974316094787555345), 1))) && 24356));
                    }
                }
            }

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                var_23 = (((var_0 && -17362) && (!var_17)));
                var_24 = ((((min(var_11, var_10))) || (arr_6 [i_0 - 2] [i_1 - 2] [i_0 - 2])));
                var_25 = (min((((arr_13 [i_1]) << (((arr_8 [i_0] [2] [i_0] [i_0]) - 56158)))), (arr_5 [i_0] [i_0 - 1] [i_1 - 1])));
            }
        }
        for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
        {
            arr_17 [i_0] = max(var_19, (11366218326064566935 % 24365));
            var_26 *= (arr_15 [16] [0] [i_5]);
            arr_18 [i_5] = (max(7080525747644984680, 17819));
            arr_19 [i_0] [i_0] [i_0] = (((max((((arr_5 [i_0] [i_5] [i_5]) || var_8)), (arr_13 [10]))) ? (arr_7 [7]) : ((-(arr_13 [i_0 - 2])))));
        }
        for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
        {
            arr_22 [17] [17] = var_15;
            var_27 -= (((((arr_20 [i_0] [i_6]) <= ((min((arr_6 [i_6] [i_6] [i_6]), (arr_15 [i_0] [6] [i_6])))))) ? (((35 <= (arr_8 [i_0 - 2] [1] [i_6] [i_6 - 2])))) : (((1799061515 > (arr_10 [i_0] [9] [i_0] [i_0]))))));
        }
    }
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        arr_27 [i_7] = var_10;
        arr_28 [i_7] = -125;
        var_28 &= var_10;
    }

    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_29 |= ((var_7 || (48970 || 11366218326064566935)));
        arr_31 [i_8] = var_0;
        var_30 = (min(var_30, ((max(((((10086351897213347069 ? -7334838562439501781 : var_7)) - (arr_30 [i_8]))), ((min(var_1, ((min(143, 65535)))))))))));
    }
    #pragma endscop
}
