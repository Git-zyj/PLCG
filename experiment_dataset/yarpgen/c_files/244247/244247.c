/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((((~var_13) + var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = ((~((var_8 + ((min((arr_0 [i_1]), var_16)))))));
                var_22 = (min(var_18, (((arr_3 [i_1]) ? ((var_12 ? (arr_2 [12] [i_1]) : var_1)) : (((~(arr_1 [0]))))))));
                var_23 = (max(var_23, (((57344 ? 65535 : 18446744073709551615)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {

                            for (int i_6 = 1; i_6 < 22;i_6 += 1)
                            {
                                var_24 = (((arr_14 [i_3] [i_4]) + ((-109 ? 3827233956206023101 : -93))));
                                var_25 = ((((max((arr_10 [i_6 - 1]), var_15))) ? ((var_12 ? (~var_0) : (108 * 8248162097587928322))) : (((((min(var_14, (arr_7 [i_4])))) ? 3827233956206023115 : ((((arr_15 [18] [5] [5] [18] [i_2]) ? 10975 : 4294967295))))))));
                            }
                            for (int i_7 = 4; i_7 < 21;i_7 += 1)
                            {
                                var_26 ^= var_11;
                                var_27 ^= ((-((~((var_12 ? 19145 : 0))))));
                                arr_25 [6] [i_3] [i_3] [i_7] [6] [i_7] = (!-109);
                                arr_26 [i_2] [i_2] [i_2] [7] [8] [i_3] [i_2] = ((((((arr_8 [10] [10]) ? var_7 : (((-(arr_16 [i_2] [i_3] [i_3] [i_5]))))))) ? ((min((arr_22 [20] [i_3] [i_3] [20]), (var_16 * var_15)))) : (((((var_16 ? (arr_23 [i_2] [9] [9] [i_3] [i_7]) : var_10))) ? 4294967267 : ((var_9 + (arr_19 [0])))))));
                            }
                            var_28 = (max(var_28, ((min((max(1743740007643825927, (arr_22 [i_5] [i_5] [2] [i_5]))), (((3827233956206023092 + ((min(-1, (arr_8 [i_3] [14]))))))))))));
                            arr_27 [i_3] = (((arr_8 [3] [i_3]) + -53));
                        }
                    }
                }
                arr_28 [i_3] = ((((min(((min(1302013873, 4294967295))), var_13))) ? (((!var_6) ? var_15 : ((max((arr_18 [i_3] [i_3]), -1))))) : -20993));
                var_29 = arr_22 [i_2] [i_2] [i_3] [i_3];
            }
        }
    }
    #pragma endscop
}
