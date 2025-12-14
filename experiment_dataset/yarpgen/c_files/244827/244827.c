/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (arr_4 [i_2]);
                    var_19 -= (min(41021, 2192));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_10 [2] [i_1] [i_1] [i_3] [22] [i_4] = (arr_2 [i_1] [i_1] [i_2]);
                                var_20 = (max(var_20, var_6));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                var_21 = arr_15 [i_5 + 2] [2] [i_6];
                var_22 = (arr_16 [i_5]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_9 = 2; i_9 < 14;i_9 += 1)
                            {
                                var_23 = (!-1988502138);
                                var_24 = (arr_9 [i_7] [18] [i_7] [i_8] [i_9] [i_5 + 2]);
                                arr_26 [i_5] [i_6] [i_7] [i_8] = (((arr_14 [i_9 + 1] [i_9 - 2] [i_9 - 1]) ? (arr_14 [i_9 - 1] [i_9 - 2] [i_9 - 1]) : (arr_25 [i_5 - 1] [i_6] [i_9 - 1])));
                            }
                            for (int i_10 = 0; i_10 < 15;i_10 += 1)
                            {
                                var_25 = ((((24514 ? 1 : 24515))) ? (arr_0 [i_5 + 1]) : (((4076567689378703579 ? 932834 : 41020))));
                                var_26 = (min(var_26, (!932834)));
                                var_27 = (((((41021 ? -30959 : -2193))) ? ((~(arr_11 [i_8 - 1]))) : var_2));
                                var_28 &= (min(2188, 3524953993897468588));
                            }
                            for (int i_11 = 3; i_11 < 14;i_11 += 1)
                            {
                                var_29 = (((max(var_9, 5236683417218953125))) ? (arr_2 [i_7] [i_11 - 2] [i_11 - 2]) : (((arr_27 [11] [i_6] [i_6]) & -24514)));
                                var_30 = (min((max((arr_28 [i_5 + 1] [i_5 + 1] [i_8 - 1] [i_11 - 2] [i_11 + 1]), var_12)), var_13));
                            }
                            var_31 = (min(var_31, ((min((!24620), (max((!var_9), (min((arr_11 [i_6]), var_11)))))))));
                        }
                    }
                }
                var_32 -= (4076567689378703579 >= -2207);
            }
        }
    }
    var_33 = ((-22706 ? 2208 : 2169));
    #pragma endscop
}
