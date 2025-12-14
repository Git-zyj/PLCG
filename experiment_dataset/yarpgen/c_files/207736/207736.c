/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 4503599627370496;
    var_13 = ((((max(var_4, var_5))) & (min(((max(var_3, 137))), var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (((!var_0) ? ((((var_2 - 137) ? (var_4 >= 3362738512) : ((var_8 ? var_5 : (arr_1 [i_0])))))) : (min(3362738518, -4922747103951443232))));
                arr_6 [19] = ((!(((36495 ? (932228783 > var_4) : ((3362738512 ? (arr_2 [3]) : 0)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = (~(max((!13539), ((var_2 ? -50 : var_9)))));
                                var_16 *= ((((((arr_1 [i_4]) ? ((49 ? 222 : var_5)) : -var_4))) * (min(6476827280363190489, (arr_5 [i_3] [i_4 - 1] [i_4 - 1])))));
                                arr_16 [i_0] = 4294967295;
                            }
                        }
                    }
                }
                arr_17 [i_1] = (arr_0 [i_0] [i_0]);
                arr_18 [i_1] = ((!((max(var_3, 53)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_17 = (min((arr_4 [i_5 - 1] [i_8 + 1]), (1 >= 44)));
                                var_18 &= (min(var_5, ((119 ? (2813732166 | var_5) : var_10))));
                            }
                        }
                    }
                    arr_35 [i_5] [15] [i_7] [i_7] = (((max(0, 17964058882918086475)) + (arr_25 [i_5 - 1] [i_5 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
