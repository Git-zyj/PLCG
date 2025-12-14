/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((6519412888047710965 ? -220015974 : 18));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, 52059));
                                arr_12 [i_0] [i_1] [i_2] = ((((((arr_11 [i_0] [i_1] [i_2] [i_3] [0]) ? -220015974 : ((-(arr_0 [i_0] [i_1])))))) ? (((!(arr_4 [i_3] [i_4])))) : (min((arr_6 [i_4] [i_3] [i_2] [i_1]), (max(127661581, var_5))))));
                                var_18 = ((((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) || 1))) * ((max((max(107, 207)), (-19 > -6519412888047710966))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {

                            for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [4] [i_5] [i_5] [i_5] &= ((5 << (40 - 12)));
                                arr_20 [i_0] [i_1] [20] [i_6] [i_6] = (max((arr_9 [17] [i_1] [i_5] [i_6] [i_7] [i_0] [i_7 - 1]), var_9));
                            }
                            for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
                            {
                                var_19 = var_5;
                                arr_24 [i_6] [i_1] [i_5] [i_6] [i_8] = (((6048 < var_10) ? ((((!(arr_9 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8] [i_8] [i_8 + 1]))))) : 2892418068));
                            }

                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 22;i_9 += 1)
                            {
                                arr_27 [i_0] [i_6] [7] [i_6] [i_9] = 1612499198;
                                var_20 = -6519412888047710966;
                            }
                        }
                    }
                }
                var_21 += ((6519412888047710966 && (((var_13 ? var_8 : ((max(1, (arr_17 [i_0] [9])))))))));
                arr_28 [i_0] = (arr_22 [i_0] [i_1]);
                var_22 = var_3;
            }
        }
    }
    #pragma endscop
}
