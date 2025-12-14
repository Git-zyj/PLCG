/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -109;
    var_11 |= ((var_0 ? (~var_8) : var_8));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_12 = (max(var_12, (((~(((arr_0 [i_0 - 2] [i_0 + 1]) ? (arr_0 [i_0 - 2] [i_0 + 1]) : (arr_0 [i_0 - 2] [i_0 + 1]))))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    var_13 = (arr_7 [i_2] [i_0 + 1] [i_0 + 1]);
                    var_14 += ((-21 ? 109 : 2127148784));
                }
                var_15 = (min(var_15, ((((~1201615697) ? ((-25053 ? 18446744073709551615 : (arr_8 [i_1] [i_1] [14] [i_1] [0] [i_2]))) : (arr_5 [i_0]))))));
            }
            var_16 = (max(var_16, ((min((arr_1 [12]), (-2147483642 ^ 16526750006398913661))))));
        }
    }
    #pragma endscop
}
