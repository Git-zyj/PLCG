/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((((var_2 ? 100 : 288230376151711744))) ? (var_9 | 1) : (((7746 ? -7746 : 134217472))))), var_2));
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_11 [5] [i_1] [i_0] = -1363;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 -= (((((((((arr_1 [i_0] [i_1]) ? var_2 : (arr_2 [i_3])))) ? ((7733 ? 2994100419 : -1363)) : (arr_16 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0])))) ? (arr_0 [i_2]) : ((max(-7746, (arr_3 [i_4 + 2]))))));
                                var_14 += ((((max((max(5624044131315153726, var_1)), (var_6 & 4433230883192832)))) ? (((arr_6 [i_0] [i_0]) ? (arr_6 [i_0 + 1] [i_0 + 2]) : ((max(134217479, 1363))))) : (((-26130 ? ((((!(arr_14 [i_0] [i_1] [i_2] [i_2] [i_0] [6]))))) : (arr_2 [i_0 + 2]))))));
                                var_15 = 2062562987;
                            }
                        }
                    }
                    var_16 = ((+((max((arr_5 [i_0]), (arr_5 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_17 += (((arr_2 [i_0 + 2]) ^ (arr_2 [i_0 - 1])));
                                var_18 ^= ((((!(arr_9 [16] [i_1]))) ? ((max((arr_9 [1] [i_1]), (arr_9 [18] [i_6])))) : (~65535)));
                                var_19 = max((((0 ? 1391 : 1357))), (((arr_10 [i_0 + 2] [i_0] [i_0]) ? (arr_10 [i_0 - 1] [i_0] [i_0]) : (arr_10 [i_0 - 1] [i_0] [i_0]))));
                                var_20 = (min(0, ((((arr_12 [i_6]) ? ((max(26130, 1))) : (~134217480))))));
                                var_21 = (min(var_21, 65517));
                            }
                        }
                    }
                    arr_23 [i_0] [i_1] [i_1] [i_2] = (~3);
                }
            }
        }
    }
    var_22 += (max((max((var_10 & 65535), ((var_10 ? -1 : var_0)))), ((((4433230883192832 ? -1363 : var_3))))));
    var_23 = (max(-4433230883192833, var_1));
    #pragma endscop
}
