/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((21 ? (!var_4) : 23997));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_4] = ((((min((arr_4 [i_4] [i_3] [i_2]), (max((arr_11 [i_0] [i_0 + 3] [i_3]), -20768))))) ? (((((arr_13 [21] [6] [i_2] [i_4] [i_0]) != (((arr_7 [i_0]) ? 20769 : (arr_0 [i_0] [i_0]))))))) : (max((arr_15 [i_4] [i_2] [i_2] [i_0]), (arr_6 [i_0])))));
                                var_18 = (max(var_18, ((min(((((min(20746, (arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])))) ? (((arr_14 [i_4] [i_4] [i_2] [i_2] [i_2] [i_1] [i_0]) ? (arr_0 [i_2] [i_0]) : 7044661872377283146)) : (65535 * -20768))), (((((var_13 ? (arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0 + 1] [i_0]) : (arr_7 [i_2])))) ? var_0 : -8696613157011849748)))))));
                                var_19 = (min(var_19, 242));
                            }
                        }
                    }
                }
                var_20 = (max(var_20, ((min(1, (((((min((arr_13 [i_0] [i_0 + 3] [i_0] [i_0] [6]), (arr_5 [i_0] [i_0] [i_0]))))) - (((arr_10 [6] [i_0] [18] [18] [i_1] [20]) - var_4)))))))));
            }
        }
    }
    #pragma endscop
}
