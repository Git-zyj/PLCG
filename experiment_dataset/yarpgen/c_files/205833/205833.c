/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((-1401218539372534198 ? ((((((arr_0 [i_1] [i_1]) ? 231 : 2097136)) >= (arr_4 [i_0])))) : ((~((max(20, 1)))))));
                var_21 = (min(var_21, -22));
                var_22 ^= (((((!(!19)))) != (((max((arr_0 [1] [1]), 1)) >> (((max(var_5, (arr_4 [i_1]))) - 5873088564983482953))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_23 &= max(1, 4);
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] [i_3] [i_5] [i_5] [i_4 + 1] = var_17;
                            arr_18 [i_3] [i_3] [8] = ((7 ? (arr_9 [i_5] [i_4 - 2] [12]) : ((((max(9913559066555346372, 8533185007154205244)))))));
                            var_24 -= ((((var_6 ? (arr_13 [i_2] [i_3] [i_4 - 2] [i_5]) : ((230 ^ (arr_13 [i_2] [i_3] [i_2] [i_5]))))) >> (((arr_14 [i_3] [i_3]) - 250))));
                            arr_19 [19] [i_3] [1] [i_5] [19] [i_5] = 36;
                        }
                    }
                }
                arr_20 [12] &= 20;
            }
        }
    }
    #pragma endscop
}
