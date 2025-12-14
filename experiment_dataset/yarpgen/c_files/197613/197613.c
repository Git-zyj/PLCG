/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((((((arr_1 [14] [i_2 - 3]) ? 63974 : 2164760357))) ? (max((arr_8 [18] [i_0 - 2] [i_1 + 3] [i_2 - 1]), ((29503 << (((arr_6 [i_0]) - 23)))))) : -29488))));
                            arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] = (max(((-((var_1 ? var_1 : 1018861135)))), ((min((((var_6 > (arr_3 [i_2])))), (max(23, 197)))))));
                            arr_12 [9] [i_1 - 2] [i_2 + 2] [i_0] = ((~(arr_9 [i_1] [7] [i_1 - 4] [i_1] [i_1])));
                            var_16 = (max(var_16, ((((arr_5 [i_0 - 1]) ? -1018861125 : (((arr_5 [i_0 + 1]) + (arr_5 [i_0 + 1]))))))));
                        }
                    }
                }
                var_17 = (min(var_17, ((((max(-29488, ((max((arr_8 [12] [i_0] [i_1] [i_1 + 1]), var_0))))) <= ((((((arr_2 [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1 - 3]) : (arr_3 [i_0])))) ? (arr_8 [4] [i_1] [1] [i_0]) : ((((arr_6 [i_0]) || (arr_3 [i_0])))))))))));
                var_18 |= (((arr_3 [0]) >= -1018861117));
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_19 = ((~(max(1018861108, 0))));
                                var_20 = (((arr_8 [i_0] [i_4 + 1] [i_5] [i_6 + 3]) ? ((~(arr_16 [i_0] [i_1 - 4]))) : (((arr_16 [i_0] [i_4 + 1]) ? (arr_18 [i_0 + 1] [i_0] [7] [i_5 + 4]) : 255))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
