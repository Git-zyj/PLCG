/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (max(var_16, ((max((((arr_2 [i_0]) ? (arr_0 [4]) : var_5)), ((((arr_0 [i_0]) && ((min(8443718058105460495, 647004405)))))))))));
        arr_4 [i_0] = (min((~-32761), ((((((481669014 ? var_6 : (arr_3 [i_0])))) > (arr_2 [i_0]))))));
        arr_5 [4] = ((-(((!(((var_2 ? 2251206533 : var_14))))))));
        arr_6 [i_0] = -1398630303;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_11 [i_1] = var_7;
        var_17 -= ((((!(arr_7 [i_1] [i_1]))) ? (min((arr_7 [i_1] [8]), 10003026015604091113)) : (arr_8 [i_1])));
    }
    var_18 = ((((~(min(var_13, 10003026015604091130)))) >= ((((var_13 >= (min(8443718058105460495, 0))))))));

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_19 = var_3;

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_20 = ((((~(arr_7 [18] [18])))) >= ((((max(4843, (arr_12 [i_2])))) ? ((0 ? 8443718058105460483 : 2097151)) : (arr_13 [4] [9]))));
            var_21 -= (min(((((min(-7749713812579531235, 1197024518132950077)) == var_10))), (min((!var_1), -19))));
        }
        arr_17 [i_2] [8] = (max((min((arr_16 [i_2] [5] [i_2]), 10003026015604091133)), (~-32761)));
    }
    #pragma endscop
}
