/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = -32767;
                arr_4 [i_0] [i_1] = arr_2 [i_1] [i_1] [i_0];
                arr_5 [i_0] = (!15);
            }
        }
    }
    var_18 = var_14;
    var_19 ^= var_10;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3 + 4] [i_2] = (((((52206 ? (arr_2 [19] [i_4 + 2] [i_4 - 2]) : (arr_10 [i_3 + 2] [i_2])))) ? (arr_13 [i_2] [i_3] [i_4 - 2]) : ((-(arr_8 [i_2])))));
                    arr_15 [i_3] [i_2] = ((~(max(-3499420558358374911, (arr_11 [i_4 + 2] [i_3 + 1] [16])))));
                    var_20 += ((((-382587614966601295 ? 3822297773028725340 : 115)) * ((((!(13352 || 13330)))))));

                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_5] [i_2] [i_3] = ((var_12 ? (((-(max(1, 1502303307))))) : (((((3 ? -24297 : 2892935343))) ? (arr_1 [i_2]) : (((arr_12 [i_4]) ? var_2 : (arr_10 [i_2] [i_2])))))));
                        var_21 = ((((max((arr_10 [i_2] [i_2]), ((((arr_9 [i_2] [i_3 + 3] [i_2]) || (arr_1 [i_2]))))))) && var_13));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_22 = (max(var_22, (((!(arr_13 [17] [i_3] [i_3 + 1]))))));
                        var_23 = 1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
