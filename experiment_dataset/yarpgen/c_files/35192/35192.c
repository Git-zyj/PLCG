/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_12 = (min(var_12, ((((((3171305588 ? (arr_0 [i_0]) : (max(1, 7043094837362839161))))) ? (min(((var_0 ? 11091577077904630403 : var_0)), (arr_2 [2] [i_0]))) : (arr_1 [i_0 - 3]))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 = (min(var_13, (((!(((arr_1 [i_0 - 1]) > (!var_4))))))));
            var_14 += 7;
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_15 += var_8;
            var_16 += (arr_7 [i_0 - 2] [i_2]);
            var_17 = (arr_4 [i_0 + 1] [i_2]);
            var_18 += (max(var_6, (((max(var_2, (arr_0 [i_0 + 1])))))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_19 += var_11;
                        var_20 = (min(var_20, (((((arr_0 [i_0 - 1]) ? (!var_2) : (max(176, (-9223372036854775807 - 1)))))))));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_21 = (min(var_21, (((((arr_6 [i_0 + 2]) ? (arr_6 [i_0 - 2]) : (arr_6 [15])))))));
            var_22 = (min(var_22, (((16963 ? ((var_6 ? (((1715829513 % (arr_6 [i_5])))) : var_5)) : (((((arr_8 [i_0] [i_0 + 1]) >= (arr_13 [16] [i_5] [16]))))))))));
        }
        var_23 += ((((min((arr_7 [i_0 + 2] [i_0 - 3]), (arr_7 [i_0 - 3] [i_0])))) ? var_10 : ((32749 ? (arr_7 [i_0 - 2] [i_0]) : var_6))));
        var_24 += ((((((536870911 ^ (arr_2 [17] [i_0])))) && 1)));
    }
    var_25 = (min(var_25, (min(var_6, (((var_0 >= ((var_0 ? var_7 : var_0)))))))));
    var_26 += ((var_6 ? var_3 : (min(var_2, (min(var_2, 1736543415))))));
    #pragma endscop
}
