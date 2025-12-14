/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((26247 ? 11736775395353488909 : (((((var_5 != 49258) != 8703562478473666416))))));
    var_14 = ((-((-((var_6 ? var_0 : var_8))))));
    var_15 = 2822505188;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_16 = var_11;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_17 = 3928;
            arr_7 [i_0] [i_0] = (arr_1 [i_0 - 2] [i_0 - 1]);
            var_18 = (min(var_18, 16278));
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_19 += ((var_10 != ((-var_5 ? ((min(222, (arr_10 [i_2])))) : -var_11))));
            arr_11 [i_0] [i_2] [i_2] = ((-238 ? (((arr_10 [i_2 - 1]) ? (arr_10 [i_0]) : (arr_10 [i_0 - 2]))) : ((min(20, (arr_10 [i_2 - 1]))))));
        }
        var_20 = (max(var_20, (min((((arr_8 [i_0 + 1] [i_0 - 2] [15]) ? (arr_8 [i_0] [i_0 - 1] [0]) : (arr_0 [i_0 - 1]))), ((max((arr_8 [i_0] [i_0 + 1] [i_0]), (arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 2]))))))));
    }
    for (int i_3 = 4; i_3 < 10;i_3 += 1)
    {
        var_21 = ((((arr_9 [i_3] [i_3] [i_3 + 2]) ? var_6 : (arr_9 [i_3] [17] [i_3 - 2]))));
        var_22 += var_4;
        arr_14 [i_3] = (((-(arr_2 [i_3] [i_3]))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_20 [i_4] [i_4] = (max((((29 ? (((max(var_8, var_7)))) : (arr_18 [i_4] [i_5])))), ((3805 ? (36 % var_12) : 11729520499116707303))));
            var_23 = (((((((max(40, var_10))) ? ((max(7037, (arr_6 [i_4] [i_4] [i_4])))) : ((-(arr_18 [i_5] [i_5])))))) ? (((1 > var_6) << (8703562478473666417 - 8703562478473666401))) : ((~(arr_8 [i_4] [i_4] [i_5])))));
            arr_21 [i_4] = var_11;
            arr_22 [i_4] [1] [i_5] = 49257;
        }
        arr_23 [i_4] = 36;
        arr_24 [i_4] = (((((((max((arr_8 [i_4] [i_4] [i_4]), var_8))) ? (arr_15 [i_4]) : (arr_17 [i_4] [i_4])))) ? (!16291) : 39));
        var_24 = ((var_1 ? (((207 ? var_11 : var_6))) : (arr_3 [i_4] [i_4] [i_4])));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_25 -= ((((((((-5317870158901966972 ? var_11 : 17933148522547706630))) ? 47756 : (((arr_25 [i_6]) ? 0 : 16278))))) ? (arr_0 [i_6]) : (((((arr_25 [i_6]) >= (arr_25 [i_6])))))));
        var_26 = (arr_26 [i_6]);
    }
    var_27 = var_12;
    #pragma endscop
}
