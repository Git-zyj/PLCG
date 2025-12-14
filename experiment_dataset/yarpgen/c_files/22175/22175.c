/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_10 ^= ((((((64 << (-20272 + 20294))) << (((arr_0 [i_0 + 1]) - 168)))) | (arr_0 [i_0 + 1])));
        var_11 ^= (-(arr_1 [i_0 + 1]));
        var_12 = ((((max((((!(arr_0 [i_0 + 1])))), (arr_1 [i_0 + 1])))) / ((-((min((arr_1 [i_0 + 1]), (arr_0 [i_0 + 1]))))))));
    }
    var_13 = ((-(64 / var_9)));
    var_14 = 42;
    var_15 = (min((((549755813887 || var_1) ^ (1910990843 || var_6))), ((((23 <= var_3) < (var_1 != 2340178670))))));

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (!549755813894);
        var_16 = (((arr_0 [i_1]) | -18446743523953737728));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (arr_6 [i_2] [i_2]);
        var_17 = (min(var_17, ((((min((~549755813894), 1198431861)) & ((min((((arr_0 [i_2]) ^ (arr_6 [i_2] [i_2]))), ((((arr_7 [10]) < (arr_7 [4]))))))))))));
        var_18 = ((!(((min(1845390023, (arr_1 [i_2]))) != (min(1006632960, 822248565))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_19 = ((((+(((arr_4 [i_3] [i_3]) | 1733493547)))) >> ((((((((arr_3 [i_3] [i_3]) - (arr_6 [i_3] [i_3])))) ? ((((arr_7 [i_3]) ? -17 : 13509))) : (arr_7 [i_3]))) - 4294967248))));
        var_20 = (max((((((-121 * (arr_6 [i_3] [i_3])))) ? ((max(32788, 2))) : (arr_0 [i_3]))), ((-84 % (18446743523953737725 != 30)))));
    }
    #pragma endscop
}
