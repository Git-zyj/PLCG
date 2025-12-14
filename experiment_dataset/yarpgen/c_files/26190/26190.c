/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((8652872770318797086 >> (var_10 - 1879831558)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 += min((min(274877906943, -274877906944)), (((!(arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = (max((!8652872770318797063), ((!(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_15 = (((2147483647 == 18446744073709551615) ^ (arr_4 [i_1])));
        var_16 = ((((((((arr_6 [i_1] [i_1]) == (arr_5 [8] [14]))) && ((((arr_4 [i_1]) * (arr_4 [i_1]))))))) | (max((-1290115699 <= 2000030920), (arr_5 [i_1] [i_1])))));
        var_17 = 9223372036854775790;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (arr_5 [i_2] [i_2])));
        var_19 = arr_6 [17] [i_2];
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_20 *= ((arr_11 [i_3] [i_3]) == (arr_11 [i_3] [i_3]));
        arr_14 [i_3] = ((18446744073709551609 <= (arr_12 [i_3])));
        arr_15 [i_3] [i_3] = (arr_10 [i_3] [i_3]);
    }
    var_21 = var_0;
    #pragma endscop
}
