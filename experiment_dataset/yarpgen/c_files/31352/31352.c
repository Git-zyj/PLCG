/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= max(234, ((var_15 + (31759 ^ var_1))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [14] = ((+(((arr_1 [i_0 - 1]) - (arr_1 [i_0 + 1])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((((((~(var_13 && 3368819863182047582)))) != ((var_7 ? var_11 : var_14)))))));
                    arr_9 [18] [i_1] [1] = (((((var_12 ^ (((var_9 > (arr_5 [i_0] [i_0]))))))) ? -1 : var_4));
                    var_18 = (max(var_18, (min((((((-3368819863182047569 ? (arr_4 [i_0] [4] [4]) : (arr_6 [i_0] [i_0] [18])))) ? -4 : (1505386402 * -29474))), 6728))));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((((-(arr_5 [i_3 - 1] [i_3 + 1]))) != ((((((arr_7 [8] [8] [i_3] [i_3]) + var_4))) ? var_4 : var_10)))))));
        arr_12 [5] [0] &= ((((((((min(170, (arr_0 [0] [i_3 - 1])))) && ((((arr_11 [i_3] [i_3]) & var_9))))))) + (min(4004872597, (-22349 % 4)))));

        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    {
                        var_20 = (((arr_1 [i_3]) ? (((var_2 && (((106 << (1888883838 - 1888883820))))))) : (((((var_6 - (arr_4 [7] [i_4] [i_4])))) ? (var_12 != var_3) : ((var_7 | (arr_10 [20] [i_4])))))));
                        var_21 = (min(var_21, (!var_10)));
                    }
                }
            }
            var_22 -= (((min(var_12, ((var_15 + (arr_5 [i_3] [i_3]))))) * (!-var_13)));
        }
    }
    #pragma endscop
}
