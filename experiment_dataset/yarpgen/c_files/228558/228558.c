/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_0 ? var_2 : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = (((-20331 ? 3002772297 : 1292194979)));
                                var_15 = (((min((-24231 - 4633654217347573688), (4294967294 || var_12))) > var_4));
                                var_16 = (max(32755, ((min((arr_10 [i_0] [i_1] [i_1] [i_4 + 2] [i_4 + 1] [9] [i_4 + 2]), (arr_10 [i_0] [i_1] [i_2] [i_4 + 1] [i_4] [i_1] [i_0]))))));
                                var_17 = (((~-23990) > 12932));
                            }
                        }
                    }
                    var_18 -= var_3;
                    var_19 = (max(var_5, (min(4294967273, (var_2 && var_11)))));
                    var_20 = ((+((((((min((arr_7 [i_0] [i_0] [i_1] [i_2]), var_11))) + 2147483647)) << (((-1698404523 + 1698404550) - 27))))));
                    var_21 = (min((((((var_7 ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : 311382768))) ? ((((arr_1 [i_2]) - (arr_1 [i_2])))) : var_8)), (var_0 + var_1)));
                }
            }
        }
    }
    #pragma endscop
}
