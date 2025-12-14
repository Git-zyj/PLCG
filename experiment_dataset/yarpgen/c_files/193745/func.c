/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193745
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_4)) <= (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (3591271921U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 240))))))));
    var_17 += ((/* implicit */long long int) var_9);
    var_18 = ((/* implicit */unsigned int) var_13);
    var_19 *= ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 *= ((signed char) (((+(var_11))) % (((/* implicit */unsigned int) var_4))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_6 [i_0] [(signed char)9] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) var_5)))));
                    var_21 ^= ((/* implicit */signed char) ((arr_1 [i_1] [i_1]) == (((/* implicit */long long int) (((-(239))) + ((-(-240))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) max((703695374U), (268435448U)));
                        var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) -303211965798587882LL)) ? (((/* implicit */long long int) 411918235)) : (-303211965798587882LL))) <= (((/* implicit */long long int) max((((/* implicit */int) (signed char)16)), (411918235))))));
                        arr_10 [i_1] [i_1] [i_1] [8LL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -303211965798587882LL)) ? (arr_3 [i_3 + 1] [i_3 - 2]) : (arr_3 [i_3 - 3] [i_3 - 2])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_3 + 1] [8LL] [i_3] [i_3 - 1] [i_3 - 1])) - (((/* implicit */int) arr_8 [i_3 + 2] [i_3 + 2] [i_3] [i_3 - 1] [i_3 + 2]))))) : (var_10)));
                        var_24 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (((((var_11) <= (arr_3 [i_1] [i_1]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [11LL] [(unsigned char)4])) & (((/* implicit */int) var_13))))) : (var_10)))));
                    }
                    var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0] [i_0]))) <= (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_2]))))), (((16191333829654655157ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                }
                arr_11 [i_1] |= ((/* implicit */unsigned char) ((arr_7 [i_1] [i_0] [i_1] [i_1]) % (((/* implicit */unsigned long long int) (+(max((arr_1 [i_0] [3LL]), (-7064992843841867836LL))))))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 3; i_4 < 12; i_4 += 2) 
                {
                    var_26 -= ((/* implicit */unsigned int) ((unsigned char) (unsigned char)52));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_6] [9] [i_0] [i_0] [(signed char)6] = ((/* implicit */unsigned int) ((((min((16191333829654655157ULL), (((/* implicit */unsigned long long int) var_3)))) - (((unsigned long long int) 9223372036854775807LL)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 131072U)) ? (((/* implicit */long long int) (+(arr_3 [i_6 - 3] [i_1])))) : (arr_4 [i_0] [i_4] [i_6]))))));
                                arr_22 [4U] [i_1] [i_6] [i_5] [i_6 - 1] [(signed char)0] [i_0] |= var_1;
                                arr_23 [i_0] [1ULL] [i_0] [1ULL] [i_6] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)-22)) ? (2578598051825597935LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226))))), (((/* implicit */long long int) arr_0 [i_5]))));
                                var_27 += ((/* implicit */unsigned long long int) ((703695404U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23)))));
                            }
                        } 
                    } 
                }
                arr_24 [i_0] = var_1;
            }
        } 
    } 
}
