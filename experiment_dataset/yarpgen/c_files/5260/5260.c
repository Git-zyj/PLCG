/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = ((2416486673031262316 == var_15) - (-1 / -497169173689849855));
    var_20 = ((((((((6666502150585634475 ? var_14 : var_7))) ? (max(5266458274610505036, var_9)) : var_8))) ? ((var_2 ? -var_12 : ((var_3 ? var_6 : var_8)))) : ((((((min(-6666502150585634452, var_8))) && (((var_16 ? 6735012357854721388 : var_7)))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0 + 2]);
        var_21 = (-9223372036854775807 - 1);
        arr_3 [i_0] [i_0] = ((-(arr_1 [i_0] [i_0 + 2])));
        var_22 = (-6666502150585634475 ? -2870949487796526502 : 13103318904938381420);
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_23 = ((((arr_4 [i_1 + 1]) ? (max((arr_5 [i_1]), 2870949487796526479)) : ((~(arr_5 [8]))))) & -947361332099715300);
        arr_6 [i_1] = (arr_4 [i_1]);
        arr_7 [i_1] = ((((min(((14878252045983028269 ? -6720955071798075499 : -3133606219827062634)), (arr_4 [i_1 + 1])))) ? ((2583057982183328322 ? (min(var_12, (arr_5 [i_1]))) : var_17)) : 5445679976038028535));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_24 = 3568492027726523340;
        var_25 = (max(var_25, var_7));
        var_26 ^= (max(((((min((arr_8 [i_2] [i_2]), 4817715589150277919)) > (arr_9 [i_2])))), (((arr_8 [i_2] [i_2]) ^ (arr_8 [i_2] [i_2])))));
        arr_10 [i_2] = (arr_8 [i_2] [i_2]);
        var_27 = ((((!(arr_8 [i_2] [i_2]))) ? (8104341107571057315 * 3568492027726523340) : ((((!(arr_9 [i_2])))))));
    }
    #pragma endscop
}
