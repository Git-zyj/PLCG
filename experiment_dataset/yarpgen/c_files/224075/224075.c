/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((!29), var_0));
    var_12 = ((0 - ((max(22749, var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((+((min((arr_8 [i_2] [i_3 - 1] [11] [i_2]), (arr_8 [i_2] [i_2] [i_2] [i_2]))))));
                            var_13 = 1;
                            var_14 = (((~(arr_2 [i_0] [i_0] [i_0]))));
                        }
                    }
                }
                var_15 = (((~(arr_9 [1] [i_1] [i_1] [i_0]))));
                var_16 = ((((((16 ? 1 : 520093696)))) / (min(((520093669 ? (arr_0 [i_0]) : 0)), (min((arr_5 [i_0] [11] [1] [11]), var_6))))));
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
