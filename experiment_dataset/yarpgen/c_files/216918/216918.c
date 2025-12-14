/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_15 *= (min(985799251, 1498358386708552738));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((!(arr_1 [0])));
        var_16 = (arr_3 [i_1 + 1]);
        arr_6 [i_1] = ((!(((-((((arr_3 [i_1 - 1]) > -1498358386708552739))))))));
        var_17 = (min(var_17, (((776321839 ? -1498358386708552762 : 1)))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_18 &= 223;
            var_19 = ((!((((arr_8 [i_2]) ? -1681071488516683420 : (arr_9 [i_3] [i_3]))))));
        }
        arr_11 [i_2] [i_2] = ((~(((((var_14 ? (arr_10 [i_2 - 1] [i_2]) : 11990680208892580503))) ? (((arr_7 [i_2 - 1]) ? (arr_9 [14] [i_2]) : (arr_10 [i_2] [i_2 - 1]))) : ((((arr_7 [i_2 - 1]) >= (arr_10 [i_2] [i_2]))))))));
    }
    var_20 &= (!var_7);

    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_15 [i_4] = (((((~(arr_13 [i_4 - 1] [i_4 - 1])))) ? (((~((~(arr_12 [i_4 - 1] [22])))))) : (min((((arr_12 [i_4] [11]) ? (arr_14 [i_4 - 1]) : 575329670)), ((((arr_12 [i_4 - 1] [i_4]) ? -8 : (arr_13 [i_4] [i_4 - 1]))))))));
        var_21 += 1498358386708552726;
        var_22 *= ((!(((~((-(arr_14 [i_4]))))))));
    }
    #pragma endscop
}
