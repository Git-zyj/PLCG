/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23259
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_0 - 1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) 4294967286U);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((int) (signed char)82))), (17179869183LL)));
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) arr_1 [13U]))));
                            }
                        } 
                    } 
                    arr_11 [i_2] [i_1] [(short)5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) 4678238907821035443ULL)) ? (12656981858550952828ULL) : (((/* implicit */unsigned long long int) min((-19LL), (((/* implicit */long long int) (signed char)-64)))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            arr_16 [i_2] [i_6] [i_5] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)65524)) >> (((2147467264U) - (2147467251U)))))))), (((((/* implicit */_Bool) 36024398972452864ULL)) ? (36024398972452865ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61440)))))));
                            var_15 = ((/* implicit */short) 8185178429133863093ULL);
                        }
                        arr_17 [i_0] [i_0] [i_0 - 1] [i_2] [i_2] [i_5] = ((/* implicit */long long int) min((((unsigned int) arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_2])), (((/* implicit */unsigned int) arr_7 [i_0 - 1] [13U] [i_0 - 1] [i_0] [i_0 - 1] [(_Bool)1]))));
                        arr_18 [i_2] [i_0 - 1] [8U] [5U] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) (short)25878);
                        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(252U)))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0] [(signed char)10] [i_0 - 1])))))));
                        arr_19 [i_2] [i_2] = ((/* implicit */int) arr_4 [(signed char)9] [i_5]);
                    }
                    for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) 13123213049292209321ULL))));
                        var_18 = ((/* implicit */long long int) 13768505165888516173ULL);
                        var_19 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)255)), (max((((((/* implicit */_Bool) 4678238907821035427ULL)) ? (13768505165888516176ULL) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) 1U))))))));
                    }
                }
                var_20 *= ((/* implicit */unsigned long long int) var_10);
            }
        } 
    } 
    var_21 = max((var_12), (4678238907821035449ULL));
    var_22 = ((/* implicit */signed char) var_8);
    var_23 = ((/* implicit */unsigned long long int) var_4);
    var_24 = max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned long long int) -567817907704230665LL)) : (var_0))));
}
