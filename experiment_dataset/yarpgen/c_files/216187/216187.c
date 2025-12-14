/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((min(var_14, var_12))) ? (arr_2 [i_0]) : (arr_2 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [12] [i_1] [12] &= (13177481465742471466 || 1606255748);
                    arr_10 [i_2] [i_2] [i_2] [i_0] = (min((arr_7 [i_1] [i_0] [i_2] [i_1]), (((arr_7 [i_2] [i_2] [i_1] [i_0]) & (arr_7 [i_0] [i_0] [i_2] [i_0])))));
                    arr_11 [i_2] [i_1] [i_1] [i_2] = 13177481465742471445;
                }
            }
        }
        var_18 = arr_7 [i_0] [i_0] [i_0] [i_0];
        var_19 = ((((((arr_7 [i_0] [0] [i_0] [i_0]) ? (((25139 ? (arr_8 [i_0] [17] [i_0]) : 980454686))) : ((6243 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_0 [i_0])))))) ? var_15 : (((~6662489955911223384) ? ((((arr_4 [i_0] [i_0] [4]) ^ (arr_1 [i_0] [i_0])))) : (min(-56, (arr_2 [i_0])))))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] |= arr_0 [i_3];
        var_20 = (min(var_20, ((((((((arr_6 [16] [16] [i_3]) / 2147483646))) ? (arr_4 [i_3] [i_3] [i_3]) : -68))))));
        var_21 = (max(var_21, (((((((13177481465742471466 ? (arr_1 [i_3] [i_3]) : 60848))) | (arr_4 [i_3] [i_3] [i_3])))))));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_22 = (((((arr_17 [i_4]) && 6662489955911223384)) ? ((63480 ? 373797409236157428 : -1912055216)) : ((((!(arr_19 [i_4])))))));

        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            var_23 = (max(var_23, ((((arr_18 [i_5 + 1]) ? (var_2 ^ -4966167774765390835) : var_0)))));
            arr_23 [i_5 - 1] [1] = ((((((arr_20 [i_5]) ? 1 : 8))) ? (!1) : (arr_19 [i_4])));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_24 = ((!(((~(arr_21 [i_7] [i_7]))))));
                        var_25 = ((((((((arr_21 [i_4] [i_4]) + 2147483647)) << (((arr_22 [i_6]) - 43796))))) >= (((arr_21 [i_4] [i_7]) ? (arr_18 [22]) : var_11))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
