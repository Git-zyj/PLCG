/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 -= (((-118 <= 117) >= (!5)));
                var_15 = (min(var_15, (((((max((arr_3 [i_0]), -108)) > (arr_1 [i_0] [20])))))));
                arr_4 [i_0] = ((var_7 / (((var_3 >= (arr_2 [i_0 + 2]))))));
                var_16 = (min(105, 124));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [i_4] = (min(((-(arr_8 [i_3 - 2] [i_4 - 2]))), ((166 ? (arr_8 [i_3 - 1] [i_4 + 3]) : 4))));
                    arr_16 [i_4] [i_4] [i_4] = (arr_5 [i_2]);
                }
            }
        }
    }
    var_17 = (max(((12 ? -5 : 12)), var_13));
    var_18 = ((!((((var_3 < -16) * ((var_5 ? var_7 : -118)))))));
    var_19 = var_12;
    #pragma endscop
}
