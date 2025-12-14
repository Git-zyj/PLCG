/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~(arr_2 [i_0] [i_1] [i_0])));
                var_16 = ((65 ? 65 : (min((((arr_3 [i_1] [i_1]) + (arr_1 [i_0] [i_0]))), 88))));
                var_17 = ((!(((((arr_0 [i_1 + 3]) >= (arr_4 [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_18 = ((~((((max(2611, 65))) | 1))));
                arr_12 [i_2] [i_2] = ((((arr_9 [i_2]) * (((((arr_2 [i_3] [i_2] [i_2]) && (arr_6 [i_2] [i_2]))))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_19 = (arr_0 [i_2]);
                            arr_19 [i_2] [i_4] [i_4] [i_5] [i_4] [1] = 1076455635;
                        }
                    }
                }
                var_20 = (max(((min((arr_6 [i_2] [i_3]), (arr_9 [i_2])))), (arr_3 [i_2] [i_2])));
            }
        }
    }
    #pragma endscop
}
