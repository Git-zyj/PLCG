/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = ((-((28882 ? 28867 : 6))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((+(max((arr_6 [8] [i_1] [12]), var_11))))));

                            for (int i_4 = 2; i_4 < 19;i_4 += 1)
                            {
                                var_20 = var_8;
                                var_21 = 6;
                                var_22 = ((0 ? 382925275 : (!24)));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                var_23 = (((min((arr_4 [16] [i_2]), var_16))) ? ((((arr_4 [i_0 + 1] [i_2]) >= (arr_4 [1] [i_2])))) : (!11));
                                var_24 = ((~((((((arr_13 [i_1]) & 28869))) ? 28887 : var_17))));
                            }
                            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                            {
                                var_25 ^= (arr_12 [2]);
                                var_26 &= ((33810 ? (arr_3 [14]) : ((((36638 ? 61413 : 36667))))));
                            }
                            for (int i_7 = 0; i_7 < 20;i_7 += 1)
                            {
                                arr_21 [18] [1] [i_2] [1] [17] = (((min(var_8, (max(65534, var_6)))) | (!var_14)));
                                var_27 -= ((((max(((1800 ? var_17 : 28900)), 0))) ? 0 : 36667));
                                var_28 = (!0);
                            }
                        }
                    }
                }
                arr_22 [11] = (var_4 ? ((((arr_4 [i_0 + 2] [i_1]) || var_11))) : ((((max(var_3, -105241346)) <= (((arr_20 [i_0]) ? var_10 : (arr_17 [i_1] [i_0] [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_29 = ((min(7, ((~(arr_9 [i_0 + 1] [i_1 - 2] [i_8] [16] [i_9]))))) ^ (arr_14 [i_1 - 1] [i_1 - 1]));
                            var_30 ^= (arr_9 [11] [15] [i_8] [i_9 - 1] [i_9 - 1]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 21;i_12 += 1)
            {
                {
                    arr_34 [7] [7] [i_12] = ((((max(41185, -382925288))) ? var_0 : (max(105241338, 382925281))));
                    var_31 += (!105241338);
                }
            }
        }
    }
    var_32 *= var_10;
    #pragma endscop
}
