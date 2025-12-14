/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((+((min((1456494443 > var_12), (var_12 || var_3))))));
    var_20 = 1456494443;
    var_21 = ((min((var_8 && var_7), (min(var_14, -1456494444)))));
    var_22 = ((var_11 ? (var_2 && var_2) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_23 += ((((-(arr_2 [i_0]))) > (((~((((arr_0 [i_0] [i_0]) && (arr_1 [4] [i_1])))))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_24 = (((arr_0 [i_1] [9]) ? ((~(var_16 ^ 32762))) : -1456494443));
                    var_25 = (((arr_3 [i_0]) ? (arr_4 [i_0]) : ((max(var_5, (arr_4 [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_10 [15] [i_0] = (min((((((-1616999080274180845 ? var_16 : var_5))) ^ (min((arr_7 [i_0] [i_1] [i_0]), var_18)))), ((((arr_4 [i_3]) <= (min(1456494436, var_1)))))));
                    var_26 = ((((((-6475288452892797375 ? -1456494437 : 6637962790247704770)))) > var_11));
                    var_27 = (max(var_27, ((max(-var_11, (((~var_5) | 6475288452892797362)))))));
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_28 = (((arr_0 [i_1] [i_1]) != (((((22332 ? 1540254212 : var_17)))))));
                            var_29 = 729925864;
                            var_30 = ((max(((~(arr_5 [i_0] [i_4] [i_4]))), (min(-22333, var_11)))));
                            var_31 = (arr_0 [i_1] [2]);
                            var_32 = (2047 ? 153 : -21187399439358946);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
