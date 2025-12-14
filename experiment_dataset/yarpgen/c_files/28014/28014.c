/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 += ((((~(arr_3 [i_2 + 4] [i_2] [i_2 - 4])))) ? ((~(arr_5 [i_2 + 4] [i_2] [i_2 + 3]))) : (arr_5 [i_2 + 1] [i_2] [i_2 + 1]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = (((((((arr_5 [i_0] [i_1] [i_2]) / var_3))) ? (arr_9 [i_2] [i_2 + 4] [i_4 + 3] [i_4 - 2]) : (((var_13 >> (var_6 - 211)))))) >> (!8804));
                                arr_13 [i_4] [i_3] [i_3] [i_2] [i_3] [i_1] [i_0] = ((((((4953600793063386251 & 0) - ((min((arr_4 [i_2]), (arr_12 [i_4] [i_4] [i_4] [i_4]))))))) ? (((~(((arr_12 [i_0] [i_1] [i_3] [i_4]) / var_10))))) : ((4953600793063386252 ? -4953600793063386260 : 2073))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_20 = (((((((max(-103, -143746178))) && var_0))) & (arr_1 [i_5])));

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_19 [i_5] [i_5] [i_6] = (((var_12 ? (arr_1 [i_5]) : ((4294967289 ? var_17 : 11432236663961509669)))) * (((33 ? -8796 : 0))));
            arr_20 [i_5] [i_5] [i_6] = (((((!(arr_8 [i_5] [i_6] [i_6])) ? (arr_15 [i_6]) : (((33 ? var_0 : 8799)))))));
        }
        arr_21 [i_5] = (max(((~(arr_9 [i_5] [i_5] [i_5] [i_5]))), (arr_9 [i_5] [i_5] [i_5] [i_5])));
    }
    #pragma endscop
}
