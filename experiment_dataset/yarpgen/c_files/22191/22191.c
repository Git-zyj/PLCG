/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_7 ? var_5 : -var_1));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_5;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_16 = (((((~-2048) | (~28048))) - ((((min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) ? ((max(-28061, var_1))) : (!6078845430170088118)))));
            var_17 = ((!((min((arr_1 [17]), (!var_1))))));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_18 = ((!-2272526486431145491) ? -28068 : (((min(1, (!var_10))))));
            arr_7 [10] [i_0] [0] = (min(((!((min((arr_6 [i_0]), -19))))), (min((!-586256530), ((!(arr_4 [7] [i_2] [7])))))));
        }
        var_19 = ((((!(!-18904))) && ((min(3410, 16481)))));

        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_20 = ((((+(((arr_5 [i_0] [i_3]) ? var_7 : -1736619732))))) ? ((-6365123470547822384 ? (max(1736619735, (arr_5 [i_0] [i_3]))) : (arr_9 [i_0] [i_0]))) : (arr_3 [i_0] [i_3]));
            var_21 = (max(var_21, (((((max(3410, 32767))) || (((~(arr_0 [i_3] [i_0])))))))));
            var_22 = (max(var_22, ((((9107225947385908259 == 118) ? (var_11 < var_10) : (((var_14 ? 14336 : var_6))))))));
            var_23 = (max((((~(min((arr_0 [i_0] [i_3]), 4))))), 17741055946515537295));
            var_24 = (((((-((max(-3680, var_6)))))) ? (max((arr_0 [i_0] [i_3]), 8036393334226632756)) : (arr_4 [i_0] [i_0] [i_0])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            var_25 = (min(var_25, ((9223372036854775798 ? (arr_9 [i_0] [i_4]) : (arr_9 [i_0] [i_0])))));
            var_26 = (arr_11 [i_0] [7] [i_0]);
        }
        arr_12 [i_0] = (max(941358973, 233));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_27 &= ((var_13 ? ((((arr_5 [i_5] [i_5]) ? (min((arr_1 [i_5]), var_10)) : (arr_1 [i_5])))) : (((arr_11 [i_5] [i_5] [i_5]) ? (arr_11 [i_5] [i_5] [i_5]) : (arr_10 [i_5] [i_5] [i_5])))));
        var_28 = (max(var_28, ((((~(min(4095, (arr_0 [i_5] [i_5])))))))));
        var_29 &= min(127, 28048);
    }
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        var_30 = (max(var_30, 17277));
        var_31 = ((~(~var_6)));
        arr_19 [i_6] [i_6] |= ((!(~310242766)));
    }
    #pragma endscop
}
