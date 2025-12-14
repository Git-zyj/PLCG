/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_4, var_9));
    var_12 = (min(var_12, ((((max(var_9, var_0)) * (max(var_4, (max(var_0, var_1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 = (((arr_8 [i_2] [i_2] [i_1] [i_2 + 1]) == 133));
                            arr_9 [i_0] [i_1] [i_2] [i_3] = (arr_0 [i_0] [i_0]);
                            var_14 = (max(var_14, ((max(((min((((arr_5 [i_0] [i_2] [i_2]) ? (arr_2 [i_0] [i_1] [i_3]) : (arr_8 [4] [4] [i_2] [i_0]))), (arr_3 [i_2 - 1])))), (max(((min((arr_3 [i_3]), (arr_4 [2] [i_1] [5])))), (arr_1 [i_0]))))))));
                            var_15 ^= max(((((arr_2 [i_2] [i_1] [i_2]) && 56072))), (arr_8 [i_0] [i_1] [i_3] [8]));
                            var_16 = (max(var_16, ((min((min((arr_6 [i_2 - 1] [i_2 - 2] [i_3]), ((((arr_8 [i_0] [2] [i_2] [i_2]) ? (arr_8 [4] [1] [i_3] [i_3]) : (arr_8 [i_3] [i_2] [i_2] [i_0])))))), ((max((arr_4 [i_0] [i_2 - 1] [i_2]), (arr_5 [i_3] [i_0] [i_2 - 2])))))))));
                        }
                    }
                }
                var_17 = arr_2 [i_0] [i_1] [i_1];
                arr_10 [i_0] [i_0] [i_1] = (arr_4 [i_1] [1] [i_0]);
            }
        }
    }
    #pragma endscop
}
