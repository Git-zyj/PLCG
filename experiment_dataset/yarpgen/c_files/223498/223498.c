/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 60;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (min(var_4, var_10));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 22;i_4 += 1)
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3 + 2] [i_4] = (((((-((13830958989497724210 ? var_7 : 4615785084211827396))))) ? (41647 < -11820) : (((((49 ? (arr_11 [i_0] [i_1] [i_0] [i_3 + 1] [i_4]) : (arr_3 [i_2] [i_3] [i_4 - 1])))) ? ((max((arr_5 [5] [i_0]), (arr_1 [4] [17])))) : 0))));
                                arr_14 [i_1] [i_2] [i_3] [i_0] = ((((((arr_11 [i_0] [i_1] [i_3 - 1] [14] [i_4]) / (arr_11 [i_4] [i_1] [i_3 + 3] [i_3 + 3] [19])))) ? (arr_5 [i_0] [i_0]) : ((var_4 - (arr_9 [i_1] [i_1 + 2] [i_3 - 1] [i_3] [i_3])))));
                                var_18 = ((((min((~var_12), (759413345 && var_3)))) ? (((((var_4 ? (arr_3 [i_0] [i_1] [22]) : (arr_0 [i_2])))) ? var_2 : 3138196506)) : (3714395349 != 49442)));
                                var_19 = ((((max((arr_7 [i_3 + 1] [i_3]), 44132))) && ((max((arr_7 [i_3 - 2] [i_3]), (arr_3 [i_1 + 1] [i_3 + 1] [i_4 - 2]))))));
                            }
                            var_20 = (max((arr_12 [i_3] [i_1 - 2] [i_2] [i_3] [i_1] [9]), (min((arr_5 [i_1] [i_0]), (((arr_8 [i_0] [i_1] [i_2] [i_3]) ? (arr_3 [i_0] [i_2] [i_3]) : (arr_9 [1] [i_0 - 2] [i_1 + 2] [i_2] [i_3])))))));
                        }
                    }
                }
                arr_15 [i_0] = ((((min(-3128, var_6))) ? ((((min(65535, var_4))))) : 3942965043));
                arr_16 [i_0] = (arr_9 [i_0] [i_0] [i_0] [21] [i_0]);
            }
        }
    }
    var_21 = (min((min(var_10, ((var_11 ? var_3 : -1807521828)))), 255));
    #pragma endscop
}
