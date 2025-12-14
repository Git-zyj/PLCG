/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193599
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
    var_17 &= ((max((((/* implicit */unsigned int) var_9)), (3472398711U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_10))))) >= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))))));
    var_18 = ((/* implicit */int) min((var_18), (((int) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_19 = arr_4 [i_0];
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1] [i_2] [(signed char)7])) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_2] [i_1 + 1])) >= (((/* implicit */int) arr_13 [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1] [i_2] [i_1]))))) : (((/* implicit */int) arr_13 [i_1 + 1] [(short)8] [i_1 - 1] [i_1 + 1] [i_1] [i_2] [7ULL]))));
                                var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 2] [i_3 - 2] [i_1])))))) || (((/* implicit */_Bool) (+(arr_14 [5U]))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_9 [i_2]), (arr_9 [i_2])))) && (((/* implicit */_Bool) 0ULL))));
                                var_22 = ((/* implicit */short) (unsigned short)53792);
                                arr_16 [i_0] [i_0] [i_1] [i_4] [i_2] [i_3 + 1] [i_3 + 1] |= ((/* implicit */unsigned short) min((3472398719U), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_4])))) != (((/* implicit */int) (short)-63)))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) min((((/* implicit */unsigned int) (+((+(((/* implicit */int) (signed char)-68))))))), (((var_8) - (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)11744))))))))))));
                /* LoopSeq 2 */
                for (int i_5 = 2; i_5 < 13; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            {
                                var_24 |= ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_5] [i_6] [8] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [10LL] [10LL] [i_0])) : (((/* implicit */int) var_1))))), (max((arr_22 [i_0] [i_5] [i_6]), (var_10))))), (((/* implicit */unsigned long long int) (+(((arr_10 [i_7] [i_6] [2LL] [i_1] [i_0]) >> (((((/* implicit */int) (unsigned short)53792)) - (53774))))))))));
                                var_25 = ((/* implicit */long long int) max((var_25), (max((((((/* implicit */_Bool) 3034033176U)) ? (arr_23 [i_0] [i_1 + 2] [i_1] [i_1 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)21628)) || ((_Bool)0))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_3))));
                }
                for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */short) var_8);
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1])) || (((/* implicit */_Bool) 405694215)))))) / (((3472398703U) % (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)11735)) % (((/* implicit */int) (short)3627)))))))))));
                                arr_30 [i_10] [i_9] [i_8] [i_1 - 2] [i_0] &= ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned short)15))))) != (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_6 [i_10] [i_0] [i_10]))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) var_11))));
                }
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        {
                            var_30 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)49044)) : (var_13)))) && (((/* implicit */_Bool) min((-145946850), (((/* implicit */int) arr_28 [i_1 - 2] [i_1 + 2] [i_1] [i_1] [(short)0] [i_1 - 2] [i_1 - 1])))))));
                            var_31 |= ((/* implicit */short) ((int) ((int) var_12)));
                        }
                    } 
                } 
            }
        } 
    } 
}
