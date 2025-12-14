/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = 14547;
        var_20 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_21 = (!520174637);
        var_22 = 14569;
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_23 *= (min((var_9 / -9223372036854775782), (((!(arr_5 [i_2 - 1]))))));
        var_24 = var_15;

        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_25 = 1;
            arr_9 [i_2] [i_3] = (((((!(((-83 / (arr_6 [1]))))))) * (arr_5 [i_2 + 1])));
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            var_26 = var_15;
            arr_13 [i_2] [0] [i_4] = (arr_7 [i_4] [1] [11]);
        }
        var_27 = (min(var_27, (((-14551 && (arr_6 [18]))))));
        arr_14 [i_2] = (max((arr_5 [i_2 + 1]), -9));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_28 = (arr_8 [i_5]);
        var_29 = var_15;
    }
    var_30 = (14537 <= 14537);
    var_31 -= ((~((~(var_5 * 13447295074551057025)))));
    var_32 = var_6;
    var_33 = (!var_1);
    #pragma endscop
}
