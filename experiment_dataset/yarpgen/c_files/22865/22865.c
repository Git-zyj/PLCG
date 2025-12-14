/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((3555329876 ? 739637428 : -116)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((((!(arr_0 [i_0] [i_0])))) != (((arr_2 [i_2 - 1]) & (arr_11 [i_2 + 2] [i_2 + 2])))))));
                            var_21 = (min(var_21, 739637416));
                            var_22 *= (((arr_4 [i_2 + 1] [i_2 - 1] [i_2]) && (arr_1 [i_3])));
                        }
                    }
                }
                var_23 = (max(var_23, (((((!(arr_5 [i_0]))))))));
                var_24 = (max(var_24, ((!(arr_2 [i_0])))));
            }
        }
    }
    var_25 = var_13;
    var_26 = ((var_18 && (var_0 & var_9)));
    #pragma endscop
}
