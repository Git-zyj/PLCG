/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((var_7 >> (68 - 37)))) ? var_8 : 1))) ? var_2 : var_0));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_12 = 85;

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                var_13 = (max(var_13, (((~(((arr_10 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_2 + 2]) ? (arr_10 [i_1 - 1] [i_1 - 3] [i_1 - 3] [i_2 - 1]) : 34359607296)))))));
                arr_11 [i_2] [5] [i_0] = (5923996533441414620 % 18446744039349944319);
                var_14 *= (((max((arr_10 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1 - 1]), (arr_9 [i_1 - 1] [i_1 - 2] [i_1 + 1]))) << (((arr_3 [i_1 - 2] [i_1 - 1]) - 769372921))));
            }
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_15 = ((~(((!(arr_8 [i_0]))))));
            var_16 = (max(var_16, ((((3505924055 ? (arr_5 [i_0]) : (arr_5 [i_3]))) + 34359607271))));
            arr_14 [i_0] [i_3] = ((-((206 ? 18446744039349944345 : 44487))));
            var_17 -= var_8;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((((163 ? 18446744039349944354 : 36996)) << (((((arr_9 [i_4] [i_5] [i_6]) * 6017609820293544074)) - 798162162251123256)))))));
                            var_19 ^= ((!(((arr_4 [i_0]) != 34359607269))));
                            arr_23 [i_5] [i_3] [i_4] [i_4] [i_6] = min((((arr_8 [i_3]) - (arr_8 [i_0]))), (((arr_8 [i_5]) - (arr_8 [i_0]))));
                            arr_24 [i_0] [i_3] = (arr_13 [i_0] [i_0] [i_0]);
                        }
                    }
                }
            }
        }
        var_20 = (max(var_20, (-4357764979224750526 >= 34359607297)));
    }
    var_21 = 18446744039349944358;
    #pragma endscop
}
