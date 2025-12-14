/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (arr_0 [i_2]);
                    var_11 = 208;
                    var_12 = -var_3;
                }
                arr_8 [13] [i_0] = ((((((arr_4 [i_0] [i_0]) ? (arr_1 [i_0] [i_1]) : 1))) || (((((min(var_0, 1))) ? ((5533546263322547336 ? (arr_3 [i_1]) : (arr_1 [i_1] [i_0]))) : 6353473672618917200)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            {
                var_13 = (arr_10 [i_3]);
                var_14 = ((((min(65347, (((var_0 || (arr_9 [i_3] [3]))))))) < -106));
                arr_14 [i_3] [i_4] [i_3] = (max((((((arr_11 [i_4 + 1]) <= (arr_13 [i_4 + 1]))))), (6353473672618917222 ^ 14388200400463553762)));
                var_15 = ((((arr_9 [i_4] [i_3]) < ((1 ? -28153 : var_2)))));
            }
        }
    }
    #pragma endscop
}
