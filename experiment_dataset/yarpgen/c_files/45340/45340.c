/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] [i_0] = ((((-16143 ? 1959124177 : (arr_3 [i_1] [i_4]))) > (((((arr_1 [i_2 + 1] [i_1]) && (arr_1 [i_0] [i_1])))))));
                                var_10 = (((((((((arr_9 [i_1] [i_2] [i_4]) ? 5528 : (arr_11 [i_0] [i_2] [i_3] [18])))) / ((31 ? -3800320968881505021 : var_5))))) != 3358456014031373791));
                            }
                        }
                    }
                }
                var_11 += (min(((min(((((arr_5 [i_0] [5] [i_1]) < 8061191638447525470))), ((~(arr_14 [i_0] [i_0] [i_1] [1] [i_1])))))), (min(((1085154733 ? 5391479945390096739 : 6720329157836842144)), ((min(1085154733, (arr_10 [i_0] [i_0] [i_0] [i_1]))))))));
                var_12 = (min(((((arr_7 [i_0] [i_1]) <= (min(1085154724, -1085154746))))), ((((min(1085154722, -1))) ? (((448189758 ? 538306615 : 2037427924))) : (arr_8 [i_0] [i_1] [i_1] [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_13 -= (arr_4 [13]);
                                var_14 = -1;
                                var_15 = (min(((min(68, 2403))), ((0 ? ((min((arr_12 [i_5] [i_6] [i_7] [4]), 28635))) : (arr_24 [i_6] [i_7] [i_8])))));
                            }
                        }
                    }
                }
                var_16 = (min(var_16, (((!((min(5063068479445711975, (arr_11 [i_5] [i_5 + 1] [i_5 - 1] [i_5])))))))));
            }
        }
    }
    #pragma endscop
}
