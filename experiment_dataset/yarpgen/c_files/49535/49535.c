/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min((min(var_13, var_10)), (min(var_8, var_5)))) ^ (min((max(var_10, var_3)), (var_14 == 17605)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((((min(1, -64)))) - (max((arr_4 [i_0] [i_0] [i_1 - 3]), (arr_1 [i_0]))))) - (((((max(74, (arr_3 [i_0])))) - ((min((arr_4 [i_0] [i_0] [i_1]), var_9))))))));
                arr_6 [i_0] [i_1 - 3] = ((((((((min(var_15, (arr_3 [i_0]))))) ^ (((arr_2 [i_0]) & var_6))))) == (min((var_3 == 64), (max(4031986204, 3221970558458362878))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 -= (max((((max(var_9, var_10)) >= (((((arr_2 [i_0]) > var_5)))))), (((var_9 != var_11) || ((max(94, 8388604)))))));
                            var_18 = (min(var_18, ((min(((((((arr_9 [i_0] [i_1] [i_3]) || var_2)) && (((arr_9 [i_0] [i_1] [i_0]) && 2278316749))))), (min(((((arr_11 [i_0] [i_1] [i_0] [i_2] [i_3]) & (arr_4 [i_0] [i_2 - 1] [i_3])))), (((arr_7 [i_0] [i_0] [i_2 + 2]) / (arr_0 [i_2] [i_2]))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_19 = ((((((((((arr_9 [i_0] [i_1] [i_0]) * -32761))) && (-6076534710846547636 - var_1))))) < (max(((((arr_9 [i_0] [i_1] [i_5]) == (arr_2 [i_0])))), (min(var_10, -72))))));
                            var_20 = (min(var_20, ((min((max((var_7 + var_7), (min((arr_1 [i_5]), (arr_9 [i_4] [i_1] [i_4]))))), (((((((arr_4 [i_0] [i_1] [i_0]) << (((arr_3 [i_1]) - 193))))) && ((max((arr_2 [i_5]), 32)))))))))));
                        }
                    }
                }
            }
        }
    }
    var_21 = (max((((((max(var_12, var_12))) * (max(var_6, var_9))))), (max((var_1 % var_15), (1 / -75)))));
    #pragma endscop
}
