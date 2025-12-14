/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = 5777;
                var_14 *= var_6;
                arr_4 [i_0 + 2] [i_1 + 3] = (arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [4] [i_2] [1] |= min(511, ((max((arr_8 [i_2 + 1]), (arr_8 [i_2])))));
                            arr_10 [i_0] [i_1] [i_1] [17] [i_2] [i_3 + 1] = (((max(((0 ? 81 : 59759)), (arr_8 [i_0 + 1]))) << ((((((arr_2 [22]) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_1 [i_3] [i_1 + 3])))) ? ((52451 >> (13950 - 13920))) : (arr_2 [i_2])))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            arr_17 [i_4] = (((((~(arr_11 [i_4 - 1])))) ? (min(((((arr_5 [i_4] [i_5] [2]) * 3))), (8211968813198247278 - 3226326927545007763))) : (((arr_12 [i_5]) / (min(var_3, -3226326927545007788))))));
            arr_18 [i_4] [i_5] = (arr_8 [i_4]);
            var_15 ^= 63;
        }
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                {
                    arr_26 [i_4 + 1] [i_6] [i_7] = (~7);
                    var_16 = ((-(arr_6 [i_6 - 4] [i_6 - 2] [i_6 - 3])));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((((1 ? (arr_7 [i_9] [i_9 - 1] [i_9] [i_8] [i_6 - 3] [i_4]) : (arr_7 [i_9] [i_9] [i_9] [i_6 - 2] [i_6 - 2] [i_6]))) + 59734)))));
                                arr_31 [i_4] [i_7] [i_7] [i_6 - 3] [i_4] = ((((((min(var_3, (arr_13 [i_4 + 4] [i_4 + 3])))))) ? ((((var_6 ? var_11 : (arr_7 [i_4 + 3] [i_4] [i_4] [i_4] [i_4] [i_4]))) & (arr_0 [i_4 + 3] [i_6 - 2]))) : (arr_5 [i_4 + 3] [i_4 + 3] [2])));
                                arr_32 [i_9 + 3] = ((((((((arr_0 [i_6] [i_6]) | (arr_6 [i_4 + 1] [i_6] [i_7])))) >= 4897575342398766864)) ? (((arr_6 [i_7 + 1] [i_8 - 1] [i_9 + 2]) ? (arr_20 [i_9 + 2] [i_7 + 2]) : 65)) : -26));
                                arr_33 [i_4] = (min(((-(arr_16 [i_9 + 2]))), (arr_16 [i_4 + 1])));
                                arr_34 [i_6 + 1] [i_6 + 1] = (((((((((arr_8 [i_4]) | 249))) & ((var_7 ? 14484 : 100828511))))) & (((arr_7 [i_4 + 3] [i_6] [i_6] [i_7] [i_8 + 1] [i_9 + 3]) ? ((65535 ? var_1 : 3998483107811019190)) : 59758))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
