/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((var_8 ? var_2 : ((min(var_16, var_4))))) != var_11)))));
    var_20 = ((min(var_14, (~16446886460484543981))) * (((var_16 ? var_11 : 3024574924210350097))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_21 ^= 3024574924210350078;
                            var_22 -= ((((arr_5 [i_3]) > var_10)) ? (max(var_2, (arr_0 [i_0 + 1] [i_0 + 1]))) : (((~(arr_3 [i_0 + 1])))));
                            var_23 -= ((!(((min(2464289738275816540, var_0))))));
                            var_24 = var_18;
                        }
                    }
                }
                var_25 = (max((min((arr_11 [i_0 + 2]), 16446886460484543981)), (arr_11 [i_0 + 3])));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_26 = (((arr_12 [i_0 + 3] [i_0 + 3] [i_0 + 2] [i_0 + 3] [i_0 + 3]) || 6313290067240159613));
                    var_27 = (var_1 <= var_12);
                    var_28 *= (((arr_4 [i_0 - 1] [i_4]) < var_5));
                    arr_15 [i_4] [i_1] [i_4] [i_1] |= (arr_4 [i_4] [i_4]);
                    var_29 = (min(var_29, ((((arr_8 [i_0] [i_0 + 1] [14] [i_4]) && (arr_8 [i_0 + 3] [i_0 + 1] [i_0 + 1] [i_4]))))));
                }
                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    var_30 = (min(var_30, ((((var_15 == var_7) + (arr_17 [i_0] [i_0 + 2] [17] [i_0 + 2]))))));
                    var_31 = (-((max((arr_5 [i_0 - 1]), var_8))));
                }
                var_32 = min(((min(2464289738275816540, (arr_10 [i_0] [i_1])))), (arr_9 [i_1] [i_0]));
            }
        }
    }

    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {
        var_33 ^= ((-43 ? ((max(var_8, (var_6 >= -25871)))) : (arr_21 [i_6] [i_6])));
        var_34 += (((min((0 - 7697006019594976548), 2130706140)) & ((((18446744073709551615 || 6162981885420614918) - ((min((arr_14 [1] [1] [i_6] [i_6]), var_16))))))));
    }
    for (int i_7 = 2; i_7 < 12;i_7 += 1)
    {
        var_35 *= ((((((var_10 == var_7) ? ((max(var_6, var_0))) : (var_7 == var_3)))) != (((var_9 | var_2) ? (var_11 & 2464289738275816540) : var_10))));
        var_36 = (((((var_0 % var_9) || (((arr_1 [i_7]) <= var_6)))) || (min((!var_10), (!var_12)))));
        var_37 = var_9;
        var_38 = ((((((-2730089280523194070 & var_4) ? (((arr_23 [i_7] [i_7 + 3]) | 1545474027669910637)) : (arr_12 [i_7 - 2] [i_7] [i_7 + 2] [i_7 - 1] [i_7])))) && (((0 ? var_9 : -4099503620507311046)))));
    }
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        var_39 = (((((!(16483968044324072313 == 10173951296684632968)))) / (18446744073709551591 * var_15)));
        arr_27 [i_8] [i_8] = (((1962776029385479302 && var_17) > (arr_24 [i_8 + 1])));
        arr_28 [i_8] = (((max((arr_16 [i_8 - 1] [i_8 + 1] [i_8] [i_8]), var_5)) / ((max((arr_0 [i_8 + 1] [i_8 + 1]), (arr_22 [i_8 + 1]))))));
        var_40 = 4940;
    }
    var_41 = ((var_17 - ((((((((-6313290067240159614 + 9223372036854775807) >> (var_12 - 893873441809062283)))) || (var_11 == 4294967295)))))));
    #pragma endscop
}
