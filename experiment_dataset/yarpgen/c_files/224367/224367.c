/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((((arr_1 [i_3 - 1] [i_4 - 3]) > (((arr_1 [i_3 - 2] [i_4 - 2]) - (arr_1 [i_3 - 2] [i_4 - 3]))))))));
                                var_19 = (((-4011284504045193375 || 4011284504045193374) && (((arr_5 [i_2 - 1]) && (arr_5 [i_2 + 2])))));
                                arr_14 [i_4] = -4011284504045193374;
                                var_20 *= (arr_5 [1]);
                                var_21 = (((((((arr_0 [i_4]) & (arr_4 [i_1]))) - (arr_9 [i_1] [i_3 - 2] [i_1] [1]))) > (((~(arr_7 [i_0] [i_0]))))));
                            }
                        }
                    }
                    var_22 = ((-(min((arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2 + 2]), ((max((arr_9 [i_0] [i_0] [8] [i_0]), (arr_1 [i_0] [i_0]))))))));
                    var_23 *= ((((arr_9 [i_0] [i_1] [i_2 + 3] [i_2]) ? ((((arr_4 [i_0]) >= 1))) : ((((arr_6 [i_0] [i_0] [i_1] [i_2]) == -1026603485))))));
                }
                var_24 |= ((((max((arr_9 [14] [14] [i_1] [i_1]), (arr_9 [i_0] [0] [i_1] [i_1])))) ? -4011284504045193374 : (arr_9 [i_0] [i_0] [i_0] [i_0])));
                var_25 = (max((max((arr_6 [i_0] [i_0] [i_0] [i_0]), (((arr_6 [i_1] [i_1] [i_0] [i_0]) % (arr_4 [i_0]))))), ((~(min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_11 [i_1] [1] [i_0] [11])))))));
            }
        }
    }
    var_26 = (min((4011284504045193362 && -13462), var_7));
    #pragma endscop
}
