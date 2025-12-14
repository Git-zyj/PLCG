/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39520
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    var_11 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))) ? (var_10) : (4942599318893371661ULL)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)59343)) / (((/* implicit */int) arr_9 [i_4 - 1] [i_2 + 3] [i_4 - 1] [i_3 + 1] [i_2 + 3]))));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((arr_3 [i_4] [i_1]) == (((/* implicit */int) (unsigned short)45754))));
                                arr_13 [i_0] [i_1] [i_3] [i_3 + 2] [i_0] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2 - 2] [i_2 - 3] [i_2 + 1] [i_2 + 2]))) > (((15678156712880330767ULL) - (((/* implicit */unsigned long long int) 959255513U))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    var_13 += ((/* implicit */int) ((_Bool) (unsigned short)44705));
                    var_14 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (unsigned short)10471)) - (((/* implicit */int) (short)-31473)))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20827))) : (var_7)));
                        arr_21 [i_0] [i_1] [i_6] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) (short)-2237)))));
                        var_16 *= ((/* implicit */_Bool) ((unsigned int) arr_4 [i_7] [i_6] [i_0] [i_0]));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 2) 
                    {
                        arr_24 [i_1] [i_6] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) (unsigned short)44696)))));
                        arr_25 [i_0] [i_1] [i_6] [(signed char)20] &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)20827)) >> (((arr_20 [i_0] [i_1] [i_6] [i_8 - 1] [i_8]) - (6906207094323127041LL)))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        arr_29 [(signed char)20] &= ((/* implicit */signed char) ((unsigned int) arr_8 [i_0]));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1] [i_1])) & (((/* implicit */int) var_1))))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))) : (var_4)))));
                        arr_30 [i_6] [i_6] [i_6] [(signed char)10] [i_6] &= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)55065)) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_5)))));
                        var_18 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)27497)) : (((/* implicit */int) (short)24576)))));
                    }
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)113)) ? (3888882398919387122LL) : (((/* implicit */long long int) 1073479680U))))))));
                                arr_39 [i_11] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */unsigned short) ((short) var_0));
                            }
                        } 
                    } 
                }
                for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    arr_42 [i_0] [20ULL] [i_12] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-27300)))))) ? (((((/* implicit */_Bool) -2147483631)) ? (((/* implicit */unsigned long long int) 31)) : (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_1] [i_12])) + (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_12])))))))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_12])) ? (((var_7) >> (((-1397287853) + (1397287884))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-29554))))) : (((((/* implicit */_Bool) (short)-29034)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) % (((/* implicit */int) arr_40 [i_12] [i_1] [i_12] [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)20835)) ? (arr_14 [i_0] [i_1] [i_12]) : (arr_34 [i_12])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 2; i_13 < 19; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 13226060679997795528ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16383))) : (11352387699282131977ULL))))));
                                var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_1] [12ULL] [i_13]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11538)))))) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) (short)2143))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (short)-26688)) ? (((/* implicit */int) (unsigned short)44700)) : (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0]))))) : (((((((/* implicit */_Bool) (unsigned short)20827)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_14] [i_1] [i_1]))) : (17177169864148271460ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)27051)) : (((/* implicit */int) (signed char)10)))))))));
                                arr_48 [i_14] [i_14] [i_0] [i_12] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) arr_31 [i_13 + 1] [i_13 - 1] [i_13 + 1])))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)65528))))) || (((/* implicit */_Bool) ((short) arr_2 [i_1])))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)0))))) || (((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) var_10))))));
                }
                var_23 *= ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0])) / (67100672)))) ? (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551615ULL))) : (((((/* implicit */_Bool) var_2)) ? (1090921693184ULL) : (((/* implicit */unsigned long long int) arr_36 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1] [(short)6])))));
                var_24 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-16392)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1524893084U))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (signed char)-1)))) >= (((((/* implicit */int) (short)-5201)) + (((/* implicit */int) (unsigned short)65531))))))))));
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-20)) : (-889003556)))) / (((((/* implicit */_Bool) (short)-32764)) ? (var_10) : (arr_4 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) ((unsigned short) (signed char)113))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
            }
        } 
    } 
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (unsigned short)36754)) : (1558974847)));
}
