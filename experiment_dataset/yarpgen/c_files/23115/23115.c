/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(+-13331839828813189216)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (arr_5 [i_1 + 2] [i_1 + 1]);
                var_20 = (-(-5114904244896362417 + var_15));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_0] = ((~(((!(!26907))))));
                            var_21 |= (max(25189, (max((!var_2), (max(5114904244896362400, 4278190080))))));
                            arr_11 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] = (max((min((arr_6 [i_0] [i_2]), (max(var_4, 8)))), (((-(arr_4 [i_0] [i_0]))))));
                            var_22 = ((arr_0 [i_1]) - (((max(12021, 12021)))));
                        }
                    }
                }
            }
        }
    }
    var_23 = 5114904244896362378;
    #pragma endscop
}
