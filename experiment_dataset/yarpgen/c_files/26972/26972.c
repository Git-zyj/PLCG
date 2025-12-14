/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (((arr_5 [i_0] [i_0 - 1]) != ((min((arr_1 [i_0 - 1] [4]), (arr_1 [i_0 - 1] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((168 ? (arr_5 [i_2] [i_2]) : (((min(var_10, var_15)) + ((min(var_3, 171))))))))));
                            var_18 = (~84);
                            arr_11 [i_0] [i_1] = ((var_14 ? var_10 : ((min(32767, (arr_1 [6] [i_0 + 1]))))));
                        }
                    }
                }
                var_19 = (max(var_19, (min(6820651466054473757, 1))));
            }
        }
    }
    var_20 = (min(var_20, var_6));
    #pragma endscop
}
