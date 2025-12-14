/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_10 = (min(var_10, (max((arr_1 [i_0 + 2]), ((((61232 ? var_5 : (arr_1 [i_0 - 2]))) * ((var_2 ? var_1 : (arr_0 [i_0])))))))));
        var_11 = ((((min((123 / 130), var_5))) ? (((132 - 6846207217714408730) ? -274353093 : -11396)) : (((arr_1 [i_0]) ? ((var_8 ? (arr_0 [i_0 - 1]) : (arr_1 [i_0]))) : (~255)))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1 + 2] [i_1 + 2] = ((-(arr_4 [19])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_9 [i_1 + 2] = (arr_3 [i_1] [i_2]);
            arr_10 [i_2] [i_1] [i_1] = var_4;
        }
        var_12 *= (min((((1073741823 ? (arr_3 [i_1 - 1] [i_1]) : (~2)))), (max(((var_3 ? 123 : (arr_8 [i_1]))), (arr_6 [15] [15] [15])))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_13 [4] |= ((-(arr_3 [i_3] [i_3])));
        arr_14 [i_3] = (min((((((var_3 ? var_7 : (arr_4 [i_3])))) ? ((~(arr_8 [i_3]))) : (arr_6 [i_3] [i_3] [i_3]))), (133 / 10)));
        var_13 = max(((var_5 + (arr_0 [i_3]))), (arr_12 [i_3]));
        var_14 = (((((((min((arr_1 [i_3]), var_9))) ? (arr_1 [i_3]) : var_5))) > ((((((arr_3 [i_3] [i_3]) ? var_3 : var_5))) ? ((((arr_3 [15] [i_3]) ? 67 : 12))) : (arr_3 [i_3] [17])))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_15 += ((!(arr_8 [i_4])));
        var_16 = (min(((((var_5 < (arr_18 [i_4]))))), (((arr_3 [i_4] [i_4]) ? -var_7 : (arr_6 [i_4] [i_4] [i_4])))));
        var_17 -= -274353104;
    }
    var_18 = (var_5 || var_5);
    var_19 = var_7;
    #pragma endscop
}
