/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    var_18 ^= (((arr_5 [i_0 + 1] [i_0 - 1]) < (arr_5 [i_0 + 1] [i_0 - 1])));
                    var_19 = (max(var_19, (arr_3 [i_2])));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_0] [i_0] = var_4;
                    var_20 = 1006382117;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_21 = (10642 < var_16);
                    var_22 = (min(var_22, ((((!var_6) % (((arr_7 [i_1]) ? 54865 : (arr_2 [i_0] [i_1]))))))));
                }
                arr_16 [7] [i_1] [i_0] = ((((((arr_14 [i_1] [i_0]) ? ((54882 ? var_8 : var_14)) : var_7))) <= (arr_1 [i_0] [i_1])));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_23 = (min(var_23, var_17));
                    var_24 = ((arr_6 [1] [i_0 - 1] [i_5] [i_0]) > var_17);

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_5] = var_1;
                        var_25 = var_8;
                    }
                    for (int i_7 = 4; i_7 < 20;i_7 += 1)
                    {
                        arr_26 [i_0] = (((arr_21 [i_0]) ? var_9 : (arr_21 [i_0])));
                        arr_27 [i_0] [10] [10] [i_0] = (((arr_7 [i_0]) ? var_7 : var_6));
                        var_26 ^= (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_5] [i_5] [11] [i_0 + 1]) : (arr_8 [i_0 - 1] [i_1] [i_5] [i_7 - 1])));
                        arr_28 [i_0] = (arr_14 [i_0 - 1] [i_0]);
                        var_27 = (max(var_27, var_3));
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_28 &= var_16;
                        var_29 = var_7;
                        var_30 &= 4294967295;
                        arr_31 [i_0] [i_0] [i_0] [i_0] = (var_4 & -1006382117);
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_31 = (((((arr_33 [i_0] [i_5]) >= var_7)) ? (arr_14 [i_10] [i_0]) : 59169));
                                var_32 = ((((((1 < (arr_10 [i_0] [i_0] [16] [i_0]))))) * var_10));
                                arr_37 [i_0] [i_1] [i_0] [i_1] [i_1] = (arr_17 [16] [1] [i_0]);
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    arr_41 [i_0] = (((arr_35 [i_11] [i_11] [i_0 - 1] [1]) * (arr_35 [i_0] [i_0 - 1] [i_0 - 1] [i_0])));

                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] = ((20 ? 2678 : 7379192498751938030));
                        var_33 = var_12;

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            var_34 ^= (((((arr_15 [i_1] [i_1] [i_13]) || 2678)) ? (var_4 > var_10) : 2044));
                            var_35 = (((var_15 <= 1006382103) ? ((((arr_42 [5] [5] [i_11] [i_12]) <= 1006382103))) : -8896477619413305731));
                        }
                        var_36 = var_8;
                        var_37 &= ((((max(var_15, 1006382117))) || -1006382103));
                    }
                    var_38 = (max(var_38, (1006382116 - 54907)));
                }
                var_39 = (max(var_39, (((((-((var_8 / (arr_24 [i_0] [i_1] [i_1] [i_1]))))) << (((arr_25 [i_0] [i_0] [i_0] [i_1]) - 536039711)))))));
            }
        }
    }
    var_40 = var_10;
    #pragma endscop
}
