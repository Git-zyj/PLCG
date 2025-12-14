/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max(((536870911 ? 536870923 : var_4)), ((max(var_1, var_12))))) >> (min((~var_9), (var_11 != var_11)))));
    var_14 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 *= (((((-5751489127034437881 ^ (arr_2 [i_0] [i_0])))) >= (~var_11)));
            arr_5 [i_1] = (((arr_3 [i_0] [i_1]) ? (arr_3 [i_1] [i_1]) : 536870923));
            arr_6 [i_1] = (arr_4 [i_0] [i_1] [2]);
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_16 -= (((((6491028470100940351 ? 508959195 : 4194303))) ? (arr_3 [i_0] [i_0]) : ((((var_9 && (arr_2 [i_0] [i_2 - 1])))))));

            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                var_17 = (max(var_17, (((-536870911 ? (((arr_2 [i_0] [i_0]) ? var_9 : (arr_2 [i_0] [i_0]))) : (arr_10 [i_2 - 1] [i_3] [14]))))));
                var_18 = (((!var_1) ? (arr_2 [i_0] [i_0]) : 5772368525428225919));
            }
        }
        for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                arr_17 [i_4] [i_4] [i_5] = -1;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_25 [i_0] [i_0] [12] [i_0] [i_0] [i_4] = ((-16383 == (arr_1 [i_4 + 1] [i_6])));
                            arr_26 [14] [i_4] [13] [i_4 - 1] = ((-(var_8 && -5751489127034437881)));
                            var_19 = var_6;
                            var_20 = (min(var_20, 7321512943687077933));
                            arr_27 [i_4] [i_6] [i_5] [14] [i_4] = (((arr_20 [i_0] [i_4 - 1] [i_4 - 1] [i_6]) ? var_4 : (arr_20 [i_0] [i_4 - 1] [i_4 - 1] [i_5])));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                arr_31 [i_4] [i_4] = (arr_22 [i_0] [i_4] [i_8] [i_4] [i_4 + 1]);
                arr_32 [i_0] [i_4] [i_8] = (arr_4 [i_8] [i_4] [i_8]);
            }
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                var_21 = ((((4194303 ^ (arr_23 [i_0] [i_0] [i_0] [i_0] [1]))) & (arr_33 [i_0] [i_0] [i_4])));
                arr_36 [i_4] [i_4] [i_9] = ((-(arr_9 [i_4] [i_4] [i_0])));
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_41 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] = (arr_2 [i_0] [i_10]);
                        var_22 = (min(var_22, ((((~180851949) | (arr_37 [i_0]))))));
                        arr_42 [i_4] [i_4] [i_11] = ((6736192964740885170 || (arr_24 [i_0] [i_0] [i_0] [9] [i_0])));
                        arr_43 [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1] = (arr_24 [i_0] [7] [i_4] [11] [i_11]);
                        var_23 = ((arr_15 [i_4 + 1]) ? (arr_23 [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_4 - 1]) : (arr_4 [i_4 - 1] [i_4 + 1] [i_4 + 1]));
                    }
                }
            }
            arr_44 [i_4] [i_4] = (~12674375548281325694);
        }
        var_24 = (arr_23 [8] [i_0] [i_0] [i_0] [i_0]);
    }
    var_25 ^= 877206913;
    #pragma endscop
}
