/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 += (((arr_0 [11]) ? (((((max(8487736148849828340, 1))) ? (((arr_3 [i_2 - 1] [i_0]) ? (arr_5 [i_0] [5] [i_0] [5]) : 1)) : (arr_7 [i_0] [i_0])))) : ((((max((arr_5 [i_0] [11] [i_0 - 1] [i_2]), 8026197425354082797))) ? (max((arr_1 [i_1]), (arr_4 [i_0] [i_1 - 1] [i_2 + 1]))) : (arr_7 [i_0 + 1] [i_1 + 1])))));
                    var_15 += (max((max(((max(249, 1))), (max((arr_0 [i_1 - 1]), (arr_7 [i_2] [i_0]))))), 255));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            {
                arr_12 [i_4] [i_3] = (((((((arr_8 [i_3]) ^ 125)) == (max((arr_8 [i_3 - 1]), (arr_11 [18] [i_4]))))) ? (max(((max((arr_10 [i_3] [i_3] [3]), (arr_11 [i_3 + 1] [i_3])))), ((249 ? 1 : (arr_10 [7] [i_4] [i_4]))))) : ((((arr_10 [i_3] [i_3 + 2] [i_3 + 1]) == ((max(239, (arr_11 [i_3 - 1] [i_4])))))))));
                arr_13 [18] [i_4] [i_3] = (arr_9 [i_3]);
            }
        }
    }
    var_16 = (max((max(var_13, 3265295284)), ((((((max(var_7, 32)))) < var_0)))));
    #pragma endscop
}
