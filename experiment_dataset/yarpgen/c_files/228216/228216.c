/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_9 [i_3] [i_0] [i_0] [i_0] = 1;
                        arr_10 [i_0] [i_0] [i_2] [9] = ((((-((var_6 >> (((arr_0 [i_0] [i_1]) - 204)))))) & -28844));
                    }
                    arr_11 [i_0] [1] [i_1] [i_0] = (max((((var_4 == ((2196875771904 ? 1 : (arr_3 [i_0])))))), ((((min(11229228739529139961, (-127 - 1)))) ? 14670920830429077214 : 1234220781))));
                    var_20 ^= 1;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, var_4));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_6] = ((arr_1 [i_5 + 2] [i_5 - 2]) ? (arr_1 [i_5 - 2] [i_5 - 2]) : 41477);
                                var_22 = ((-127 & ((2113929216 << (var_4 - 62318)))));
                            }
                        }
                    }
                }
                var_23 |= (((arr_14 [i_0] [16] [i_1] [16]) ? ((((var_5 ? var_17 : var_19)) & ((((arr_19 [i_0] [18]) - (arr_17 [i_1] [i_1] [i_1] [1] [i_0])))))) : (arr_0 [i_0] [i_0])));
                var_24 -= ((-((1 | ((var_4 ? 1 : var_12))))));
                arr_21 [i_1] [i_0] [i_0] = (((((1 / (arr_8 [i_0] [i_1] [i_1] [i_1])))) ? (((arr_8 [i_1] [i_0] [i_0] [i_0]) ? var_19 : (arr_8 [i_0] [i_1] [i_1] [i_1]))) : ((((arr_8 [i_0] [i_0] [i_0] [i_1]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : var_12)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                {
                    arr_28 [i_8] [i_8] [i_9 - 1] [i_8] = (max((((((max((arr_22 [i_8]), (arr_18 [i_7] [i_7] [i_7] [i_8] [i_9] [i_7])))) <= ((15 << (arr_16 [i_7] [i_7] [i_9])))))), var_1));
                    var_25 = (min((((min(var_11, var_9)) - (arr_23 [i_9]))), ((min((!595984891), ((-6680144973475049435 ? 1234220781 : (arr_13 [i_7] [i_7] [i_7]))))))));
                    arr_29 [i_8] = (arr_18 [i_9 - 1] [13] [i_9 + 1] [i_9] [i_9] [i_9]);
                    var_26 &= (((arr_13 [i_9] [i_8] [i_7]) ? (arr_5 [9]) : (((!((!(arr_0 [4] [i_7]))))))));
                }
            }
        }
    }
    var_27 = var_18;
    var_28 = (max(var_28, ((max(var_13, ((var_1 ? var_9 : (max(var_17, 31877)))))))));
    #pragma endscop
}
