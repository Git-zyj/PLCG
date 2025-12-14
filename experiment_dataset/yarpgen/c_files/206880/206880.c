/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1 - 1] [i_0] [i_0] = (((arr_3 [2] [i_1]) != ((-15172463600249325465 ? var_9 : (max(var_9, (arr_5 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = (((arr_3 [i_2] [i_2]) >= ((((((max(208, (arr_3 [0] [i_3])))) > (max(202, (arr_8 [i_0] [i_0] [i_0] [i_0])))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((arr_3 [i_3 - 1] [i_1 - 1]) | (arr_3 [i_3 - 1] [i_1 - 1]))) & (arr_3 [i_3 - 1] [i_1 - 2])));
                        }
                    }
                }
            }
        }
    }
    var_21 = 7;
    var_22 = 17060591061402783180;
    #pragma endscop
}
