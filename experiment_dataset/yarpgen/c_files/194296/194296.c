/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1114391845;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (!var_17);
                                arr_13 [i_0] [i_0] &= ((~(((max((arr_10 [i_1] [i_1] [i_1]), var_14)) << (((arr_6 [i_0] [i_2]) - 47))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_2] |= ((((-57 | (~3295535817)))) ? ((((min(var_4, (arr_0 [i_0] [i_2])))) ? (((arr_4 [i_1]) + 0)) : (arr_1 [i_2] [i_1]))) : (((((((arr_6 [i_0] [i_2]) ? (arr_1 [i_0] [i_1]) : 2547884546007211224))) ? ((((arr_4 [i_1]) < (arr_8 [i_2] [i_2] [i_2] [i_0])))) : (((!(arr_2 [i_0] [i_1] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
