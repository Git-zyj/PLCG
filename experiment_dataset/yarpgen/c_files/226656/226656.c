/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max(((~(((-3910 + 2147483647) >> (var_14 + 1043245566))))), (1208282958268354613 == -5426598715862183106))))));
    var_17 = var_0;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0]);
        var_18 = ((((max(43861, (arr_2 [i_0] [i_0])))) & (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_19 = (min(var_19, (((5 * ((-(255 / -4934624601816964933))))))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_20 = (min(var_20, (((((((-223914531 + 2147483647) << (((var_12 + 1973748537788449184) - 2)))) % (arr_0 [i_1] [i_2])))))));
            var_21 = (((arr_0 [i_1 - 3] [i_1 - 1]) ? var_1 : (~-223914531)));
        }
    }
    #pragma endscop
}
