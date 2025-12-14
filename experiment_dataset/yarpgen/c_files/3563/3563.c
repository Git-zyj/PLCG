/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-31595 ? -8853673836587878272 : (-32767 - 1)));
    var_11 = ((108 ? (((var_0 && -4165604571131863232) ? (var_4 + var_4) : var_9)) : 9586843142965982003));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (~8853673836587878267)));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_13 = (((((var_1 ? (arr_0 [i_0 - 2] [i_0 + 1]) : var_5))) ? (!1369454387) : ((((arr_4 [i_0 - 1] [i_0 + 1] [i_1]) && (arr_3 [i_0 - 2]))))));
                    var_14 = (min(var_14, var_3));
                }
                var_15 = (max(var_15, (((var_7 ? (~-8853673836587878252) : (arr_2 [i_0 - 2]))))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_16 = 8853673836587878233;
                                var_17 = (arr_1 [i_0 + 1]);
                                var_18 = (max(var_18, -8853673836587878253));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
