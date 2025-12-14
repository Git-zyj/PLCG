/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((min(16, 2505057575)) * (var_6 / var_9))), ((max((~33), ((min(33, var_1))))))));

    for (int i_0 = 1; i_0 < 7;i_0 += 1) /* same iter space */
    {
        var_13 &= (((min((min(0, (arr_0 [i_0]))), (max(167, 0)))) >> (((max((min(56372, -8379425724130983599)), ((min((arr_0 [i_0]), (arr_0 [i_0])))))) - 189))));
        var_14 = max(-119, 56372);
        var_15 = ((~(min((-104 && 268435328), (var_2 >> 0)))));
        var_16 = (((1652849445 ^ ((min(var_8, 161))))));
        arr_3 [i_0 + 1] = min(var_8, 147);
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1) /* same iter space */
    {
        var_17 = (min((min((~var_11), (var_8 % 201326592))), 165));
        arr_6 [i_1 + 4] = (arr_2 [i_1]);
    }
    for (int i_2 = 1; i_2 < 7;i_2 += 1) /* same iter space */
    {
        var_18 = (max((min((arr_2 [i_2 + 2]), ((min((arr_0 [i_2]), 127))))), (((var_3 ? ((3134420351789658567 ? 4472060480330791024 : (arr_1 [i_2]))) : (0 % -34))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_19 &= (((max((((arr_8 [i_2]) ? -6028020224489703805 : 268435328)), ((min((arr_0 [i_2]), (arr_1 [i_3])))))) | ((((min((arr_1 [i_4]), -7469)) / ((min(11043, -16))))))));

                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        var_20 = (min((min(0, (((arr_2 [i_2]) + var_4)))), (119 != -4472060480330791024)));
                        var_21 = (max(((((arr_10 [i_5] [i_3] [i_2]) << ((((54493 ? 56349 : 0)) - 56341))))), (min((arr_9 [i_3]), (((arr_1 [i_2]) * 0))))));
                    }
                    arr_15 [i_2] [i_3] [i_4] = (min(((min(6763, 53879))), (((min(9007130535264256, (arr_8 [i_3]))) - (var_6 == 51832)))));
                    var_22 = (max(var_22, ((((arr_8 [i_2 + 4]) ? (min(2367184447, (arr_8 [i_2 + 2]))) : (((min(var_9, 56372)))))))));
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 7;i_6 += 1) /* same iter space */
    {
        var_23 = (min(((min(((min(var_8, (arr_5 [i_6])))), (max(0, 0))))), ((51832 ? 0 : 94))));
        arr_18 [i_6] = (min((arr_14 [i_6] [i_6] [i_6] [i_6] [i_6]), (-32767 - 1)));
    }
    #pragma endscop
}
