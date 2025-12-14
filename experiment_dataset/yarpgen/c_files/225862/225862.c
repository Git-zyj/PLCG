/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = 575986358;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (((((-((-6316325679040277521 ? var_5 : 7917517241400411257))))) ? (((max(var_11, 18446744073709551615)) * ((var_0 ? 32767 : (arr_7 [i_0] [i_1] [i_0] [i_1]))))) : (((max((arr_6 [i_0] [i_0] [i_0 + 2]), (arr_6 [i_0 - 1] [1] [i_0 + 2])))))));
                    arr_10 [18] [18] [i_1] [i_2] = ((23 ? 5167 : (-32767 - 1)));
                }
            }
        }
    }
    var_17 &= ((-7597219695540593459 ? var_1 : 8630322255831853883));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 17;i_5 += 1)
            {
                {
                    arr_18 [i_5 - 3] [i_4] [i_3] = (max(-6412747393985448670, (arr_0 [i_3] [i_3])));
                    arr_19 [i_3] [i_3] [11] = (((5628726093125383823 ? (((arr_17 [i_3] [i_3] [i_5]) - -221044128490867817)) : var_11)));
                }
            }
        }
    }
    #pragma endscop
}
