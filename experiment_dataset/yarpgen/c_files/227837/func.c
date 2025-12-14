/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227837
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
    var_18 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33794)) ? (((/* implicit */int) (unsigned char)202)) : (var_12)))))));
    var_19 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) (unsigned short)52020)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54527))) : (431966350U))), (((/* implicit */unsigned int) var_3)))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-15504)))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4056701051U)))) ? (((var_1) ? (-17LL) : (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_13))))))))) ? (var_12) : ((-(((/* implicit */int) var_9))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1 - 2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)51583)), (664946991U)))) ? (19ULL) : (((unsigned long long int) 2169739945U))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)0))))) * (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [(short)12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (var_10))))) : (((unsigned int) arr_6 [i_0 + 1] [i_0] [i_1 - 2]))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [2])) ? (arr_1 [(signed char)4]) : (arr_1 [2LL])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (1094277719) : (((/* implicit */int) (unsigned char)3))))) : (((((/* implicit */long long int) arr_4 [(unsigned short)12] [i_1 - 1] [i_1 - 1] [(unsigned short)12])) & (arr_1 [(unsigned char)4]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) ((short) (unsigned short)4))));
                                var_23 |= ((/* implicit */unsigned int) min((max((((/* implicit */long long int) arr_11 [i_4 - 2] [i_1 + 1] [i_1] [i_1])), ((~(arr_1 [i_3]))))), (arr_10 [i_0] [i_3] [i_2] [(_Bool)1] [i_0])));
                            }
                        } 
                    } 
                    arr_14 [(unsigned char)10] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)28)) ? (2603820103393800025LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                    arr_15 [i_0 - 1] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 998761758708222816ULL)) ? (1559775871440313303LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (max((((/* implicit */unsigned int) ((signed char) var_9))), (max((4193846961U), (((/* implicit */unsigned int) arr_6 [i_0] [i_1 - 1] [i_2])))))) : (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))) : (var_16))) ^ (((/* implicit */unsigned int) arr_2 [i_1 - 2] [i_1 - 3] [i_0 + 1])))));
                }
            } 
        } 
    } 
}
