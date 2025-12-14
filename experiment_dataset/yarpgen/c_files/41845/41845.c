/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((((arr_0 [i_0]) ^ (arr_0 [i_0])))) ? (((5 | (arr_1 [i_0] [i_0])))) : ((725974866 & (arr_0 [i_0]))))) | ((~((4095 ? 2668429673 : 1626537640)))));
        var_12 = ((((~((~(arr_0 [i_0])))))) | (((((4087 ? (arr_1 [i_0] [i_0]) : 125))) ^ (((arr_1 [i_0] [i_0]) ^ var_2)))));
        var_13 = (((((~(arr_1 [i_0] [13])))) ^ ((((!(arr_1 [i_0] [i_0]))) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_7)) : ((var_0 ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, ((((3790139142 > -2151393937) ? (((((~(arr_1 [i_1] [i_1])))) ? (-10972 ^ 16625922606143184202) : (((~(arr_3 [i_1] [6])))))) : (((((~(arr_1 [i_1] [17]))) ^ ((var_10 ? -9232 : 55))))))))));
        var_15 = ((((((-25761 | 0) | ((25780 ? var_3 : 1120273131))))) ? (((~(~0)))) : ((((((arr_5 [i_1]) ? -29173 : (arr_5 [i_1])))) ? (~4294967290) : ((~(arr_4 [i_1] [i_1])))))));
        arr_6 [i_1] = ((((((((0 ? 4 : 11020))) && -31295))) & (((251 != 211) ^ (((255 < (arr_3 [i_1] [4]))))))));
        arr_7 [i_1] = ((+(((~-56) | (((arr_1 [i_1] [i_1]) ? -13383 : (arr_3 [i_1] [15])))))));
    }
    var_16 = (((-22501 >= 75) & (((-var_6 > ((var_5 ? var_6 : 814365453)))))));
    var_17 = ((((~(18446744073709551592 & 1008171952))) >= (((-((-45 ? var_3 : var_3)))))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            {
                var_18 = (min(var_18, ((~((((var_1 - (arr_3 [i_3 - 1] [i_3]))) ^ (var_8 | var_1)))))));
                var_19 = ((!((((var_2 ? (arr_4 [i_3 - 2] [i_2 - 1]) : var_1)) != (var_3 > 1626537641)))));
                var_20 *= ((!((((((arr_11 [12] [i_3]) ? var_8 : 90)) | ((0 ? -25769 : 1801089572)))))));
            }
        }
    }
    var_21 = ((~(((30 & 188) ? (var_10 & var_11) : ((var_3 ? var_1 : var_6))))));
    #pragma endscop
}
