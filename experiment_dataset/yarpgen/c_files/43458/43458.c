/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_11 ^= max((((((((!(arr_2 [i_1] [i_1]))))) <= (arr_0 [i_0])))), (min((min(12191, -4981986062225604630)), ((7433911882059002681 ? (arr_8 [i_1] [i_2] [i_3 + 1] [i_2]) : 2271612282990833473)))));
                                var_12 = 10596;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_17 [i_0] = (((((max(992, -16384))) ? var_5 : ((max((arr_5 [i_6] [i_5] [14] [i_0]), var_8))))) + ((min((arr_8 [i_5] [i_6 - 1] [i_6 - 1] [i_5]), (arr_6 [i_6 - 1] [i_1] [i_1] [i_5])))));
                            var_13 = (((-(((7091671880360912893 || (arr_10 [i_1] [i_1] [4])))))));
                            arr_18 [i_6] [7] [9] [i_6] = ((((min(((((arr_10 [i_1] [i_1] [i_1]) >= var_0))), (min((arr_16 [i_0] [i_0] [i_0]), 1751132329521654804))))) ? (max(4981986062225604638, (arr_6 [16] [i_5] [i_5] [i_0]))) : ((min(((((arr_14 [11] [i_1] [i_1] [i_1]) <= (arr_15 [i_0] [i_0] [i_0])))), (arr_14 [i_6 - 1] [i_6 - 2] [i_6] [i_6 + 2]))))));
                        }
                    }
                }
            }
        }
    }
    var_14 = ((var_8 ? 16 : var_5));
    var_15 = ((~27418) ? (((((max(var_1, var_3)) < var_6)))) : (min(-12192, (~-3809691208608012482))));
    var_16 = max((!26836), 17704257289845376691);
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    var_17 = ((4240534771741199442 ? -3394044109990182044 : ((~((12312019295754672262 ? 10596 : 16695611744187896816))))));
                    var_18 += max((((((min(1541985221580104108, (arr_19 [i_8])))) && (var_0 <= 13987368447414864352)))), -24455);
                }
            }
        }
    }
    #pragma endscop
}
