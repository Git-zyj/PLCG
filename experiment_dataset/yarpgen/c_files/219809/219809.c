/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (max(((1701971705301104834 ? (((arr_4 [i_0] [i_1]) / 12558151385597238498)) : 4876133542000004893)), ((((((1701971705301104834 ? 81 : 5888592688112313118))) && 4876133542000004893)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 = (arr_7 [i_0] [i_1] [i_2] [i_2]);
                                var_22 = (max(var_22, (arr_12 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_4])));
                                var_23 = ((var_14 ? (min((arr_1 [i_0] [i_1]), (max(12558151385597238471, 16744772368408446781)))) : (((((5518860667686788875 ? 4876133542000004893 : 0))) ? (arr_7 [i_0] [i_1 + 3] [i_2] [i_3]) : (arr_4 [i_4] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_8, var_14));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    arr_21 [i_7] &= max(var_2, (((arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? 1 : 5888592688112313128)));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_24 [i_5] [i_8] [i_5] [i_5] = (0 % 8);
                        var_25 = ((-(arr_8 [i_7] [i_7] [i_7] [i_7] [i_6 - 2] [i_6 - 1])));
                        var_26 = ((-9223372036854775789 ? 5518860667686788883 : 0));
                    }
                    var_27 = (arr_0 [i_5]);
                    var_28 = (arr_5 [i_6] [i_5] [i_7] [0]);
                }
            }
        }
    }
    var_29 = var_2;
    var_30 &= max(var_3, (min(var_15, var_7)));
    #pragma endscop
}
