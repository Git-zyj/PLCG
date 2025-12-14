/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 -= ((((((min((arr_6 [i_0] [i_0]), 114)) >> 57))) ? ((max(-119, 0))) : (((((-1173147811 ? -1173147811 : (arr_7 [i_0] [i_0] [i_0]))) & (((var_10 * (arr_8 [i_0] [i_1] [i_0])))))))));
                        var_19 |= ((((((arr_1 [i_2 + 3]) > var_2))) >= -119));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_20 -= (((arr_8 [i_2 - 1] [i_4] [i_1 + 2]) ? var_5 : (arr_8 [i_2 + 2] [i_1 - 1] [i_1 + 2])));
                        var_21 -= (((~var_17) / (118 && 11013759414872790112)));
                        var_22 = (min(var_22, ((~(arr_5 [i_0])))));
                        var_23 ^= var_17;
                    }
                    var_24 = (max(var_24, 1));
                    var_25 |= (arr_4 [i_1] [i_0]);
                    var_26 = (max(var_26, ((min(var_2, 106)))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        arr_14 [i_5] = ((((arr_4 [i_5] [i_5]) <= 0)));
        var_27 = (max(var_27, var_10));
        var_28 = ((((var_10 ? 243 : (arr_6 [12] [i_5]))) >> (-14814456175108044206 - 3632287898601507369)));
    }
    #pragma endscop
}
