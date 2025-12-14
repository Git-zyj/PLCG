/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = var_1;

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_14 = 3227236824776906594;
        var_15 = (min(var_15, ((max(65519, ((((((arr_2 [i_0]) >> (var_4 - 26519)))) ? (((var_4 ? 0 : var_3))) : (arr_0 [i_0 - 1]))))))));
        var_16 = (((arr_0 [i_0]) * (((var_1 * (25429 / var_7))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, (((!((min((1242098240 - var_7), (var_10 == 0)))))))));
                        arr_13 [i_0] [i_0] [i_2 - 1] [i_3 - 1] [i_3] [1] = (max((((arr_10 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1]) ? ((3921732629 ? 1016 : var_9)) : var_9)), (((!1) ? (!8589934591) : (((var_7 != (arr_3 [i_0]))))))));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_18 = (max(var_18, (((!((((arr_12 [i_2 + 1] [i_1] [9] [i_3 - 1] [i_3 - 1]) * var_3))))))));
                            var_19 = (((((max(2881874551, -22393290)))) ? (((var_1 % (arr_4 [i_0])))) : (((min(1413092745, (arr_4 [i_0])))))));
                            var_20 = (max((max((-2147483647 - 1), 1413092737)), 2147483647));
                            var_21 = ((((min(var_5, (arr_3 [i_0])))) ? ((var_7 ^ (arr_3 [i_0]))) : var_6));
                        }
                        arr_16 [i_0] [i_0] [i_0 + 1] [i_2] [i_0] |= (!0);
                    }
                }
            }
        }
        var_22 = (max(var_22, (((+(min((arr_1 [i_0 + 1] [8]), var_9)))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_23 = (max(var_23, (((!(arr_10 [i_5] [i_5 - 1] [i_5 - 1] [12]))))));
        arr_21 [i_5] [i_5] = (((arr_3 [i_5]) || (arr_3 [i_5])));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_24 = var_2;
        arr_24 [i_6] = ((!(((-(arr_19 [i_6]))))));
        arr_25 [i_6] = max(42481, 65535);
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_25 = var_8;
        var_26 = (((((-(max(var_5, var_11))))) ? (max(var_10, ((1 | (arr_8 [i_7] [i_7] [20]))))) : (((min(((var_1 || (arr_2 [i_7]))), ((!(arr_11 [7] [i_7] [i_7] [i_7] [i_7])))))))));
        arr_28 [i_7] [i_7] = ((7 >> (((max(-7767012756470693495, 4946209466525064783)) - 10679731317238858110))));
    }
    var_27 = ((((max(-8948460570959272102, 4219277035258941144))) ? (((var_10 / (max(var_8, var_0))))) : ((((max(var_5, 65535))) ? var_2 : (((var_3 ? var_1 : (-2147483647 - 1))))))));
    var_28 = (max(var_11, var_0));
    #pragma endscop
}
