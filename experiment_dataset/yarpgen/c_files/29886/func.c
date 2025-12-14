/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29886
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (var_11)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_13))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_15);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max(((unsigned char)82), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])))))));
                                var_19 = ((/* implicit */_Bool) max((((signed char) (+(0LL)))), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)65532)))))));
                                arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] [i_4] &= ((/* implicit */signed char) ((((/* implicit */int) max(((signed char)-17), (((/* implicit */signed char) arr_10 [i_0] [i_3 - 2] [i_0] [i_3 - 3] [i_3 - 2] [i_3 - 3]))))) << ((((-(((/* implicit */int) var_14)))) + (32)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((8388608), (((/* implicit */int) (signed char)-109)))))));
    var_21 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned short i_5 = 3; i_5 < 10; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            {
                arr_24 [i_5] [i_5] = (!(((/* implicit */_Bool) max((((/* implicit */int) var_6)), (arr_0 [i_5 - 1])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        var_22 = ((arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_6] [i_5 - 1] [i_5 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4622))) : (arr_22 [i_5]));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))) : (var_11)))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        arr_34 [i_5] [i_5] [i_7] [i_9] = ((/* implicit */_Bool) max((max((max((((/* implicit */unsigned long long int) (signed char)-97)), (0ULL))), (((/* implicit */unsigned long long int) (signed char)-18)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (arr_32 [i_5 - 1] [i_5 - 3] [i_5] [i_5] [i_7] [i_9])))) && (((/* implicit */_Bool) var_14)))))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-54)) + (77)))));
                        var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)59)))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4622)) ? (var_9) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) var_9)) ? (-1320485119) : (0))) : (arr_25 [i_5])))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        arr_37 [i_6] [i_6] [i_7] [i_6] |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))) | (arr_1 [i_5 + 1] [i_5 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)111)) ? (((((/* implicit */int) (unsigned short)60913)) << (((((/* implicit */int) (unsigned char)124)) - (115))))) : (((/* implicit */int) ((_Bool) arr_20 [i_6] [i_10]))))))));
                        arr_38 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) ((1353079077U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 3] [i_5 - 1] [i_5 - 2])))))) * (-1393578150)));
                        var_26 = max((min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)8)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (min((arr_26 [i_5 - 2] [i_6] [i_7] [i_7]), (var_7))) : (((var_12) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) arr_10 [i_5 + 1] [i_5 + 1] [i_7] [i_7] [i_10] [i_5 + 1]))))))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (max((((/* implicit */unsigned long long int) arr_1 [i_5 + 1] [i_5 - 1])), (2267078691078478583ULL))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])))))))));
                        var_28 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 8574808198759281541ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_5 - 2] [i_5 - 2])))), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_4 [i_5 - 2] [i_5 - 2])) : (((/* implicit */int) var_6))))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) var_6);
                }
            }
        } 
    } 
}
