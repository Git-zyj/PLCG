/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28475
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)20862)) * (((/* implicit */int) (signed char)97)))), (((/* implicit */int) var_6))))) ? ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)44673)) : (((/* implicit */int) (short)-12863)))))) : (((/* implicit */int) ((((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) (unsigned char)99)) - (99))))) != (((((/* implicit */int) (unsigned short)44665)) + (((/* implicit */int) (unsigned short)65535)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_10 [i_4] [i_3] [i_3] [i_1 + 1] [i_1 + 1] [i_3] [i_0] = ((/* implicit */long long int) (_Bool)1);
                                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_7 [i_3] [i_1 - 1] [i_3] [i_3])))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(unsigned short)11])) ? (((/* implicit */int) (signed char)-32)) : (arr_3 [i_2])))), (8318710759557075969ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_3])))));
                                arr_11 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) arr_4 [i_0])))) ? ((+(((/* implicit */int) (unsigned short)60127)))) : (((/* implicit */int) (unsigned short)20841))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_12 *= ((/* implicit */unsigned long long int) (_Bool)1);
                                var_13 |= ((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_1] [i_0] [i_5 + 1]))));
                                var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */int) arr_14 [i_6] [(signed char)16] [i_2] [(unsigned char)12] [7])) : (-239027404)))))) ? (((/* implicit */int) arr_4 [i_6])) : (((/* implicit */int) arr_2 [1U] [i_2]))));
                                var_15 = ((/* implicit */signed char) min((((/* implicit */int) max((arr_12 [i_5] [i_1 + 1] [i_5 - 1]), (arr_12 [i_5] [i_1 - 1] [i_5 - 1])))), (((((/* implicit */int) (signed char)-20)) * (((/* implicit */int) (unsigned short)20845))))));
                                var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_2]))))) ? (max((((((/* implicit */_Bool) -2268705915588973281LL)) ? (((/* implicit */int) (unsigned short)5398)) : (((/* implicit */int) (signed char)44)))), (((/* implicit */int) (unsigned short)46094)))) : (((/* implicit */int) arr_15 [4U] [i_0] [i_6]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            arr_20 [i_2] [i_1] [i_2] [i_7] |= ((/* implicit */signed char) ((min((4ULL), (((arr_6 [i_8] [i_7] [i_7] [(signed char)18] [i_0]) + (arr_5 [i_2] [i_1] [1]))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) arr_12 [i_7] [i_1] [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 + 1])))))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)10793)) ? (((/* implicit */int) ((-8641320837143524386LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-44)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-13718)), ((unsigned short)60694))))))) | (3346870546150490451ULL)));
                            var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_8 [i_0]), ((unsigned short)19843)))) ? (arr_6 [i_0] [i_8] [i_8] [i_1 + 1] [i_8]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65534))))))) * ((((+(arr_6 [i_0] [i_0] [i_2] [i_0] [i_0]))) / (((/* implicit */unsigned long long int) max((arr_13 [i_2] [i_1 + 2] [i_1 + 2]), (((/* implicit */long long int) arr_17 [i_0])))))))));
                            arr_21 [i_8] [i_8] [i_7] [i_7] = (((!(arr_2 [i_7] [i_7]))) ? (((/* implicit */unsigned long long int) arr_9 [i_2])) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)44665))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_8 [i_0])), (225824688U)))) : (arr_6 [i_1] [i_1 + 2] [i_2] [i_1] [i_2]))));
                            var_19 -= ((/* implicit */unsigned short) ((arr_7 [i_0] [i_1 + 2] [(signed char)6] [i_0]) ^ (min((((/* implicit */unsigned int) (unsigned short)17092)), (arr_7 [i_7] [i_1 - 1] [i_1] [i_7])))));
                        }
                        arr_22 [i_0] = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (+(-221059361)))), (((((/* implicit */_Bool) arr_13 [i_0] [i_1 - 1] [i_0])) ? (((/* implicit */unsigned int) arr_9 [i_1])) : (2362654629U))))), (((/* implicit */unsigned int) (unsigned short)19837))));
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_1 [i_0];
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 2178063688U)) ? (2362654629U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7]))))) > (((((/* implicit */unsigned int) ((/* implicit */int) (short)12882))) / (722475016U))))))) % (((max((((/* implicit */unsigned long long int) (short)-12883)), (arr_0 [i_1] [i_1]))) << (((/* implicit */int) arr_16 [i_1 + 2] [i_1 + 2] [i_2] [i_1 + 2] [11LL] [11LL]))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        var_21 = arr_14 [i_9] [i_1 + 1] [i_1 + 1] [i_0] [i_0];
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))) : (arr_6 [i_2] [i_2] [i_2] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)241)) ? (221059360) : (647505788))) : (((/* implicit */int) ((arr_5 [i_0] [i_0] [i_0]) <= (((/* implicit */unsigned long long int) max((1384684554U), (((/* implicit */unsigned int) (_Bool)0))))))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2024124288)) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 + 1]))) / (((/* implicit */int) (signed char)95))));
                            arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_26 [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 2]), (arr_26 [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 2])))), (((((/* implicit */_Bool) arr_26 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) arr_26 [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) arr_26 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 1]))))));
                            var_24 -= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)44673))));
                        }
                        for (unsigned int i_12 = 2; i_12 < 18; i_12 += 2) 
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)45)) || (((/* implicit */_Bool) arr_17 [(unsigned char)5])))) && (((/* implicit */_Bool) arr_7 [i_10] [i_1 + 2] [i_12 + 1] [i_12 + 1])))) ? (arr_7 [i_10] [i_1 + 1] [(unsigned char)2] [i_10]) : (arr_31 [(short)17] [i_1] [i_1 + 1] [(unsigned short)11] [10ULL])));
                            arr_38 [i_0] [i_0] [(unsigned short)10] [(unsigned short)10] [i_12] = -2024124289;
                        }
                        for (signed char i_13 = 2; i_13 < 18; i_13 += 4) 
                        {
                            var_25 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(arr_3 [12ULL])))) && (arr_2 [(signed char)12] [(signed char)12]))))));
                            var_26 = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                            arr_43 [(signed char)0] [i_1] [i_2] [7ULL] [i_10] [7ULL] &= ((/* implicit */signed char) (~(639449771U)));
                        }
                        arr_44 [i_0] [10ULL] [i_0] [i_0] = ((/* implicit */_Bool) min((-2579592086580587986LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_10])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_12 [i_0] [i_2] [i_10])))))));
                        var_27 = ((/* implicit */signed char) arr_4 [i_1]);
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_9 [i_1 + 2]) << (((((/* implicit */int) (unsigned short)58568)) - (58567)))))) <= (arr_29 [i_0] [i_2] [i_2])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1 + 1])) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-46)), ((unsigned char)115))))))))))));
                    }
                    arr_45 [i_0] [i_0] [14LL] = ((/* implicit */_Bool) max(((((+(-4130220389154760509LL))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_2] [i_2] [i_0] [i_0] [i_0])))))))), (min((arr_13 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)19391)))))))));
                    /* LoopNest 2 */
                    for (long long int i_14 = 2; i_14 < 18; i_14 += 2) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_29 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) (signed char)26))) ^ (arr_27 [i_0] [i_0] [i_2] [i_0] [i_15] [i_15])))))), (min(((+(arr_5 [i_0] [i_0] [14ULL]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1])) ? (3701634967U) : (((/* implicit */unsigned int) 221059361)))))))));
                                arr_54 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_14] [7LL] = ((/* implicit */short) ((max((arr_39 [i_1 + 1] [i_14 - 2] [i_14 + 1] [i_15]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_36 [i_0] [10ULL] [i_1 + 1] [i_2] [(unsigned short)1] [i_14] [i_15])) : (((/* implicit */int) arr_42 [10U] [i_14] [i_2] [15U] [i_0]))))))) | (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)60175)) % (((/* implicit */int) (signed char)64)))) % (((/* implicit */int) (signed char)46)))))));
                                var_30 = ((/* implicit */unsigned short) ((max((-7482241881142891376LL), (((/* implicit */long long int) ((4026253445U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20863)))))))) > (((/* implicit */long long int) max((arr_17 [i_2]), (((/* implicit */unsigned int) arr_18 [i_14] [i_1] [i_14 + 1] [i_1 - 1] [i_14])))))));
                                var_31 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2134662524U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) : (2134662517U)));
                                var_32 += ((/* implicit */unsigned int) max((arr_13 [i_2] [i_0] [i_2]), (((/* implicit */long long int) ((arr_16 [i_15] [i_0] [0U] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (signed char)-63)) : (min((((/* implicit */int) (unsigned char)198)), (-2024124311))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
