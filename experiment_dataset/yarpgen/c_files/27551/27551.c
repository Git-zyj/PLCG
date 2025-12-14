/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((max((min((max(32742, 8254936607448080056)), (((-117 ? var_8 : 2344))))), (!4294967285))))));
    var_12 = (min(var_12, (((!var_8) ? var_7 : (((!(((var_1 ? var_9 : var_8))))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min((((!(!1099511562240)))), var_0));
        var_13 = ((!((((var_7 | var_10) % var_0)))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_14 = ((~(min(var_4, 2955282575))));
        var_15 = var_2;

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_16 = ((!(arr_0 [i_1] [i_2 - 1])));

            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                var_17 = (min(((((-(arr_10 [i_2] [i_2]))))), (((arr_6 [i_1] [i_1] [i_1]) ? (!var_10) : var_6))));

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_18 = (max((!7692280224336979992), ((((min(var_2, var_0))) ? (!3) : var_9))));
                    var_19 = var_1;
                    var_20 ^= (((((((max(var_8, 0))) ? ((max(-7282345346629774164, 1339684720))) : ((1334148112950684593 ? 137438953472 : (arr_1 [i_2] [i_1])))))) ? (min((!var_2), 33553920)) : (min((min(112, -47180565)), ((-(arr_5 [i_3 + 1])))))));
                }
                var_21 *= ((!((!(arr_1 [1] [1])))));
            }
        }
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_22 = (((arr_15 [i_5]) ? (((arr_15 [i_5]) ? (arr_15 [i_5]) : (arr_15 [i_5]))) : 21385));
        var_23 = (min(var_23, (((!((min(16232, ((53040 ? (arr_13 [i_5] [i_5]) : var_9))))))))));
    }
    #pragma endscop
}
