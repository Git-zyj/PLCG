/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((343 ? var_7 : ((((min(var_0, 112))) ? (((max((arr_1 [i_0 + 1] [i_0 + 1]), -125)))) : 2772908504610038838))));
        arr_3 [i_0] [i_0] = ((!(arr_1 [i_0 - 2] [i_0 - 2])));
        arr_4 [i_0] = var_2;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (!(-14020 | 475569994));
        arr_9 [i_1] = ((((var_7 ? ((max(var_7, (arr_7 [i_1] [7])))) : ((var_2 - (arr_6 [i_1])))))) + var_4);
        arr_10 [i_1 + 1] [i_1] = ((((max(var_7, (arr_6 [i_1 - 1])))) + ((-(arr_5 [i_1 + 1])))));
        arr_11 [i_1] = arr_7 [i_1] [i_1];
        arr_12 [i_1] [i_1] = ((((((var_10 ? var_4 : -343))) ? (((var_14 ? var_13 : 1))) : (min((arr_5 [i_1 + 2]), 13382751921929637474)))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_15 [i_2] = ((((((arr_5 [i_2]) ? (arr_5 [i_2]) : var_10))) ? var_13 : ((((min(112, var_12))) ? ((((arr_7 [i_2] [i_2]) % (arr_0 [i_2])))) : (min(112, var_11))))));
        arr_16 [i_2] [i_2] = ((((((arr_5 [i_2]) * 0))) > -var_13));
        arr_17 [i_2] |= ((-(min(((var_5 ? var_8 : 3859677232959226888)), ((min((arr_13 [i_2]), (arr_6 [i_2]))))))));
        arr_18 [i_2] = (((((var_10 >= (arr_6 [i_2])) ? (min(var_8, var_14)) : ((var_6 ? var_7 : (arr_5 [i_2])))))));
        arr_19 [i_2] [i_2] = (min(-330, (arr_7 [i_2] [i_2])));
    }
    var_16 = 5987320088046988866;
    var_17 = (((~5448807774181008548) ? (!var_7) : (((max(var_9, var_1))))));

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_22 [10] &= (min(var_0, ((15427 ^ (arr_13 [i_3])))));
        arr_23 [2] |= ((~(max(((0 ? -112 : var_2)), (((arr_14 [i_3]) ? var_3 : (arr_6 [i_3])))))));
        arr_24 [i_3] [i_3] = var_10;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        arr_28 [i_4] = (((arr_21 [8]) ? -343 : (arr_21 [0])));
        arr_29 [i_4 + 2] = ((~(var_0 ^ var_2)));
    }
    #pragma endscop
}
