/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-15 ? 4122335635 : 71));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = (((((!((min((arr_0 [i_0]), (arr_0 [i_2]))))))) + (min(71, (arr_6 [i_1] [i_1 - 1] [i_1] [i_1 + 1])))));
                    var_16 = -71;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_17 = (arr_3 [i_3]);
                        var_18 ^= (((((-9223372036854775807 - 1) % (arr_7 [i_2] [i_2] [i_2] [i_1 + 1]))) / (((min(var_5, -107))))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_19 = (min((min(((min((arr_3 [i_0]), var_7))), ((~(arr_8 [i_0] [i_1] [i_1] [i_4]))))), (arr_6 [i_0] [i_1 + 1] [i_1] [16])));
                        var_20 = (arr_2 [i_0]);
                        arr_12 [5] [i_1] [i_2] [3] [i_2] = (((((max((min((arr_10 [i_0] [i_0] [i_2] [8] [i_4]), -25)), (-81 <= 97))))) == (min(((min(-81, -13))), ((80 ? 1362377155877331795 : -17))))));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_15 [i_1] = ((min((arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]), (((arr_14 [i_0] [i_1 + 1] [i_2] [2]) ? var_3 : (arr_4 [i_1] [i_2] [i_5]))))));
                        var_21 = arr_0 [i_0];
                        var_22 = ((!((min((min((arr_3 [i_0]), (arr_2 [i_2]))), (arr_9 [i_1 - 1] [i_1] [i_5]))))));
                    }
                }
            }
        }
    }
    var_23 = ((-((var_4 ? (~var_4) : (var_7 - var_5)))));
    #pragma endscop
}
