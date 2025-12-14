/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191723
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
    var_14 = ((/* implicit */int) var_10);
    var_15 += ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_1] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (arr_3 [i_0] [i_1] [i_1])))) ? (min((((/* implicit */unsigned int) (signed char)-52)), (arr_2 [i_0] [i_1]))) : (arr_2 [i_1] [i_0]))), (((/* implicit */unsigned int) ((((arr_1 [i_1]) | (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (unsigned char)3)))))));
                arr_5 [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) + (arr_2 [i_0] [i_1])))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_1])), (((((/* implicit */_Bool) (signed char)18)) ? (18298097388852667965ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (arr_3 [i_0] [i_1] [i_1])));
                var_16 += ((/* implicit */unsigned char) min((max((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_1] [i_1] [i_1]))), (min((((/* implicit */unsigned long long int) arr_0 [i_1])), (arr_3 [i_0] [i_1] [i_1])))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_10 [(unsigned short)10] [i_1] [i_2] [i_3] [i_1]);
                                var_17 += ((/* implicit */signed char) max((((79794536) / (((/* implicit */int) arr_6 [i_3] [i_1] [i_3])))), (((((/* implicit */int) arr_7 [(signed char)6] [i_3 + 1] [i_2 + 1])) * (((/* implicit */int) arr_7 [i_3] [i_3 - 1] [i_2 - 1]))))));
                                var_18 |= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]);
                                arr_13 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((int) arr_0 [i_4])) / (min((((/* implicit */int) (unsigned char)232)), (-1503968743)))))) ? (((/* implicit */int) arr_10 [i_4] [i_0] [13ULL] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)252)) || (((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 + 1] [i_4])))))));
                                var_19 = min((((((/* implicit */_Bool) arr_1 [i_3 - 2])) ? ((~(((/* implicit */int) (unsigned char)192)))) : (((/* implicit */int) arr_10 [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_3 - 3])))), (((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3] [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 1] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_3 + 1] [i_1] [i_2 + 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_7);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((12846828720271569536ULL) | (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) (unsigned char)237)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */int) (signed char)91))))) ? (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */int) (unsigned short)34970)))) : (((/* implicit */int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) var_1))))))))) : (((((/* implicit */_Bool) min((2LL), (((/* implicit */long long int) var_10))))) ? (min((6676899358434355756LL), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0))))))));
}
