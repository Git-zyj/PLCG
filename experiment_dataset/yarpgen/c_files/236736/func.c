/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236736
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
    var_17 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) ? ((~(((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) : (arr_3 [i_0] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [5LL])))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_2 [i_0] [i_0]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2143289344U)) ? (2143289344U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3)))))) ? (((((/* implicit */unsigned long long int) 2151677922U)) | (arr_3 [i_0] [i_0] [1U]))) : (((((/* implicit */_Bool) 2143289327U)) ? (18446744073709551589ULL) : (arr_4 [i_0]))))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) (-(arr_16 [i_2] [i_2 + 2] [i_3 - 1] [i_3] [i_4])))) ? (arr_16 [i_1] [i_2 + 1] [i_3 + 1] [i_1] [i_4]) : (((((/* implicit */unsigned long long int) 2143289327U)) | (arr_16 [i_2 - 1] [i_2 + 1] [i_3 + 1] [i_4] [(unsigned short)3]))));
                                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) : (2143289344U)))) ? (((((/* implicit */_Bool) 2151677969U)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0])) != (((/* implicit */int) (unsigned char)0))))))) > (((/* implicit */int) arr_7 [i_1 + 1]))));
                            }
                        } 
                    } 
                } 
                var_22 *= ((/* implicit */signed char) max((((((2143289330U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)16128))))) == ((-(arr_11 [i_1 + 3] [i_1] [(signed char)5]))))), (((max((arr_15 [i_1] [(unsigned short)8] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)8)))) > ((((_Bool)1) ? (arr_16 [i_0] [(signed char)6] [i_1 + 3] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 4294967281U))))))));
            }
        } 
    } 
    var_23 |= ((/* implicit */_Bool) max((((max((var_4), (((/* implicit */unsigned long long int) (signed char)-7)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) ? (var_10) : (var_11)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
}
