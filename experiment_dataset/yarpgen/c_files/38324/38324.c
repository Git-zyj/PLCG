/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (((max((var_6 >> 6), -32749))) ? var_10 : (((((2088960 <= var_7) != ((4292878333 >> (var_12 - 1432768308368181646))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = ((var_12 ? (((var_1 <= var_10) ? ((4292878310 ? (arr_7 [11] [i_1] [i_2]) : -7976241863120766904)) : 64995)) : ((((((max(var_13, (arr_4 [i_1] [i_3])))) != var_9))))));
                            arr_10 [i_0] [6] = 8982052714252141713;
                            var_17 = 1128986209;
                            var_18 = ((((((max(var_3, var_5))) != (!7976241863120766883))) ? ((~(7680 && var_2))) : ((((((arr_2 [i_2]) && (arr_8 [i_1] [i_0] [i_1] [i_1] [i_0] [i_0]))) && ((((arr_7 [i_2] [i_1] [i_2]) ? 32767 : (arr_2 [18])))))))));
                        }
                    }
                }
                arr_11 [i_0] [1] [1] = ((4178530261489384141 ? (min(1128986179, var_4)) : (arr_2 [i_1])));
                var_19 = (min(var_19, (((((-32756 || 3165981083) >= (arr_8 [i_1] [13] [i_0] [i_0] [i_0] [i_0]))) && (arr_6 [i_0] [i_1] [i_1])))));
            }
        }
    }

    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        arr_14 [i_4] |= ((-((((min(-1, 286746140))) ? -7976241863120766924 : (arr_1 [0])))));
        arr_15 [i_4 + 1] [i_4 + 1] |= var_13;
        var_20 |= (((arr_5 [i_4] [i_4] [i_4] [i_4]) ? 7 : var_6));
    }
    #pragma endscop
}
