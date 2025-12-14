/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = ((var_8 ? (min((-127 - 1), ((3922496102 ? var_7 : 3)))) : 2537172324680833179));
    var_15 = (min((max(var_11, ((min(var_1, (-127 - 1)))))), var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 *= (((arr_4 [7] [7]) ? ((65528 ? 8770151346410783458 : -8770151346410783459)) : (-127 - 1)));
                                arr_13 [i_0] [i_0] [i_0] [i_0] = var_8;
                                var_17 = (((arr_12 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4]) & (((arr_9 [i_1] [i_2]) ? (arr_2 [i_0] [i_0] [i_0]) : 11803782940969677876))));
                                var_18 = (max(var_18, ((min((((arr_5 [i_0] [i_1]) ? (arr_5 [i_0] [i_4]) : (arr_5 [i_0] [i_0]))), (((arr_5 [i_0] [i_1]) ? (((max((arr_6 [i_0] [i_1] [i_3]), var_4)))) : 1824778866917885198)))))));
                            }
                        }
                    }
                    var_19 = ((~(max(0, 4294967292))));
                }
            }
        }
    }
    var_20 = var_5;
    #pragma endscop
}
