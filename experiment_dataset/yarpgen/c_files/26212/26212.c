/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((-(((((arr_3 [i_1]) ? (arr_1 [i_0]) : (arr_5 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [13] [i_0] = 0;
                            var_18 = 1;
                            var_19 = ((((max((arr_5 [i_0] [i_2]), (~var_7)))) ? ((min(51613, var_13))) : 38));
                        }
                    }
                }
            }
        }
    }
    var_20 = (((~((var_16 ? var_9 : 0)))));
    var_21 = ((!(((((1 ? 1 : 1))) && -var_10))));
    #pragma endscop
}
