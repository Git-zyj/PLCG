/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(7, -var_5));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = (((min(((128 ? 225 : var_11)), ((min(var_10, (arr_0 [i_0])))))) >> ((((-(min(var_5, var_7)))) - 4294967266))));
        var_17 = (max(var_17, var_3));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_18 = ((-(arr_3 [i_0] [i_0 - 1] [i_0])));
            var_19 = (max(var_19, (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
            arr_4 [i_1] = (((arr_0 [i_1]) | (var_9 | var_1)));
        }
        arr_5 [i_0] |= ((-(((min(21275, 218))))));
        var_20 = (min((arr_0 [i_0 - 1]), -117));
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_21 = (min(var_21, ((((min(1327715197, 12)) | (((44230 | (arr_7 [i_2 + 1] [3])))))))));
        var_22 &= (((min((max((arr_7 [i_2] [i_2]), 11)), -249)) * (arr_6 [i_2 + 1])));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_23 = ((!((((((2576839970 >> (-268627359 + 268627388)))) ? 0 : (143 != var_5))))));
        var_24 = ((((((min((arr_8 [i_3]), 511487429))) && (var_1 && 30))) || (arr_8 [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        arr_12 [i_4] = -var_1;
        var_25 = ((!(arr_8 [i_4 + 1])));
        arr_13 [i_4] = (arr_11 [i_4 + 3] [i_4]);
    }
    #pragma endscop
}
