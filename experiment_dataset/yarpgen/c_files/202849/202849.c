/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] |= ((!(((((max((arr_0 [i_0]), 10128256534277497986))) ? (((40 ? var_9 : -41))) : (max(292198710329707527, (arr_0 [i_0]))))))));

        for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((((max(((17 ? -43 : var_9)), ((var_3 ? var_5 : 58))))) ? ((((min(1438436885804180580, 3118664172420332352)) & ((70 ? (-9223372036854775807 - 1) : 52))))) : 14619359058920572103));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_15 = ((-((-3118664172420332380 ? -5885401510481392562 : ((-49 ? var_6 : 6509132119456506145))))));
                        arr_11 [i_0] [i_0] [i_0] [i_3] = (min(((((min(11, 60148))) + var_8)), ((min((arr_1 [18] [i_1 + 3]), var_10)))));
                    }
                }
            }
            var_16 = (-48 ? 1 : 3118664172420332382);
        }
        for (int i_4 = 3; i_4 < 17;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 4; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_23 [i_5] [i_4 + 3] = (max((~1859), (min(var_7, -30))));
                            var_17 &= ((-((-3250394958017779965 ? -30 : -3118664172420332370))));
                            var_18 += min(-var_11, ((min(var_7, var_2))));
                            var_19 -= ((max(-3118664172420332357, (arr_6 [i_0]))));
                        }
                    }
                }
            }
            var_20 += ((!((min(18446744073709551615, -4657829512806800684)))));
            arr_24 [i_4] = (((((var_3 ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) : ((max(25163, (-127 - 1))))))) ? ((((max(-4657829512806800679, var_12))) ? (arr_20 [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 4] [i_4 + 4]) : var_2)) : (((((max(var_1, 0)))) / -4657829512806800683))));
            arr_25 [i_0] [4] = (min(((var_14 ? (arr_12 [i_4 + 3] [i_4 - 3]) : (((arr_12 [i_0] [i_4]) ? 25733 : -1810206407)))), ((((arr_19 [i_0] [i_4 - 2] [i_4 - 3]) || 3250394958017779965)))));
        }
        arr_26 [i_0] = ((!((!(arr_10 [i_0])))));
        var_21 = 1;
    }
    var_22 = ((var_7 ? ((((var_12 > (min(var_13, var_0)))))) : ((1 ? var_0 : (((max(var_10, 1))))))));
    var_23 = ((~((-((max(-16861, 26840)))))));
    var_24 = ((var_9 ? var_8 : (max(var_14, -3118664172420332392))));
    #pragma endscop
}
