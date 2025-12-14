/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = 970413792;
                            var_18 = (max(3324553497, 3));
                            var_19 = (min(var_19, -var_7));
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_1] [i_2] = ((255 && ((((arr_6 [i_2] [i_3 - 1] [i_3 - 1] [i_2]) ? (arr_6 [i_2] [i_3] [i_3 - 1] [i_2]) : (arr_6 [i_2] [i_3] [i_3 - 1] [i_2]))))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] = ((-(arr_11 [i_0] [i_0] [i_0] [i_1 - 2])));
                var_20 = (max(var_20, var_13));
            }
        }
    }
    var_21 = (min(var_21, (var_3 ^ var_7)));
    #pragma endscop
}
