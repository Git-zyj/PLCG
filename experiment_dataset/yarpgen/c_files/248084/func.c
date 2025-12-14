/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248084
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_11 [(unsigned char)3] [i_1] [i_2] [i_3] [9U] = ((/* implicit */unsigned char) arr_2 [i_1]);
                                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_7 [0U] [i_1] [0U] [0U] [i_1] [(unsigned short)13])), ((unsigned short)16301)))), (min((arr_9 [i_0] [i_1] [i_2] [i_1] [(unsigned short)12]), (((/* implicit */long long int) (signed char)-113))))))) ? (max((((((/* implicit */_Bool) 1542721919U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(unsigned char)1] [i_2] [i_3] [i_4] [i_4]))) : (arr_8 [i_2]))), (((/* implicit */unsigned int) arr_1 [i_3 - 2] [i_0 - 4])))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_3])) : (((/* implicit */int) arr_10 [i_0] [(unsigned char)7] [(unsigned short)13] [(unsigned char)7] [i_0] [i_0] [i_3])))) >> ((((+(var_13))) + (1733528772))))))));
                                arr_12 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */long long int) max((((((/* implicit */int) arr_4 [i_2])) <= (((((/* implicit */int) arr_10 [i_0] [(signed char)11] [(signed char)11] [(signed char)11] [i_2] [i_3 - 2] [i_3])) << (((18446744073709551615ULL) - (18446744073709551604ULL))))))), (((((/* implicit */_Bool) var_2)) && (((((/* implicit */_Bool) arr_0 [(signed char)6])) && (((/* implicit */_Bool) arr_0 [2LL]))))))));
                                arr_13 [i_3] [i_3 + 2] [(unsigned short)15] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) arr_2 [i_1]);
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) arr_5 [i_0 - 4]);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_10);
}
