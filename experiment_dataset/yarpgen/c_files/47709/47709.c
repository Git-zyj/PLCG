/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((((!((((arr_0 [i_0] [i_1]) + (arr_8 [i_2] [i_1] [i_2])))))) ? ((((arr_5 [i_2] [i_2 - 1] [i_2 + 1]) ? (arr_8 [i_2] [i_2 + 2] [i_2]) : (arr_6 [i_2] [i_2 + 2] [22])))) : (max((((arr_1 [i_1]) ? 879445674 : 2270352402501216047)), ((((arr_0 [i_0] [6]) ^ (arr_8 [i_2] [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 = ((((max((arr_11 [i_0 - 1] [i_0 - 1]), (arr_11 [5] [i_1])))) + ((-(((arr_8 [i_2] [i_3] [i_2]) + (arr_13 [i_0 - 2] [i_1] [15] [i_3] [i_4] [i_3])))))));
                                arr_16 [3] [i_1] [i_1] [9] [14] [i_2] = ((+((max((arr_6 [i_2] [i_1] [i_2]), (arr_12 [i_2] [i_1] [i_2]))))));
                                var_17 = (((arr_4 [i_0] [i_1]) <= (((-3340873473831422874 + 9223372036854775807) << (((arr_15 [i_0 + 2]) - 5631233823788353259))))));
                            }
                        }
                    }
                    var_18 = (min(((!((((arr_9 [i_0]) ? 3415521616 : (arr_13 [i_0] [1] [i_0] [i_1] [i_1] [i_1])))))), (((((0 ? 3415521619 : 3740420998))) && 3625836781))));
                }
            }
        }
    }
    var_19 = ((-((var_0 << (var_10 + 21753)))));
    #pragma endscop
}
