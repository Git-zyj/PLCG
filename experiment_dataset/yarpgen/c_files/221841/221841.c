/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((992 ? 1129684539 : -992)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 -= min((~982), var_4);
            arr_8 [4] [i_1] = ((((min((arr_1 [i_0] [i_1]), -992))) ? (arr_1 [i_0] [i_1]) : (((((arr_6 [i_1]) ? 2130706432 : (arr_6 [i_0])))))));
        }

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_16 = (min(var_16, ((((((var_4 % (min(var_0, 576460752303423488))))) ? ((((arr_5 [i_2 + 1] [i_2 + 1] [i_2]) != (arr_5 [i_2 - 1] [i_2 + 1] [7])))) : 1)))));
            var_17 ^= (arr_6 [i_0]);
            var_18 = (96 ? (min(-1660912153, (arr_5 [i_0] [i_2] [i_0]))) : (arr_7 [i_2 + 1] [i_2 + 1]));
            var_19 -= (arr_3 [5] [i_0]);
            arr_11 [i_2 - 1] [7] = ((max((((arr_7 [i_0] [3]) ? (arr_1 [i_0] [i_0]) : 341255081)), (arr_9 [i_2 - 1] [i_2 + 1] [i_2 - 1]))));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_20 = 1006;
        var_21 = (min(var_21, (arr_2 [i_3])));
        var_22 = ((-1010 ? (((((arr_13 [i_3]) >= (arr_3 [0] [0]))))) : (((arr_0 [i_3] [i_3]) ? 4294705152 : (arr_6 [i_3])))));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_23 ^= (min(var_13, 3248033531743114215));
        arr_19 [i_4] = 3248033531743114215;
        var_24 = (max(15, 32577));
    }
    #pragma endscop
}
