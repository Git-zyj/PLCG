/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((var_6 ^ var_10) ? var_18 : ((~(-9223372036854775807 - 1))))) ^ (((((max(-27944, 109))) & ((-1172 ? 0 : var_11)))))))));
    var_21 = var_18;

    for (int i_0 = 1; i_0 < 24;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_22 = 9223372036854775807;
            var_23 = (min(var_23, ((max((max(13074707834853009530, (arr_4 [i_0]))), ((min(36758745, 255))))))));
            arr_5 [i_0 - 1] [i_0 - 1] [i_1 + 2] = 27935;
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_24 = (max(var_24, ((((((arr_7 [8] [i_0 + 1]) | (arr_7 [24] [i_0 + 1]))) & ((min(1775606094, 59))))))));
            var_25 -= (-(37 << 0));
        }
        arr_8 [i_0] = (max(((((arr_0 [i_0 + 1]) <= ((var_2 ? var_11 : 1073739776))))), (arr_0 [i_0 + 1])));
    }
    for (int i_3 = 1; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_26 = (arr_9 [i_3]);
        var_27 = arr_6 [21] [21] [i_3];
        var_28 = (arr_1 [22]);
    }
    for (int i_4 = 1; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = ((-(max((arr_11 [16] [i_4]), var_17))));
        var_29 = var_4;
    }

    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = (arr_9 [i_5]);
        arr_18 [i_5] = (min(((1171 ? 4039804695679176885 : -27944)), (min((arr_2 [i_5 - 3] [i_5]), var_0))));
        var_30 = (arr_16 [i_5 - 1]);
    }
    #pragma endscop
}
