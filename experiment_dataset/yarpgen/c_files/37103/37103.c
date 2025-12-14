/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_10;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_19 += ((1 ? (((~(((arr_5 [i_0] [i_0] [i_0]) ? var_5 : 0))))) : 1421453615));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_20 = var_2;
                var_21 = (min(var_21, var_0));
            }
            var_22 = max(var_0, (max((arr_6 [i_1] [i_0]), var_5)));
            var_23 += (max((arr_4 [i_1] [i_1] [i_0]), (arr_2 [i_1])));
            arr_8 [i_1] = 0;
        }
        var_24 = (min(var_24, (((-(arr_3 [i_0] [i_0] [i_0]))))));
        var_25 = var_3;
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_26 = var_13;
        var_27 *= var_7;
        arr_12 [i_3] [i_3] = (arr_10 [i_3]);
    }
    var_28 = var_15;
    #pragma endscop
}
