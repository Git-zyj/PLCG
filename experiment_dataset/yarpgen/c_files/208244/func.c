/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208244
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
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) (!(((((/* implicit */_Bool) ((18446744073709551599ULL) | (((/* implicit */unsigned long long int) arr_6 [i_0] [i_3] [i_4]))))) && (((/* implicit */_Bool) ((long long int) arr_2 [(signed char)18])))))));
                                var_19 -= ((/* implicit */unsigned short) min((((((18446744073709551599ULL) % (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [6U] [i_3])))) | (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_9 [i_0 + 1] [i_4 - 1] [i_4])), (-428163480))))));
                                var_20 += max((((((/* implicit */_Bool) 428163470)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3923468677U))), ((-(arr_5 [i_0 - 2]))));
                                arr_18 [i_4] [i_1] = ((/* implicit */int) var_17);
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */long long int) max((32505856), (((/* implicit */int) arr_13 [i_4] [i_4] [i_4 + 1] [i_4] [i_4] [i_4]))))) : (min((((((/* implicit */_Bool) var_15)) ? (5026743690294258682LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [7LL] [i_2] [(unsigned short)9] [i_4 - 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (896) : (-538341339))))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (arr_5 [i_1])))) : (max((((1080863910568919040LL) / (var_12))), (((/* implicit */long long int) arr_6 [i_0 - 1] [i_0] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_5 = 3; i_5 < 20; i_5 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((var_15) % (((/* implicit */int) arr_20 [i_5] [i_5])))))) ? (arr_22 [i_5] [i_5]) : (((/* implicit */long long int) (+(arr_21 [i_5 - 1]))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((-8813409617605095255LL), (((/* implicit */long long int) (unsigned short)16352))))))) ? (-428163480) : ((~(428163496))))))));
        var_24 = ((/* implicit */_Bool) 4294967289U);
    }
    for (int i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                {
                    var_25 = ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) var_6)) : (8813409617605095262LL)))) || (((/* implicit */_Bool) min((arr_2 [i_7]), (var_3)))));
                    var_26 = (~(arr_28 [i_6]));
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 1551858049)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (2736103923U) : (((/* implicit */unsigned int) arr_29 [i_8] [i_8] [i_8] [i_9]))))))))));
                                arr_36 [i_9] [i_9] [i_8] [i_7] [i_8] &= ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((min((var_5), (min((((/* implicit */int) arr_8 [i_6] [i_6] [i_9] [i_9])), (arr_26 [(unsigned short)6]))))) + (1932895668)))));
                                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (+(((unsigned int) arr_32 [i_6] [i_6] [i_6] [i_6] [4LL] [i_6])))))));
                                var_29 = ((/* implicit */int) (-(max((((((/* implicit */_Bool) arr_32 [i_10] [i_9] [i_8] [i_8] [i_7] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-36))) : (arr_22 [i_8] [i_7]))), (((/* implicit */long long int) ((arr_16 [i_6] [i_7] [i_8] [i_9]) % (var_0))))))));
                                var_30 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)75)), (((((/* implicit */unsigned long long int) -396851444)) - (var_17)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_31 -= (+((-((~(((/* implicit */int) (_Bool)1)))))));
                                var_32 = ((/* implicit */long long int) arr_33 [i_6] [3U] [i_8] [i_11] [i_11]);
                                var_33 = ((/* implicit */long long int) min((var_33), (((min((((/* implicit */long long int) ((((/* implicit */_Bool) 1835008U)) ? (3957675686U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), ((+(var_7))))) | (((/* implicit */long long int) ((int) 7746767015675533048LL)))))));
                                var_34 &= ((unsigned int) -568405077545580633LL);
                            }
                        } 
                    } 
                    arr_43 [i_6] [i_8] [i_8] = ((int) ((long long int) 3923468677U));
                }
            } 
        } 
        var_35 &= ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (var_17) : (((/* implicit */unsigned long long int) (-(arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))) + (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6])), (32505868)))), (arr_2 [i_6]))))));
    }
    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 2) 
    {
        var_36 = ((/* implicit */unsigned long long int) 568405077545580634LL);
        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_10)))) | (((/* implicit */int) arr_46 [i_13])))) : (((/* implicit */int) ((_Bool) ((arr_45 [(signed char)20]) % (var_7))))))))));
        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (+(max((1460445807343831606LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_46 [i_13])), (2U)))))))))));
    }
    var_39 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_5)), ((+(((unsigned long long int) (_Bool)1))))));
    var_40 = ((/* implicit */int) max((var_40), (min((var_14), (((/* implicit */int) ((((/* implicit */int) (unsigned short)3)) > (1185353203))))))));
}
