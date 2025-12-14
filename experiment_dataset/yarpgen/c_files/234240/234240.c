/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] = 18251;
                    var_19 = (max(var_19, ((min(((-((min(var_1, 18251))))), (arr_4 [i_2]))))));
                }
            }
        }
    }
    var_20 ^= ((((((var_8 >= 24576) ? (var_4 & var_13) : 1))) || var_3));
    var_21 &= (min(1, ((((var_10 ? var_17 : var_8)) > var_8))));

    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_22 = (((~-var_4) && (arr_13 [i_3 + 2] [11])));
        var_23 = ((!(--18251)));

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_24 = (min(var_24, ((((var_5 + 0) ? (min(-4796672515967490376, (var_10 + -18251))) : ((((arr_16 [i_3 + 4] [i_3 - 1]) ? 18265 : (var_4 + 18239)))))))));
            arr_18 [i_3] [i_4] = ((~(arr_13 [i_3] [i_4])));

            /* vectorizable */
            for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
            {
                var_25 |= (arr_16 [i_3] [i_3]);
                var_26 = (max(var_26, ((((var_13 % (arr_19 [i_3] [i_4] [i_5])))))));
                arr_22 [i_4] [i_4] = 18251;
            }
            for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
            {
                arr_27 [i_3] [i_4] [i_4] [i_4] = ((~((min((arr_23 [i_3] [i_4] [i_4] [i_6]), var_14)))));
                arr_28 [i_3] [i_4] [i_6 + 1] = ((~(max((((arr_25 [3]) ? var_5 : var_2)), (arr_15 [i_3])))));
            }
            for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
            {
                arr_31 [i_3 + 3] [i_4] [i_3] = (((((((min(19421, 24576))) ^ var_4))) ^ ((~((-4796672515967490377 ? 29029 : -4796672515967490376))))));

                for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    var_27 = (max((arr_14 [i_7 + 2]), ((17899 ? 1 : (min(0, (arr_17 [i_4])))))));
                    var_28 += ((119 ? (75 >= 1) : (arr_14 [i_4])));
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                {
                    var_29 -= var_10;
                    var_30 = ((-(((((min((arr_25 [i_3]), var_4))) == (arr_34 [i_3] [i_4]))))));
                    arr_38 [7] [i_7] [i_4] [i_4] [3] [i_3] = arr_29 [i_9] [i_9] [i_9] [i_9];
                }
                var_31 = (((arr_15 [i_7]) % (((-119 % (arr_23 [6] [2] [i_3 - 1] [i_4]))))));
                arr_39 [i_3] [i_3] [i_3] [i_4] = ((((((((arr_16 [i_3] [i_3]) & (arr_23 [i_3 + 2] [i_4] [i_7] [i_7]))) ^ ((max((arr_21 [i_4]), var_10)))))) | (min((((arr_37 [5] [i_4] [i_7 - 1] [i_3 + 3] [i_3 + 4]) & var_5)), (13535034533818464999 & 255)))));
                var_32 ^= ((((((~14347621770609612004) ? 62076 : (max(65535, 4975987143329897363))))) ? (arr_24 [10] [i_4] [i_7] [i_7]) : (min((((arr_30 [i_3] [5] [i_3 - 1] [i_3 - 1]) ? var_2 : (arr_17 [8]))), ((max(1, -14663)))))));
            }
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                var_33 = (min(var_33, ((min(191, -12516)))));
                arr_43 [i_3] [1] [i_4] [4] &= (0 < 1);
                var_34 = var_17;
            }
            var_35 = (((arr_26 [i_4] [i_4] [i_4]) ? (((max((max((arr_37 [i_4] [i_3 + 1] [i_4] [i_4] [i_4]), (arr_13 [i_4] [8]))), 33011)))) : (min((((~(arr_26 [i_3] [i_4] [i_4])))), (~var_9)))));
            var_36 = (min(var_36, ((min(((((arr_16 [i_3 + 4] [i_3 + 3]) ? (arr_16 [i_3 + 1] [i_3 + 2]) : (arr_16 [i_3 + 4] [i_3 - 1])))), (((arr_16 [i_3 + 1] [i_3 + 2]) * var_11)))))));
        }
        arr_44 [i_3] [i_3] = (((var_3 ? (((arr_19 [i_3] [i_3] [i_3]) ? var_18 : -4796672515967490401)) : ((((arr_26 [2] [2] [i_3 + 4]) ? 96 : 26955))))));
    }
    var_37 -= 851124853;
    #pragma endscop
}
