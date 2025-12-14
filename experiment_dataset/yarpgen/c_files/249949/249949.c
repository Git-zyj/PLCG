/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((((((arr_4 [i_0] [i_0]) >= -17)) ? var_12 : 4864))) ? (((((max(-7242, -127))) - (arr_5 [i_0])))) : (((arr_1 [i_0]) ? ((min(1123555439, 32767))) : (var_3 % var_16)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] = (((arr_14 [14] [14] [i_2] [i_0] [13]) % 33));
                                var_17 = (max((((arr_1 [i_3 + 2]) - var_0)), var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_7;
    var_19 = 19;
    var_20 = (((((((max(968298719061667118, 862335278374724690))) ? (var_15 / var_3) : (((min(var_4, 65517))))))) ? ((((min(var_4, var_4))) ^ -var_5)) : 18));
    #pragma endscop
}
