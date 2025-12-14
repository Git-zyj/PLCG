/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = (min((min((max(var_14, var_9)), ((min(var_0, 74))))), var_9));
    var_20 ^= ((((max((var_2 > var_6), (var_4 & 0)))) ? (min(((max(1, -75))), (var_10 % var_9))) : ((min((!var_4), ((var_0 ? var_6 : var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = ((max(((min(-75, 98)), (min((arr_1 [i_1]), (arr_3 [i_0] [i_0])))))));
                var_22 ^= (max((min((((-(arr_2 [i_1])))), (min(var_12, 1066550625345444243)))), (((!((max(0, (arr_1 [i_0])))))))));

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    var_23 = (min(((+(((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 + 3]) & var_5)))), ((((min(16, (arr_0 [i_0])))) + ((var_6 << (var_16 + 4044)))))));
                    arr_9 [i_1] [i_0] = (min(((((min(var_3, 55))) ? (arr_7 [i_0 + 2] [i_0] [i_2 + 1] [i_2 - 1]) : ((max((arr_7 [i_2] [i_0] [i_0] [i_0 - 1]), (arr_5 [i_0] [i_0] [i_0] [i_2 + 1])))))), ((min((min((arr_2 [i_0]), (arr_0 [i_0]))), ((max(var_1, (arr_1 [i_2])))))))));
                }
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    var_24 &= (min(((max((min(var_6, (arr_13 [i_0 - 2]))), var_14))), ((((var_13 ? -1 : (arr_11 [i_0] [i_0 - 1] [i_1] [i_0 - 1]))) / 74))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_25 = (((min(-1066550625345444244, ((min(var_3, (arr_19 [i_0] [i_1] [i_3 + 1] [i_0] [i_5]))))))) ? var_0 : (max(var_6, ((var_12 ? 64 : 20)))));
                                var_26 = (max(var_26, ((((((var_15 ? 1066550625345444243 : (arr_12 [i_0 + 1] [i_0 - 2] [i_3 + 3] [i_4])))) ? ((~(min(0, (arr_11 [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 1]))))) : ((max(var_15, 169))))))));
                                var_27 -= (max(((((min(-88, var_12))) ^ ((min(var_14, var_13))))), (max(((max(255, (arr_2 [i_4])))), (max(var_16, -1256094117))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_28 |= ((!((max(var_0, (arr_17 [i_0] [i_0] [i_0]))))));
                                var_29 = (max(var_29, ((min(((max((min((arr_5 [i_0] [i_0] [i_3 - 2] [i_7]), var_16)), var_3))), ((~((9223372036854775807 ? (arr_11 [i_0] [i_1] [i_0] [i_0]) : (arr_8 [i_0] [i_1] [i_0 - 1]))))))))));
                                var_30 ^= ((1066550625345444243 <= 1066550625345444243) ? ((+(((arr_0 [i_1]) ? (arr_11 [i_7] [i_3] [i_1] [i_0]) : (arr_10 [i_7]))))) : (((max((max(var_12, var_0)), (((!(arr_21 [i_0 - 2] [i_0] [i_0 + 2] [i_0 - 3] [i_0 - 3] [i_0 - 1])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
