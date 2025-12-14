/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (((1423879423 & (((arr_3 [i_2]) | (-9223372036854775807 - 1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (min((1 == 28791), (arr_7 [i_4] [i_1] [i_1] [i_0])));
                                var_20 = (max(var_20, (arr_8 [i_2] [i_2])));
                                arr_11 [i_0] [i_3] [i_1] [i_1] [i_0] [i_0] = ((+((((((arr_7 [i_1 - 1] [i_1 + 2] [i_1] [i_0]) * (arr_7 [i_0] [i_1] [i_1] [16])))) ? 127 : ((max(-39, -62)))))));
                                arr_12 [i_1] [i_1 + 2] [i_2] [i_2] [i_4 + 1] = ((-7941 ? (((arr_10 [i_4] [i_1] [i_1] [i_1] [i_1]) ? ((((703047385 < (arr_7 [i_1] [i_1] [i_1] [i_1]))))) : 15867329532600877801)) : -127));
                            }
                        }
                    }
                    arr_13 [i_1] [i_0] [2] = (arr_6 [i_0 + 1] [14] [i_2] [i_2]);
                }
            }
        }
    }
    var_21 = (min((((((min(7941, 1))) / ((var_7 ? var_12 : var_11))))), (((((-41 ? -124 : 28677))) + 1039839000021762028))));
    #pragma endscop
}
