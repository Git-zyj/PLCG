/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((max(var_4, var_6)) << (var_8 - 10443)))) ? ((max((var_13 == 2167136651), (2167136651 != var_17)))) : 1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min(-170489718, ((((((arr_2 [i_0]) ? var_4 : -170489718)) != ((max((arr_2 [i_0]), 1))))))));
        var_21 += (max(1, 170489719));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {
                    {
                        var_22 = ((829863586 != ((min(170489739, ((min(1, -109))))))));
                        arr_13 [i_3] [i_1] [i_2] [i_2] &= ((-(((((170489717 ? -1172545082 : 1))) ? (arr_11 [i_1] [i_1] [3] [i_1] [i_1] [14]) : (~55029)))));
                        var_23 = (max(((2147483647 ? -170489704 : 170489697)), (arr_12 [i_3 + 3] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2])));
                        arr_14 [i_3] [i_2] [i_0] [i_0] [i_0] = ((min(1344189548970992229, 1651645045)));
                    }
                }
            }
        }
    }
    var_24 = (var_5 + var_5);
    var_25 = (!1344189548970992229);
    #pragma endscop
}
