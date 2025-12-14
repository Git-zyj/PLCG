/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228666
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
    var_10 += ((/* implicit */unsigned long long int) (unsigned short)25250);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (min((var_4), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_4] [i_1] [i_2])) >= (arr_11 [i_1 + 3] [i_3] [i_4])))) : (min((1683774434), (((/* implicit */int) (_Bool)1))))))) : (min((5238266002913326099ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))));
                                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (-(min((((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])) / (18446744073709551611ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)41995)) : (((/* implicit */int) (unsigned short)7672))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_2] [i_2] [i_2 - 2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_1] [i_2 - 1])) * (((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))) : ((+(1375666203U)))));
                                var_14 ^= ((/* implicit */unsigned long long int) var_6);
                                var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2 - 3] [i_0] [i_2 - 3] [i_1]))))) && (((/* implicit */_Bool) min(((unsigned char)63), ((unsigned char)254))))));
                                var_16 = ((((/* implicit */int) ((unsigned short) (unsigned char)193))) >> (((max((((((/* implicit */_Bool) 2706789865U)) ? (9939487087447923090ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7685))))), (((/* implicit */unsigned long long int) var_9)))) - (9939487087447923059ULL))));
                            }
                        } 
                    } 
                    var_17 &= ((((((/* implicit */_Bool) 4008875183U)) ? (arr_10 [i_1 + 1] [i_1 + 3] [i_1 - 1] [i_2 - 3]) : (((/* implicit */int) var_8)))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max(((unsigned short)57850), ((unsigned short)2)))) : ((+(((/* implicit */int) (unsigned short)1023)))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 1; i_7 < 9; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            {
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)64527))));
                                arr_23 [i_8] [i_1] [i_7] [i_7] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+(18446744073709551615ULL)));
                                var_18 = arr_10 [i_1] [i_1] [i_2] [i_7 + 4];
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) var_5)), (262143ULL)))))) / (((((/* implicit */_Bool) var_3)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)78)) || (((/* implicit */_Bool) var_5))))))))));
}
