/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (1 * var_13);

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_15 = ((((min((arr_4 [7] [i_0 + 4]), (arr_4 [1] [i_0 - 2])))) ? (arr_0 [i_1 - 1]) : ((1 ? (arr_4 [i_0] [i_0 - 2]) : (arr_0 [i_1 + 2])))));
            var_16 = (var_0 | 8796093022176);
        }
        arr_5 [i_0] = ((((18446735277616529424 && (arr_4 [i_0 - 2] [i_0 + 1]))) ? ((242 * (arr_4 [7] [7]))) : (((1425503797 != (arr_4 [10] [i_0 + 2]))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 -= 641490389436690307;
        arr_8 [i_2] [1] = 0;
        var_18 += (max((arr_4 [i_2] [i_2]), ((-(((arr_4 [i_2] [i_2]) ? (arr_7 [0]) : (arr_7 [0])))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        arr_12 [i_3] = (arr_10 [i_3 - 1]);
        var_19 += arr_9 [i_3] [i_3];

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_20 = (8796093022191 & 39);
            var_21 -= ((~((18446735277616529408 << (var_0 - 92)))));
        }
    }
    #pragma endscop
}
