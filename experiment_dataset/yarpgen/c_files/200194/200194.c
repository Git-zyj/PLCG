/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 ^= var_17;
    var_22 = (min(var_22, (((((var_8 == (var_0 < var_12))) || 32767)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_23 = ((((min((arr_0 [i_0] [i_0]), (arr_1 [i_0])))) || -44));
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_24 = (((max((arr_4 [i_0]), (arr_4 [i_0]))) <= (min(var_8, var_11))));
            var_25 = (arr_4 [i_0]);
            arr_5 [i_0] [i_0] [i_0] = var_3;
            arr_6 [i_0] [i_1] = (((min((arr_1 [i_1]), (arr_1 [i_1])))) | (min((arr_1 [i_0]), (arr_0 [i_0] [i_1]))));

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                var_26 = ((((min((arr_8 [i_2 + 2] [i_2 + 1]), var_8))) || (arr_3 [i_2 + 1])));
                var_27 = (((min((arr_9 [i_2 + 1]), (arr_4 [i_2 - 1]))) < (((((arr_4 [i_2 + 1]) + 9223372036854775807)) << (((arr_9 [i_2 - 1]) - 580778402))))));
                var_28 = (arr_8 [i_0] [i_2 - 1]);
            }
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_29 = (min((max((arr_12 [i_3]), (arr_12 [i_3]))), (arr_11 [i_3])));
        var_30 = (max(var_17, (min((arr_10 [11] [i_3]), var_6))));
        var_31 = (min((((arr_12 [i_3]) - (arr_10 [i_3] [i_3]))), 4220));
        var_32 = (arr_11 [i_3]);
        arr_14 [i_3] = var_14;
    }
    for (int i_4 = 3; i_4 < 18;i_4 += 1)
    {
        var_33 = (min(var_33, var_1));
        var_34 = (max(((min((((var_1 || (arr_15 [i_4])))), 43))), (min(var_10, var_19))));
        var_35 = 47;
    }
    var_36 = var_3;
    #pragma endscop
}
