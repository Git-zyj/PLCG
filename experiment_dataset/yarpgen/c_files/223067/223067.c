/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 ^= 7653580057584529002;
        var_21 = ((arr_0 [i_0]) & 134217727);
        var_22 = (min(-14753, (arr_2 [i_0] [i_0])));
        var_23 |= 6;
        var_24 = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_25 &= (arr_3 [i_1]);
            arr_9 [i_2] [i_2] [i_2] = ((((max((arr_4 [i_2] [i_1]), ((-(arr_7 [i_1] [i_2])))))) ? ((((min(var_11, var_6))) ? (84 <= 84) : ((-3325655239344643261 | (arr_8 [i_2] [i_2] [i_1]))))) : (((((max(var_6, var_13)) > (((arr_7 [i_1] [i_2]) ? 84 : 0))))))));
            arr_10 [i_1] [i_1] &= (((((((18 * 0) < ((-7793101459574471317 ? var_12 : var_15)))))) >= var_1));
        }
        arr_11 [i_1] = (min(var_14, (84 * 65535)));
        arr_12 [6] [i_1] = (((((39027 | ((var_0 ? (arr_8 [i_1] [i_1] [2]) : var_8))))) & var_1));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
            {
                var_26 -= ((-22057 ? (arr_17 [i_3] [i_4] [i_4]) : (((arr_7 [i_3] [i_5]) >> (((arr_19 [i_5] [i_4] [i_4] [i_3]) + 6837827070818020600))))));
                arr_21 [i_5] [i_5] [i_5] = ((!((((arr_15 [i_4] [i_4]) ? 1677490679496984922 : var_17)))));
                arr_22 [i_3] [i_3] [i_3] [i_3] = ((84 ? (arr_8 [i_5] [i_5] [i_5]) : (arr_16 [i_3] [i_3])));
                var_27 = (max(var_27, ((((~5570) + ((-(arr_19 [i_3] [i_4] [i_5] [i_3]))))))));
            }
            for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
            {
                arr_25 [15] [15] [i_4] = (arr_17 [i_6] [i_4] [i_3]);
                var_28 = (min(var_28, 16612100006062164618));
            }
            arr_26 [i_3] [i_3] [i_3] = arr_14 [i_3] [i_4];
            arr_27 [i_3] = (((arr_16 [i_3] [i_3]) != (((arr_4 [i_4] [i_3]) ? (arr_8 [i_3] [i_4] [i_3]) : (arr_14 [i_4] [i_3])))));
            var_29 = (((arr_19 [i_4] [i_3] [i_3] [i_3]) ? 94 : 22056));
        }
        var_30 = ((((((!8258467954024671640) ? 7793101459574471316 : (!65331)))) > (min((arr_13 [i_3]), ((((arr_14 [i_3] [i_3]) ? (arr_4 [i_3] [2]) : 84)))))));
        arr_28 [i_3] [i_3] = (arr_24 [i_3]);
        arr_29 [i_3] = (((max((((7793101459574471317 ? 8164905368614395645 : (arr_15 [i_3] [i_3])))), ((0 >> (33559 - 33557))))) <= ((min((arr_15 [i_3] [i_3]), (((!(arr_7 [i_3] [i_3])))))))));
        var_31 = (arr_6 [i_3]);
    }
    var_32 = (min(var_32, 24));
    var_33 &= var_11;
    #pragma endscop
}
