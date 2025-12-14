/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -15389;
    var_13 = var_7;

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_14 = -31686;
        var_15 = (max(var_15, ((((min(var_6, 15400)))))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_16 = 31681;
        var_17 = (((((arr_1 [i_1 + 1]) != ((min(var_4, var_11))))) ? (~-31686) : ((512 ? ((-(arr_4 [i_1]))) : ((var_5 ? (arr_4 [i_1]) : var_8))))));
        arr_7 [i_1] = arr_0 [i_1];
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((((((31688 ? -6114626444509351811 : 1))) ? var_5 : var_11)))));
        var_19 = (min(var_19, 1551970643));
        var_20 = (min(var_20, -105));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_21 = (min(var_21, var_9));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_22 += ((-(var_11 - var_1)));
                    var_23 = (arr_9 [i_3] [i_3]);
                    var_24 = ((1494541623 ? ((((arr_1 [i_3 + 1]) ? (arr_19 [18]) : -1))) : (arr_17 [i_3] [20])));
                    var_25 = (arr_5 [i_3 + 1]);
                }
            }
        }
        var_26 = (var_4 != -3069);
    }
    var_27 = (max(var_27, ((max((((-588766931 ? (var_8 * 4294967291) : var_4))), ((var_9 ? -var_3 : (((max(45550, 161)))))))))));
    #pragma endscop
}
