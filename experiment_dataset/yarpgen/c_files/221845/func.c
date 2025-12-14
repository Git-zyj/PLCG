/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221845
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        arr_11 [i_2] [i_1 - 2] [i_2 + 2] [12] [i_3 - 1] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_3 + 1] [i_2 + 1] [(unsigned short)15] [i_1 + 1])) << ((((-(((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 3])))) - (12874)))));
                        arr_12 [i_2] = (+(((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (unsigned short)44261)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_7 [i_3] [i_2] [i_0] [i_1 + 1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_2] [i_1] = ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) (short)13901)))) ? (((var_8) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21269))) : (arr_4 [i_0] [i_0] [i_2] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-54))))), (((/* implicit */long long int) ((var_9) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2]))))))))));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (max((0ULL), (((/* implicit */unsigned long long int) arr_0 [8ULL])))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) < ((~(((/* implicit */int) arr_10 [i_0] [i_2] [(_Bool)1] [i_3])))))))))))));
                            arr_16 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) max((((int) ((short) arr_3 [i_1 - 2] [(short)5] [(short)5]))), (((/* implicit */int) arr_10 [i_0] [11LL] [i_2] [i_3 + 1]))));
                            arr_17 [i_2] [i_3] [i_2] [(unsigned char)11] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_3] [i_2 - 1] [i_1 - 2])) >> ((((-(((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (arr_10 [i_4] [i_3 + 1] [i_0] [i_0])))))) + (50077)))));
                            var_17 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((((-3620383867656513895LL) + (9223372036854775807LL))) << (((((/* implicit */int) (short)32767)) - (32767)))))) || (((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) -126710266))))))));
                        }
                    }
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)20144))))) != (((/* implicit */int) max((arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 2]), (arr_6 [i_0] [i_1] [i_1] [i_1 - 1]))))));
                            var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2013490311U)))))) : (max((((unsigned int) (unsigned short)18448)), (((/* implicit */unsigned int) (signed char)114))))));
                        }
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
                        {
                            arr_27 [i_0] [i_0] [i_7] [i_5] [i_7] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)119)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-115)))))));
                            var_20 = (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_2]))))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(short)13] [i_1] [i_0])))))))));
                            var_21 *= ((/* implicit */unsigned long long int) (+(3420611883U)));
                            var_22 = ((/* implicit */signed char) (~(max((((/* implicit */int) ((((/* implicit */_Bool) 4509954796517267971ULL)) || (((/* implicit */_Bool) 18446744073709551613ULL))))), (max((2147483646), (((/* implicit */int) var_0))))))));
                        }
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                        {
                            var_23 -= max(((+(((/* implicit */int) (_Bool)1)))), (-1507840927));
                            arr_30 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((short)21184), (((/* implicit */short) (unsigned char)15)))))));
                            arr_31 [i_2] [i_1] [i_2] [i_5] [i_1] = ((/* implicit */short) (-((-(max((var_7), (((/* implicit */unsigned long long int) var_2))))))));
                        }
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                        {
                            var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_9] [i_1] [i_1 + 1] [i_0]))) ? (((((((/* implicit */_Bool) (short)19482)) ? (((/* implicit */int) (short)15355)) : (((/* implicit */int) (unsigned short)64077)))) << (((((/* implicit */int) min((var_2), (arr_3 [i_0] [i_2 + 3] [i_9])))) - (11689))))) : ((+(var_9)))));
                            var_25 += ((((/* implicit */_Bool) arr_22 [i_0] [i_9] [i_9] [i_0] [i_0] [i_0] [i_0])) || ((!((!(((/* implicit */_Bool) var_10)))))));
                        }
                        arr_35 [i_1] [i_1] [i_2 + 3] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(arr_4 [i_0] [i_0] [i_0] [i_5])))) | (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_21 [i_0] [i_1] [15LL] [i_1 - 2]))) <= (((/* implicit */int) var_3)))))) : (min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_2 + 2] [i_1 + 1])) + (2147483647))) >> (((arr_19 [i_0] [i_1] [i_0] [i_2] [i_2] [i_2]) - (1537354199U)))))), ((+(15638549628136339064ULL)))))));
                        var_26 = arr_5 [i_5] [i_2] [i_2] [i_0];
                        var_27 = ((/* implicit */int) ((unsigned int) var_9));
                        arr_36 [i_0] [i_1] [9ULL] [i_2] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) var_3))))) < (arr_4 [i_5] [i_5] [i_5] [(signed char)9]))));
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-15338)) + (2147483647))) >> (((max(((-(((/* implicit */int) (unsigned short)49664)))), ((+(((/* implicit */int) var_5)))))) + (46)))));
                        var_29 = ((/* implicit */unsigned long long int) ((unsigned char) max((arr_13 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2] [i_2 - 1] [(signed char)0]), (((/* implicit */int) arr_20 [i_10 - 1] [(signed char)1] [i_1 + 1] [i_0])))));
                        arr_40 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */long long int) max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_2] [i_1 - 2] [8LL] [i_2 + 2])) * (((/* implicit */int) (unsigned char)197)))))));
                        arr_41 [i_0] [i_1 - 2] [i_2 - 1] [i_10] [i_2] = ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_1]);
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) arr_6 [i_0] [2LL] [i_0] [i_10])) ? (var_9) : (((/* implicit */int) (unsigned short)6)))))) * (((((/* implicit */int) arr_29 [i_10 - 1] [i_1] [i_1] [i_10] [i_10] [i_10 - 1] [i_10])) | (((/* implicit */int) arr_29 [i_10 - 1] [i_1] [i_1] [(_Bool)1] [i_1] [i_10 - 1] [i_10 - 1])))))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_1))))))));
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((var_15) || (((/* implicit */_Bool) 181059542))))) < (((/* implicit */int) var_8))))) << ((((+(((((/* implicit */int) (unsigned short)21290)) << (0ULL))))) - (21288)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 16; i_13 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / ((~(var_4)))))));
                                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 11159456528180915548ULL)) || (((/* implicit */_Bool) 8462632967096645913LL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_13] [i_13])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (-(arr_32 [i_0] [i_13] [i_2] [9LL] [i_0] [i_1 + 1] [i_0])))))) : (((max((var_11), (((/* implicit */unsigned long long int) var_12)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))))))))));
                                arr_50 [i_13] [i_13] [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 689930296)) || (((/* implicit */_Bool) arr_39 [i_2 + 3] [i_2 + 1] [i_1 + 1]))))) > (((/* implicit */int) ((unsigned short) arr_33 [i_12 + 1] [i_2] [i_2] [i_1 - 1])))));
                            }
                        } 
                    } 
                    var_35 = (+(((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_38 [i_1] [i_1 - 2] [i_1 - 2] [i_2])) >= (((/* implicit */int) (signed char)-108)))))));
                }
                var_36 *= ((/* implicit */signed char) max((((int) var_10)), (((/* implicit */int) ((_Bool) -9153568368090824389LL)))));
                var_37 = ((/* implicit */signed char) (+(((/* implicit */int) ((126710270) <= (((/* implicit */int) (short)19253)))))));
                arr_51 [i_1 - 1] [i_1 + 1] [i_0] = max((((/* implicit */int) max(((short)32740), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_15))) >= (var_13))))))), (-1654292240));
            }
        } 
    } 
    var_38 += ((/* implicit */_Bool) var_2);
    var_39 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((-654669563) + (2147483647))) << (((126710260) - (126710260)))))) ? (((/* implicit */int) (unsigned short)44261)) : (((/* implicit */int) (unsigned char)20))));
    var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)55306)), (-1)))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))))));
}
