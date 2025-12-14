/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47306
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) max((arr_1 [i_0] [i_1 + 1]), (((/* implicit */long long int) ((((unsigned int) arr_0 [i_0])) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1 + 1] [i_1]))))))));
                var_20 = ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) * (((arr_1 [i_1 - 1] [i_1 - 1]) / (((long long int) (unsigned char)60)))));
                arr_5 [i_0] [i_1 + 1] |= ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) (short)28463))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63))) : (arr_3 [i_0] [i_1 + 2])))));
                arr_6 [i_1 + 2] [i_1] = ((/* implicit */unsigned short) (((-((-(144115188042301440LL))))) % (((/* implicit */long long int) var_10))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_0] [i_1] [i_3] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(arr_10 [i_0] [i_1] [i_1 + 2] [i_2] [i_3] [i_4])));
                                var_21 &= ((/* implicit */long long int) (short)28463);
                                arr_15 [i_0] [i_1] [i_4] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (unsigned char)174)))), ((~(((/* implicit */int) (signed char)5))))));
                                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 1])) ? (arr_12 [i_1] [i_1 + 1] [i_1 + 1]) : (arr_12 [i_1 + 3] [i_1 + 1] [i_1 - 1]))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)37))));
                                arr_19 [i_1] [i_1 - 1] [i_1] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)69)) <= (((/* implicit */int) (signed char)17))))) <= (((((/* implicit */_Bool) arr_16 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_3] [i_5])) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (unsigned char)174)))))) ? (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_1 [i_2] [i_3]))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)196))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)5271)) != (((/* implicit */int) (signed char)-118)))))) : (2556770275U))))));
                            }
                            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                            {
                                var_23 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) -244308393950538770LL)) ? (-5986636521884679118LL) : (((((/* implicit */_Bool) 867796399U)) ? (4391516707907519126LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))))));
                                arr_22 [i_1] [i_3] [i_2] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 14713334783203391203ULL))))) << (((min((((/* implicit */long long int) (signed char)-5)), (((((/* implicit */_Bool) arr_12 [i_1 + 3] [i_1 + 3] [i_1 + 3])) ? (var_0) : (8602530655556599248LL))))) + (12LL)))));
                                arr_23 [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-15322))))))))) : ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)59384))) != (-244308393950538780LL))))))));
                            }
                            arr_24 [i_0] [i_1] = max((arr_3 [i_3] [i_1 + 3]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_1] [i_1 - 1] [i_1 + 2])) : (((/* implicit */int) (unsigned short)6164))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 -= ((/* implicit */unsigned char) ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
}
