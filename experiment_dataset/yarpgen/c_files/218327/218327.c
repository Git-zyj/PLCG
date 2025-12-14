/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 -= 12;
                    var_12 ^= (min(226, 14336));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_14 [i_4] [6] [i_0] [i_0] [i_1] [6] = (((-(arr_10 [i_4] [i_0] [i_0] [13]))));
                            var_13 *= (((arr_4 [i_3]) <= (arr_4 [i_3])));
                            var_14 = ((arr_5 [i_2] [i_0]) ? 7854 : ((41748 ? (arr_0 [i_0]) : var_1)));
                            var_15 = (((arr_1 [9] [i_0]) ? ((var_0 / (arr_5 [i_0] [i_0]))) : 128));
                        }
                        var_16 = ((~(arr_7 [i_0] [i_0] [i_2])));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_17 = (4252127613551232627 - 2851914089);
                        var_18 = (arr_17 [i_0]);
                    }
                    arr_19 [i_0] = ((((arr_2 [i_0]) ? 139 : ((65535 ? 2851914079 : 18083772660921834906)))));
                }
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
