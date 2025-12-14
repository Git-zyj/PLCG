/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((((((max(var_0, 23694))) ? ((var_0 ? 4348972511703629485 : 41819)) : var_12))) ? ((((!41841) >> (((~var_9) + 186))))) : ((-var_1 ? ((var_10 ? var_3 : var_12)) : (!var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [7] [i_3] [8] = ((~(arr_4 [i_1])));
                                var_16 = (max(var_16, (arr_11 [i_1])));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_17 = ((((((41848 ? (arr_9 [8] [i_1] [i_5]) : var_14)) != (((4088615266 ? 23709 : 23716))))) ? 5306099949904114309 : (arr_22 [i_0] [i_1] [i_5] [i_6] [i_7])));
                                var_18 ^= (((-(arr_9 [i_0] [i_1] [i_5]))));
                                var_19 += (arr_2 [i_0] [1]);
                                var_20 = ((((min((min(38896, (arr_7 [19] [i_1] [18]))), (-10591 & var_8)))) ? 3879759103 : (((((~(arr_13 [i_0] [i_1] [12] [i_6]))) >> (((max((arr_9 [i_0] [i_6] [i_1]), (arr_23 [i_7] [i_6] [i_5] [i_1] [i_0] [i_0]))) - 1550571551)))))));
                                var_21 = ((~(((((var_8 ? var_10 : var_5))) ? (arr_8 [i_5] [i_1] [14]) : ((~(arr_9 [i_0] [i_1] [i_1])))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_22 = (((~(min(var_5, (arr_4 [i_8]))))));
        var_23 &= (var_9 >= 3879759082);
        arr_28 [i_8] = ((((((arr_25 [i_8]) ? (arr_25 [i_8]) : var_5))) ? ((((!(!var_8))))) : (((((3879759083 ? var_14 : 41822))) ? var_8 : 423905414))));
        var_24 = (23729 != 38879);
    }
    #pragma endscop
}
