/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_8));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_12 *= var_0;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_13 -= (((((((arr_1 [i_0] [i_1]) <= (arr_1 [i_0] [i_1]))))) / ((var_7 ? (arr_1 [i_0] [i_1]) : (arr_1 [i_1] [i_0])))));
            arr_5 [i_0] = (max(((max(104, (arr_4 [i_1])))), (238755686 / -3106549619825953058)));
            var_14 *= ((-((((max(39213, 89))) - (arr_0 [i_1])))));
            var_15 = max((max((arr_3 [i_0] [i_1]), (((arr_1 [i_0] [i_1]) / var_0)))), ((max(3, (132 + 0)))));
            var_16 = var_2;
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_17 = (max(var_17, var_2));
            var_18 ^= (max((arr_1 [2] [i_0]), (arr_3 [i_2 - 1] [i_2 - 1])));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_19 = arr_7 [i_0];
            var_20 = ((-(arr_9 [i_0] [i_0] [i_0])));
        }
        var_21 = (~((+(max((arr_1 [i_0] [i_0]), (arr_7 [i_0]))))));

        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            var_22 ^= 65530;
            var_23 -= ((-(var_7 | 14336)));
        }
        arr_14 [i_0] = var_0;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] [i_5] = max(84, 4294967295);
        var_24 |= ((!((((!2147483647) - ((((arr_17 [i_5]) == (arr_9 [i_5] [i_5] [i_5])))))))));
    }
    #pragma endscop
}
