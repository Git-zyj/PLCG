/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_18 = -802795090;
        var_19 = ((29328 <= (arr_0 [i_0])));
        arr_2 [12] = (-29329 && -29329);
        var_20 &= ((0 ? 802795089 : (-127 - 1)));
        var_21 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_22 *= (((((((arr_0 [i_1]) | var_15)) + 2147483647)) << ((((max((arr_3 [9]), (arr_3 [i_1])))) - 1))));
            arr_7 [i_1] [i_1] = (arr_4 [i_1]);
            arr_8 [i_1] = (((((+(((arr_3 [i_1]) / (arr_4 [11])))))) ? (((((-(arr_1 [i_1]))) > -var_10))) : (((!((((var_10 + 2147483647) >> (var_10 + 94)))))))));
        }
        var_23 = var_17;
    }
    var_24 = (max(var_24, ((max(11713426266159917509, 120)))));
    #pragma endscop
}
