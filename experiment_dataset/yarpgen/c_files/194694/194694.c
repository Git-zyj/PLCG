/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_14 = (((max(((max(161, 50906161041025519))), (((arr_0 [4] [i_3]) | var_9)))) ^ (((var_12 ? (min(2, var_9)) : (((-(arr_3 [i_1] [i_3])))))))));
                            arr_10 [i_0] = ((((min((arr_7 [i_0] [i_1] [i_1 - 1]), 126))) ? ((-(arr_9 [i_0] [10] [i_3 - 1]))) : (((!(((161 % (arr_2 [i_1])))))))));
                            var_15 = ((!((((arr_7 [4] [i_1] [i_3]) >> (((arr_4 [i_0 + 1]) - 65)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((((arr_1 [i_5]) ? ((((!(((~(arr_17 [i_5] [i_4] [8] [i_1] [i_1] [i_0])))))))) : (((~var_11) ? ((-6310954013424618199 ? (arr_12 [i_0 - 3] [i_0] [4] [i_5 - 1]) : 61403)) : 254)))))));
                            var_17 = ((1 ? ((95 + (min((arr_6 [i_0]), 197472732)))) : ((min(209, -1388755567)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                {
                    var_18 = (((((((24 ? -1113626706 : 148))) ? ((-(arr_24 [i_6] [i_7] [i_7]))) : 47864)) ^ (~254)));
                    var_19 -= (min((((arr_22 [i_8 + 1]) + (arr_22 [i_8 - 1]))), (!var_5)));
                    arr_26 [i_6] [i_6] [i_7] [i_7] = (min(((((arr_22 [i_6 - 1]) <= var_1))), -1));
                }
            }
        }
    }
    #pragma endscop
}
