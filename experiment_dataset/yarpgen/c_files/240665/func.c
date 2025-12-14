/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240665
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
    for (int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] [(_Bool)1] [i_2] [12] = ((/* implicit */int) arr_0 [i_2]);
                            var_13 += ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) 2147483647)) : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2147483644))))))))));
                            arr_12 [0U] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) (-(max((847052826), (2147483647)))))) ? (427488401U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) var_11)) : (arr_6 [i_0] [i_0] [i_2])))) ? (((((/* implicit */_Bool) 2147483630)) ? (((/* implicit */int) (short)-23859)) : (((/* implicit */int) arr_4 [i_3] [i_3])))) : (((/* implicit */int) (signed char)127)))))));
                            var_14 = ((/* implicit */short) min((min((((/* implicit */unsigned int) (-(1892211272)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) 2147483647)) : (846007825U))))), (((/* implicit */unsigned int) min((max((2147483644), (((/* implicit */int) (short)7164)))), (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] = ((/* implicit */int) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) -825462209)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (1460760310U)))), ((~(arr_10 [i_1] [(signed char)16] [i_0] [i_0] [i_1]))))), (((/* implicit */long long int) 706980138))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) arr_1 [i_1])))) ? (((/* implicit */int) (unsigned short)63712)) : (((/* implicit */int) ((unsigned short) -1649176445)))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_22 [i_1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_6]))))) : (((long long int) ((4755538930505939957LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_1]))))))));
                                var_16 = ((/* implicit */int) max(((((((_Bool)0) ? (2719522164736104272ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67))))) + (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) -1277543825)) : (arr_18 [i_1] [i_4]))))), (((/* implicit */unsigned long long int) max((((int) arr_1 [i_1])), (min((arr_14 [i_1] [i_4] [i_1] [i_6]), (arr_9 [i_0] [i_1] [i_5] [i_1]))))))));
                                arr_23 [i_0 + 2] [i_1] [i_4] [i_5] [i_5] [i_6] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_5 [i_1]) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_4] [i_5] [i_6] [13U])))), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(unsigned short)10] [i_0 - 2])))))));
                                arr_24 [i_0] [i_6] &= ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) ((int) arr_1 [i_0 + 1]))), (((unsigned int) arr_0 [i_1]))))), (max((((/* implicit */long long int) 724303009U)), (min((arr_21 [i_0 - 1] [i_1] [i_4] [i_5] [(unsigned short)12]), (((/* implicit */long long int) -450166429))))))));
                                arr_25 [i_1] [i_0] [i_4] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 846007832U)) ? (((5377405104842560102ULL) ^ (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0 + 1] [(unsigned short)7] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180)))));
                            }
                        } 
                    } 
                } 
                var_17 += ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) 3118236992444245074LL))))), (min((((/* implicit */short) var_10)), ((short)-10764)))))), (max((-3118236992444245075LL), (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)47912)), (75657956))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_2);
    var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((((/* implicit */long long int) 2047)), (var_5)))) ? (((/* implicit */int) ((_Bool) var_7))) : (var_1))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)221))))))))));
    var_20 &= ((/* implicit */signed char) min((-1699908224), (((/* implicit */int) (unsigned char)34))));
}
