/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 + ((min(var_1, var_7)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (min(((-(arr_2 [i_0]))), (((!((((arr_2 [10]) ? var_0 : (arr_2 [i_0])))))))));
        arr_3 [i_0] = (34668 * 26894);
        var_13 = (max(var_13, (((((max((((arr_2 [i_0]) ? var_9 : 97)), (((arr_1 [11] [i_0]) % (arr_0 [i_0] [i_0])))))) % (max(((min((arr_1 [i_0] [i_0]), (arr_2 [1])))), (~var_0))))))));
        var_14 = max((((~(116 ^ 59802)))), (arr_2 [i_0]));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (0 ? ((((!(arr_4 [i_1]))))) : (min((arr_4 [i_1]), (arr_4 [i_1]))));
        var_15 = (min(((max(20563, (arr_5 [i_1])))), (min((~634119890), (arr_5 [i_1])))));
        var_16 = (min((max((arr_4 [i_1]), (arr_4 [i_1]))), ((min(364925645, var_9)))));
        arr_7 [i_1] = ((-(((((var_0 ? var_6 : 97))) ? ((max((arr_5 [4]), var_1))) : (((arr_5 [i_1]) - 179))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_17 = (((((65521 ? 76 : -20593))) - (min((max((arr_10 [14] [14]), 3660847406)), ((max((arr_5 [i_2]), -20564)))))));
        var_18 = (((((~(arr_10 [i_2] [i_2])))) != ((~((-(arr_4 [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_19 = ((((((arr_5 [i_3]) % var_5))) ? var_9 : ((~(arr_10 [i_3] [i_3])))));
        var_20 ^= (((var_4 ? (max((arr_12 [i_3] [i_3]), (arr_5 [i_3]))) : (0 / 6443))));
        var_21 = var_1;
    }
    var_22 = (max((max((((var_0 ? var_5 : 105))), (var_0 - var_8))), (-1 <= var_8)));
    var_23 = var_1;
    #pragma endscop
}
