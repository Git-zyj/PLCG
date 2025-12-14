/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((~(!2145386496))) != ((min((156 <= 25769803776), 255)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_19 = (max(var_19, ((min(((var_5 ? (arr_0 [0] [i_1]) : var_16)), (((-(arr_2 [2])))))))));
            arr_5 [i_0] [i_0] = ((((max((18446744047939747839 < var_2), (max((arr_2 [i_0]), 242))))) ? ((((!(((~(arr_0 [i_0] [i_1])))))))) : var_4));
            var_20 = (!var_15);
        }
        for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [i_0] = (max((var_9 < var_17), -25769803776));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [i_0] [i_3] [7] [i_0] [i_0] = (((~(arr_7 [i_3] [i_2]))) & (max((114 / -51), var_11)));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = (min((arr_0 [i_0] [i_0]), (min(var_4, (var_15 - 58)))));
                    }
                }
            }
        }
        for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
        {
            arr_20 [i_0] = (((((((min((arr_7 [6] [6]), var_1))) != (((arr_11 [i_0] [i_0] [i_0]) / 1047552))))) < ((+((((arr_7 [i_0] [i_5]) != (arr_18 [i_5]))))))));
            arr_21 [i_0] [i_5 + 3] = ((!(arr_0 [i_0] [i_0])));
        }
        var_21 = -var_4;
        var_22 = (max(255, ((~(arr_12 [i_0] [i_0] [i_0] [i_0])))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {

                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            arr_32 [i_0] [i_6] [i_0] [i_6] [i_9] [i_0] = (((18446744073709551615 * 85) > (max(-var_15, -25769803777))));
                            arr_33 [i_0] [i_8] [i_0] [2] [i_0] = 0;
                            var_23 ^= (18446744073709551615 || 63);
                            var_24 = (((-var_13 * 1023) <= var_6));
                        }
                        arr_34 [i_0] [i_6] [i_6] [i_7] [i_0] [6] = 0;

                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            var_25 &= ((((((((var_0 ? 7 : var_16)) >= (~50))))) - (min((arr_30 [i_10] [i_10] [i_10 - 1] [i_10 + 2] [i_0]), var_1))));
                            arr_37 [i_7] &= ((25769803777 <= ((((((arr_14 [15] [i_6] [11] [i_8]) <= var_7)))))));
                            var_26 = 4801652225241334253;
                        }
                        var_27 = (((((!(((var_10 & (arr_0 [i_0] [i_0]))))))) < (var_7 || 153)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        var_28 = var_0;
        arr_41 [i_11] [i_11] = (!2147483647);
    }
    #pragma endscop
}
