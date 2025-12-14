/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = ((!((((arr_2 [i_0]) ? -var_3 : ((max(7, 65529))))))));
                var_20 = (min(var_20, ((((((21 ? (var_1 != var_16) : (min(var_9, var_6))))) ? ((-(min(1066148296257360136, 3905007322)))) : ((min(((min(-103, 7))), 1))))))));
                var_21 -= (((((1 ? -181615356 : 1))) ? (((((-(arr_2 [i_0])))) ? -2267665400164632894 : var_15)) : (((20 ? 161 : 114)))));
            }
        }
    }
    var_22 *= (((-1938626137 && -1830363437) ? 1938626136 : 127));
    var_23 = var_8;

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_24 = 89;
        arr_8 [i_2] [i_2] = var_2;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_25 = (max(var_25, var_9));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        var_26 = (!-996442137414782322);
                        arr_16 [i_2] [i_2] [i_4] = (((arr_14 [i_5 - 1] [i_5 - 1]) + (arr_14 [i_5 - 1] [i_5 - 1])));
                    }
                }
            }
            var_27 = (127 ? 989216361 : 78);
        }
        for (int i_6 = 3; i_6 < 18;i_6 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                arr_25 [i_2] [2] [i_6 + 1] [2] = (arr_24 [i_7 - 1] [i_6 - 3] [i_2]);
                var_28 = (min(var_28, (arr_5 [i_6 - 2])));
            }
            var_29 -= (max((max(var_1, var_18)), var_2));
        }
        for (int i_8 = 3; i_8 < 18;i_8 += 1) /* same iter space */
        {
            var_30 = (min(var_30, var_14));
            arr_28 [i_2] [i_8] = -23;
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            arr_37 [i_2] [i_2] [i_2] [i_2] [2] |= ((1505006763 ? 65529 : 1));
                            arr_38 [i_2] [i_8 + 1] [i_2] [i_10] [i_8 - 3] [10] = ((((max(((6229362623388994641 ? var_13 : (arr_9 [i_2]))), ((min(-2267665400164632891, 449)))))) ? ((((min(var_9, 236))) ? ((1 + (arr_29 [i_2] [13] [i_9] [8]))) : (((min(var_7, (arr_7 [i_9]))))))) : (arr_15 [i_2] [i_8] [i_9] [i_10] [8])));
                            var_31 = var_15;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
