/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_12, var_10));
    var_17 = (min(var_17, (((~(max(1, ((max(1, 1))))))))));
    var_18 = (max(var_18, ((((((max(var_13, var_6)))) ^ (min((min(8967199752764712848, 1)), 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_12 [i_3 + 2] [i_0] [i_0] = ((1 >> (65535 - 65519)));
                            var_19 = (arr_2 [i_1] [i_1]);
                            var_20 *= ((((min(-1, ((min(1, 1)))))) < (-8967199752764712848 + 8967199752764712837)));
                        }
                    }
                }
                var_21 = ((-(max((20038 / -8967199752764712853), (max(var_15, (arr_0 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
