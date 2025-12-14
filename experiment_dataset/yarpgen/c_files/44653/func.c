/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44653
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
    var_17 = ((/* implicit */long long int) (unsigned char)255);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)1)) | (((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) var_1))))))), (-960984016661990457LL)));
        var_19 += ((/* implicit */long long int) 1287097157U);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max(((-(var_11))), (((/* implicit */unsigned int) max((arr_8 [i_3 + 3] [i_3] [i_3 + 3] [i_3]), (arr_8 [i_3 - 1] [i_3] [i_3 - 1] [i_3])))))))));
                        arr_10 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */int) var_7);
                        var_21 += ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) (unsigned short)0))), (max((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_3 [i_0] [i_1])))), (min((((/* implicit */int) var_10)), (var_3)))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8904054698104281380LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)65532))));
                            var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 3269332274223885733LL)) ? (((/* implicit */int) arr_1 [i_2] [i_1])) : (((/* implicit */int) (unsigned char)0))))))) : (min((arr_9 [i_3 + 3] [i_3 - 1] [i_3 + 3] [i_3 + 2]), (((/* implicit */long long int) (signed char)-1))))));
                            arr_13 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned long long int) arr_4 [i_2])), (108086391056891904ULL))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1])))))))) ? (((arr_12 [i_3 + 3] [i_3 + 3] [i_3 - 1]) ^ (arr_12 [i_3 + 1] [i_3 + 3] [i_3]))) : ((~((-(((/* implicit */int) var_2))))))));
                        }
                        /* vectorizable */
                        for (short i_5 = 2; i_5 < 17; i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */signed char) (unsigned char)251);
                            var_24 |= ((/* implicit */unsigned char) ((((301175526) != (1073741824))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3 + 2] [i_1] [i_0]))) : (arr_4 [i_1])));
                            var_25 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1] [i_3 + 3] [i_3] [i_1]))));
                        }
                        for (short i_6 = 2; i_6 < 17; i_6 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) (short)16352))))) ? (((unsigned int) arr_14 [i_6 - 2] [i_6 + 1] [i_6 + 1] [i_6] [i_6])) : (((unsigned int) (unsigned char)128)))))));
                            arr_19 [i_0] [i_2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (~(arr_17 [i_6] [i_6] [i_6 + 2] [i_6 + 1] [i_6]))))) >= (((((((((/* implicit */int) arr_2 [i_3] [i_6])) ^ (2020999177))) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) var_0)), (10706360850177826918ULL))) - (10706360850177826892ULL)))))));
                            arr_20 [i_6] [i_0] [i_3] [i_0] [i_6] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(min((arr_15 [i_3] [i_3 + 3] [i_3 - 1] [i_3]), (((/* implicit */unsigned int) arr_8 [i_3 + 2] [i_3 + 3] [i_3 + 2] [i_3]))))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 3) 
                        {
                            arr_23 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-1)), (18338657682652659724ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) 32767LL)) ? (var_11) : (((/* implicit */unsigned int) 152460353))))))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (max((((/* implicit */long long int) var_2)), (0LL))) : (((/* implicit */long long int) ((/* implicit */int) ((-5449030988477147772LL) == (((/* implicit */long long int) 1397271839))))))))) ? (((((/* implicit */int) (unsigned char)39)) ^ (((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) arr_7 [i_7] [i_3] [i_1])) : (275829881))))) : (((((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) <= (((/* implicit */int) arr_5 [i_3]))))) << (((9223372036854775807LL) - (9223372036854775793LL)))))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_14 [i_7] [i_3] [i_3] [i_2] [i_7])))) == (((arr_22 [i_0] [i_1] [i_2] [i_3] [i_7 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113)))))))))))));
                            arr_24 [i_0] [i_3] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) min((max((9223372036854775807LL), (((/* implicit */long long int) (signed char)-56)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_6 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) (short)-13722))))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_8 = 1; i_8 < 12; i_8 += 3) /* same iter space */
    {
        arr_27 [i_8 + 2] |= ((/* implicit */int) ((((0U) < (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_8] [i_8 + 1] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_8] [i_8 - 1]))) : (arr_9 [i_8] [i_8 - 1] [i_8 + 2] [i_8])))) ? (((/* implicit */unsigned int) (~(2147483647)))) : (arr_4 [i_8])))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_3)) & (var_11)))) ? (max((((/* implicit */long long int) var_2)), (16352LL))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-15)) - (((/* implicit */int) var_16)))))))));
        arr_28 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8] [i_8]))) >= (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-24)) * (((/* implicit */int) arr_2 [i_8] [i_8]))))) ? (min((((/* implicit */long long int) var_10)), (arr_9 [i_8 + 1] [i_8 - 1] [i_8] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)55))))))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 1; i_9 < 12; i_9 += 3) /* same iter space */
    {
        var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741823)) ? (((/* implicit */long long int) -2147483638)) : (-9223372036854775807LL)));
        arr_33 [i_9 + 1] [i_9] = ((/* implicit */signed char) ((unsigned int) ((unsigned int) 8388544)));
    }
}
