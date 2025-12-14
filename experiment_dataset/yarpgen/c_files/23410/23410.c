/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_5));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((min(var_11, var_6)) > ((((!var_7) ? (((arr_1 [i_1]) ? var_1 : var_2)) : 37084)))))));

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_0] = (min((arr_1 [5]), ((min(((var_2 << (var_4 - 7220745697727495815))), (((arr_0 [i_0]) ? var_2 : (arr_2 [i_0]))))))));
                    arr_10 [4] [i_0] [i_0] = ((-(arr_2 [i_0])));
                    var_15 &= (max((((min(var_3, 37101)))), ((-(arr_7 [i_0] [i_1 + 1] [i_2])))));
                    var_16 = max((((+(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0])))))), 3683744642);
                    var_17 = (min(var_17, ((~(((!140) % (arr_3 [i_0 - 2] [i_1 - 1] [i_2 - 1])))))));
                }
                for (int i_3 = 2; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, (arr_2 [1])));
                    arr_13 [i_0] [i_0] = (-(min((arr_7 [i_0] [3] [i_0]), ((var_6 ? var_12 : (arr_1 [i_3]))))));
                    var_19 += (((max(((var_12 || (arr_8 [i_0 - 2] [i_1] [9] [i_3 - 1]))), (!425843027870961950))) ? ((((((max(1, var_0))) || (arr_11 [i_0] [i_1 + 1]))))) : (max((arr_8 [i_0 + 1] [i_3 + 1] [i_3] [i_3]), (arr_1 [17])))));
                }
                for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [i_0] = ((!(!0)));
                    var_20 -= ((-((min(0, 814254912)))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [i_4] [i_5] [15] = ((((var_4 ? (max((arr_24 [i_0] [i_1] [i_4 + 1] [i_4] [i_5] [i_6 - 2] [i_6]), var_9)) : ((18020901045838589663 ? 1 : 746872390))))) ? (arr_18 [i_0] [i_4] [i_5] [i_0]) : (((max(-814254901, (arr_14 [i_0] [i_0] [9] [i_5]))) + (arr_22 [i_0 - 2] [i_1] [i_4] [i_4] [i_5] [i_0]))));
                                var_21 = (min(var_21, var_3));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_35 [i_9] [i_0] [i_8 + 1] [i_8] [i_7 - 1] [i_0] [i_0] = max(((min(1, (arr_12 [i_0 - 1] [i_7 - 2] [i_1 + 1] [i_0])))), (min(var_9, (min(1, var_9)))));
                                var_22 ^= (~4294967295);
                                arr_36 [i_0] [16] [5] [i_0] [i_0] [i_0] [i_0] = (!89);
                            }
                        }
                    }
                }
                var_23 ^= (min(3603982878, 4294967289));
            }
        }
    }
    var_24 = ((-(~var_11)));
    #pragma endscop
}
