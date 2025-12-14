/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (((((((15 < (arr_0 [i_0]))))) / ((var_0 ? (arr_0 [i_0]) : (arr_1 [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = (arr_1 [17]);
                                var_17 += (arr_9 [12] [i_1] [i_2] [i_1] [i_3]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_18 = (max((((-104 ? (arr_12 [i_5] [i_5]) : (arr_17 [i_0] [i_1] [i_5] [i_6])))), (max(3579846136, ((-14063 ? (arr_3 [i_5]) : 958920666127109406))))));
                            var_19 = (max(var_19, (((((arr_13 [i_0] [i_0]) ? (arr_13 [i_0] [i_0]) : (arr_7 [i_0] [i_5] [i_5])))))));
                        }
                    }
                }
            }
        }
    }
    var_20 *= (var_13 * 958920666127109406);
    var_21 *= var_2;
    var_22 = ((((((((var_8 ? var_7 : 4058973621172437027))) && (((var_9 ? 958920666127109406 : var_12)))))) - var_1));
    #pragma endscop
}
