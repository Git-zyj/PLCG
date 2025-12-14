/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((var_3 <= (min(3905923958, var_6))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_18 = (arr_0 [i_0 - 1]);

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_19 = (arr_3 [17]);
            var_20 = (((((((min(var_9, 22816))) ? (((2043852360 != (-32767 - 1)))) : ((-(arr_2 [i_0] [i_0])))))) ? (((arr_0 [i_1 + 1]) ? ((max((arr_5 [i_0]), 42731))) : ((-1722474327 - (arr_0 [i_0]))))) : (arr_4 [i_1 + 1] [i_0 - 1] [6])));
        }
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] [i_4] = (((arr_9 [i_2 - 2]) >> (4038 - 4023)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_21 += ((3408751745577001228 < (((3114550540 ? 389043338 : 42711)))));
                                var_22 = (arr_10 [i_5] [i_4]);
                                arr_19 [i_2] [i_2] [4] [i_2] [0] |= 3879785621;
                                var_23 = ((1241519835 ? (arr_7 [i_2 - 1]) : ((max(-50, (arr_12 [i_6] [i_6 + 2] [i_6 + 2] [i_2 - 2]))))));
                            }
                        }
                    }
                    var_24 = -var_5;
                    arr_20 [i_2] [i_3] [i_4] [i_4] = (var_15 ? (arr_10 [i_4] [i_4]) : (max(389043337, ((((arr_0 [i_4]) + (arr_18 [i_2] [i_2 - 2] [i_2] [i_2] [i_2 - 2])))))));
                }
            }
        }
        var_25 = max(52, (min(((max(var_1, var_11))), 0)));
        arr_21 [15] = (((!956583431) ? ((((!4036) || 42711))) : (1 || -99)));
    }
    #pragma endscop
}
