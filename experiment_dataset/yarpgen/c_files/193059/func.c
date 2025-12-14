/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193059
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [0LL] = ((/* implicit */signed char) var_18);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (unsigned short)65535);
                                var_21 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60351)) ? (((/* implicit */unsigned long long int) var_1)) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)5193), (var_13))))) : (arr_11 [i_1 + 2] [i_1 + 1] [i_1 - 2] [i_1 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -41149164878421224LL)) ? (9223372036854775794LL) : (var_11))) < (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_2] [i_1])) ^ (((/* implicit */int) (_Bool)1))))))))) : (max((((/* implicit */long long int) min((((/* implicit */unsigned int) 511)), (arr_7 [i_0] [i_0] [i_0])))), (5857416668739995329LL)))));
                                arr_16 [13ULL] [i_3] [i_2] [i_2] [1LL] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_4]);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) 41149164878421207LL)) ? (0ULL) : (((/* implicit */unsigned long long int) 2018855460)));
                    arr_18 [i_2] [i_0] = (-(min(((-(arr_11 [i_0] [i_1 + 3] [i_0] [i_2]))), (((/* implicit */unsigned int) -1)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            {
                arr_25 [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) 3762488595U)), (-2775711528419386220LL)))) ? (arr_3 [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) ((288230376151711744LL) > (((/* implicit */long long int) arr_12 [i_5] [i_5] [10LL] [i_6] [i_6]))))))))));
                arr_26 [i_5] = ((/* implicit */unsigned short) min((-288230376151711735LL), (((/* implicit */long long int) var_13))));
                var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5] [i_6]))) <= (min((((/* implicit */unsigned int) 6)), (arr_8 [i_5]))))))) <= (max((((((/* implicit */_Bool) arr_2 [i_6])) ? (1163369825510926665ULL) : (((/* implicit */unsigned long long int) arr_7 [i_5] [i_6] [i_5])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14236874238758853332ULL)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11068))))))))));
            }
        } 
    } 
}
