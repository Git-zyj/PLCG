/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = (((!(arr_10 [i_4] [i_3] [i_1] [i_0]))) ? ((-9006804704524531708 ? (arr_10 [i_0] [i_0] [i_2] [i_2]) : (arr_10 [i_4] [i_4] [i_4] [i_4]))) : (((arr_10 [i_0] [i_0] [i_0] [i_0]) & (arr_10 [i_1] [i_2] [i_3] [i_4]))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] = (~(min(0, 4079460755)));
                                var_12 = (((4079460733 % 215506541) ? (arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3]) : ((-1022540325 ? ((165478498 ? 215506559 : -90)) : 0))));
                            }
                        }
                    }
                    var_13 = (min(var_13, (((+(((arr_11 [i_2]) ? ((var_8 ? var_6 : var_6)) : (arr_2 [10]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_14 = (~-90);
                                var_15 -= ((4129488798 ? ((max((arr_28 [i_5]), var_7))) : (~1)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_16 = -1022540324;
                            var_17 = (!2878625891);
                            var_18 = (max((-39 - 165478474), ((((((1 ? 4129488812 : var_4))) ? (1313525721 || 15) : (!1022540322))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            var_19 = (min(var_19, (arr_28 [i_13])));
                            arr_44 [i_6] [i_6] [i_12] [i_12] [i_12] [i_6] = (((((((((arr_3 [i_12] [i_13]) / (arr_3 [2] [5])))) ? (max((arr_27 [i_5] [i_5] [i_5]), var_8)) : ((50081 ? (arr_14 [2] [i_6] [6] [6] [i_12] [2]) : (arr_38 [i_5] [i_5])))))) ? ((((((arr_38 [i_5] [i_13]) ? -90 : (arr_41 [i_5] [i_5] [i_5] [i_6])))) ? 5835 : -1661276343516753618)) : 0));
                            var_20 = ((-var_3 ? ((((var_6 | var_7) ? (arr_19 [i_5] [i_5]) : (~157)))) : (((arr_30 [i_5] [i_6]) ? (arr_31 [i_13] [i_12] [i_6]) : (arr_28 [i_5])))));
                            var_21 = ((((min(var_9, (arr_21 [i_5])))) & (((arr_32 [i_5]) ? 1661276343516753609 : (min((arr_37 [i_6] [i_6] [i_6]), (arr_8 [i_5])))))));
                            var_22 = (!var_3);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        {
                            arr_52 [i_5] [i_5] [i_14] [i_14] [i_6] [i_14] = (max((((!(arr_42 [i_15] [i_5] [i_5] [i_6] [i_5])))), ((max((arr_40 [i_5] [i_6]), var_3)))));
                            var_23 = (max((((arr_1 [i_14] [i_14]) ? (arr_1 [i_5] [i_5]) : -217761525)), (((18446744073709551615 ? 4294967276 : 29847)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 12;i_18 += 1)
                        {
                            {
                                var_24 ^= ((((-((217761525 ? (arr_24 [i_5] [i_5] [i_16]) : (arr_50 [0] [i_18] [i_18] [i_18]))))) | (((min((arr_60 [i_5] [i_6] [i_5] [4] [i_17] [i_18]), (arr_40 [i_17] [0]))) ^ -1171859580))));
                                var_25 ^= (~215506537);
                                var_26 = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
