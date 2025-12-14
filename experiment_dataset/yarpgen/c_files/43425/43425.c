/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(106, ((187 ? 106 : 12))))) ? -67 : ((((((var_8 ? 136896792 : -14323))) || (((68 ? 27250 : 44737))))))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 += ((~((((arr_0 [i_0]) == (var_9 <= var_6))))));
        var_14 = (arr_1 [i_0 + 1]);
        var_15 = (((arr_0 [i_0 - 1]) ? (((!(arr_1 [i_0 - 1])))) : ((((((-(-127 - 1)))) || ((((arr_0 [i_0 - 1]) ? var_9 : (arr_1 [i_0 + 1])))))))));
        var_16 = ((!((min(var_9, (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_17 -= (arr_3 [1]);
        arr_4 [i_1] = ((((((arr_2 [i_1]) ? (((var_0 == (arr_2 [16])))) : (arr_3 [i_1])))) || var_1));
        var_18 = (((((arr_3 [i_1]) ? (max(var_9, (arr_3 [i_1]))) : ((((arr_2 [i_1]) ? var_6 : -1632692983))))) == (((((((0 ? 187 : (arr_3 [i_1])))) || (arr_3 [i_1])))))));
        arr_5 [i_1] = (arr_3 [i_1]);
    }
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        var_19 ^= ((~(min((128 ^ 106), 6353610573729237658))));
        arr_8 [i_2] = 112;
    }
    var_20 = var_8;
    #pragma endscop
}
