/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_7;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (max(var_13, ((((1685423432 ? var_8 : (arr_0 [i_0])))))));
        var_14 = (arr_2 [i_0]);
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1 - 2] = max((((arr_6 [i_1 + 2]) & ((50077 ? 1866460719 : (arr_6 [i_1]))))), -204413509);
        arr_8 [6] &= ((-((((arr_6 [i_1 + 3]) && 2867956467)))));
        var_15 = (var_0 ? ((((min(-1685423432, 2125445486)) != var_11))) : (((!((min(2125445486, 3858)))))));
        var_16 = ((((min((arr_4 [i_1] [i_1 - 2]), (arr_4 [i_1 + 2] [i_1 + 3])))) ? (min((~14850462107829105825), ((8955386415745182631 ? 14850462107829105825 : var_3)))) : 2103097487));
    }
    for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_17 = (max(var_17, var_11));
        var_18 = (((max((((arr_9 [i_2 - 2] [i_2]) ? 4010122837 : 2538152404)), 3165031216))) ? ((~(arr_6 [i_2 + 1]))) : ((max((arr_11 [i_2] [i_2]), (((!(arr_5 [i_2 - 2]))))))));
        var_19 = -3858;
        var_20 *= (min(((max((arr_11 [10] [i_2 + 2]), var_8))), ((566932919 ? (arr_6 [i_2]) : (arr_6 [i_2 + 3])))));
    }
    var_21 = ((((~(var_3 | 8431730172275188902))) + ((max(((var_9 ? var_1 : var_9)), (var_10 && var_2))))));
    #pragma endscop
}
