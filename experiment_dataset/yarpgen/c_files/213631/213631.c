/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_14 = (max(var_14, (((min(var_9, (min((arr_1 [i_0 + 1] [i_0]), var_5))))))));
        var_15 = min((((min(3604368445143463781, (arr_0 [i_0]))))), (min((min((arr_1 [i_0 + 3] [i_0 + 3]), 13340918826897369996)), ((min((arr_1 [i_0 + 1] [i_0]), (arr_0 [i_0])))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 += (min(0, 16539683269471388721));
            var_17 = ((min((min((arr_3 [i_0]), var_10)), ((min(32837, var_12))))));
            arr_4 [i_0] = (min((min(((min((arr_0 [i_0 - 2]), (arr_0 [i_0])))), (min(18025357364334731901, var_7)))), (min((min(var_11, 6963120414200222582)), (arr_2 [i_0] [i_1] [i_1])))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_18 = ((min(var_6, 18446744073709551615)));
            arr_8 [i_2] = (min((min(55472, 13341828198990260829)), var_3));
        }
    }
    var_19 = (min((min((min(var_5, 1)), (min(0, var_11)))), (min((min(30891, var_3)), 1))));
    #pragma endscop
}
