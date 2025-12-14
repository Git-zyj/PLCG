/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243744
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
    var_19 -= ((/* implicit */int) min((max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))))), (var_0))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)255))))) || (((/* implicit */_Bool) var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_0] [i_2] [i_1] [i_0] [19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2]))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)0))))))) : ((-((~(((/* implicit */int) var_15))))))));
                                var_20 = (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [23ULL]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [(signed char)1] [(signed char)1] [i_0] [i_0] = ((/* implicit */unsigned short) var_18);
                                arr_22 [i_2 + 1] [i_0] [i_0] [i_6] [i_2 + 1] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [(signed char)10] [i_1])))) * (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_17 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1]))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    arr_25 [i_0] [i_1] = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_7] [i_0])))) % (((/* implicit */int) (unsigned char)255))))));
                    var_21 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned short)65535)))) <= ((-(((/* implicit */int) arr_6 [i_0]))))));
                }
                var_22 = ((/* implicit */unsigned long long int) (-((((-(((/* implicit */int) var_8)))) & (var_6)))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 3; i_8 < 20; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                            {
                                var_23 = (-(((/* implicit */int) max((var_11), (((((/* implicit */int) (unsigned short)24663)) < (((/* implicit */int) (unsigned char)83))))))));
                                var_24 += ((((((/* implicit */_Bool) (~(-4109026381542865346LL)))) ? (((((/* implicit */_Bool) arr_18 [i_10] [i_1] [i_8] [i_8] [i_8])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)167)))) * ((-(((/* implicit */int) (unsigned char)16)))));
                                var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_19 [i_10] [i_1] [(unsigned char)22] [i_1] [i_10])))) / (((/* implicit */int) var_5))));
                            }
                            for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
                            {
                                arr_38 [(signed char)19] [i_0] [i_0] [i_8] [i_9] [i_11] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_8 + 4] [i_8 + 4] [(unsigned char)15] [i_1])) && (((/* implicit */_Bool) arr_33 [i_0] [i_1] [(unsigned char)21] [(unsigned char)21]))))))));
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (unsigned char)226)))))) ? ((-(var_14))) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [(signed char)10] [i_0] [i_9])))));
                                var_27 = ((/* implicit */unsigned short) 18446744073709551615ULL);
                                arr_39 [21] [21] [i_0] [i_9] [i_11] = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) (unsigned short)35704)))));
                            }
                            for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
                            {
                                var_28 &= ((/* implicit */unsigned long long int) -1384823959);
                                var_29 = ((/* implicit */int) arr_35 [(unsigned short)0] [i_9] [i_8 + 1] [i_9]);
                                arr_42 [i_0] [i_1] [(_Bool)1] [i_9] [i_9] = (-(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)6)), (arr_5 [i_0] [(signed char)22])))) <= ((-(((/* implicit */int) (unsigned short)0))))))));
                            }
                            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                            {
                                var_30 *= ((/* implicit */unsigned char) (~(((/* implicit */int) var_13))));
                                var_31 = ((/* implicit */_Bool) (signed char)-2);
                                var_32 = (~((((!(((/* implicit */_Bool) (unsigned char)167)))) ? ((-(((/* implicit */int) arr_9 [9] [i_1] [(signed char)7])))) : ((~(-1829469138))))));
                                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) max((var_12), (((/* implicit */unsigned long long int) (~(-2981081727275529087LL)))))))));
                                arr_45 [i_0] = ((/* implicit */signed char) (+((+((~(((/* implicit */int) (unsigned short)0))))))));
                            }
                            /* LoopSeq 3 */
                            for (signed char i_14 = 3; i_14 < 22; i_14 += 3) /* same iter space */
                            {
                                var_34 = ((var_16) ? (((arr_9 [i_14] [i_9] [i_1]) ? ((-(arr_8 [i_0] [21LL]))) : ((-(((/* implicit */int) (unsigned char)150)))))) : (((/* implicit */int) arr_16 [i_0] [i_1])));
                                arr_49 [i_0] [(signed char)14] [i_8] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (((~(((/* implicit */int) arr_10 [i_14] [i_0] [i_0] [i_0])))) > (((/* implicit */int) var_0))))) << (((max((((/* implicit */int) (unsigned char)225)), (var_2))) - (601080058)))));
                            }
                            for (signed char i_15 = 3; i_15 < 22; i_15 += 3) /* same iter space */
                            {
                                var_35 ^= ((/* implicit */_Bool) (((+((~(((/* implicit */int) (unsigned char)216)))))) + ((+(((/* implicit */int) ((((/* implicit */int) (signed char)124)) <= (arr_24 [(unsigned short)22] [i_1] [i_1]))))))));
                                arr_53 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) (-((-(arr_26 [i_8 + 2] [i_1] [(unsigned short)19] [i_15 - 1])))));
                                var_36 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */long long int) (((+(arr_3 [i_0]))) - ((~(((/* implicit */int) (unsigned short)65521))))))) : (((long long int) (-(((/* implicit */int) arr_27 [(_Bool)1] [(_Bool)1])))))));
                                arr_54 [i_0] [i_9] [i_8] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_20 [(unsigned char)8] [i_15 - 1] [i_8] [i_9] [(unsigned char)2] [i_8 + 2] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : ((~(15617968179511991896ULL)))))));
                            }
                            for (signed char i_16 = 3; i_16 < 22; i_16 += 3) /* same iter space */
                            {
                                var_37 |= ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) (unsigned short)65515)))));
                                arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_24 [(_Bool)1] [i_8 + 3] [i_0]))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_61 [i_0] [i_0] [i_17] = (+((~(((/* implicit */int) (unsigned char)46)))));
                    arr_62 [6] [i_0] [i_0] = ((/* implicit */unsigned char) var_18);
                    var_38 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (!((_Bool)0))))));
                }
                for (unsigned short i_18 = 3; i_18 < 23; i_18 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))) : (5715782029709985910LL))))) != (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)12)) == (((/* implicit */int) (unsigned char)138))))))))));
                                var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 15617968179511991896ULL))))))))));
                                arr_71 [i_20] [i_20] [i_0] [i_19] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -1168704017)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_16)))))) && ((!(((/* implicit */_Bool) arr_56 [i_19] [i_20] [i_18 - 3]))))));
                                var_41 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)167)), ((~((~(((/* implicit */int) (unsigned char)100))))))));
                                arr_72 [20] [20] [i_0] [i_19] [i_20] = ((/* implicit */signed char) (-((+(((/* implicit */int) (unsigned short)24650))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_21 = 2; i_21 < 21; i_21 += 2) 
                    {
                        arr_77 [i_0] [i_0] [i_18 - 2] [i_18 - 2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_63 [i_0] [i_0] [i_0])) & (((/* implicit */int) ((signed char) (+(((/* implicit */int) (unsigned short)2617))))))));
                        arr_78 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (unsigned char)210)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((-283410124) + (2147483647))) >> (((((/* implicit */int) (unsigned char)46)) - (43)))))))))) : ((~(max((((/* implicit */unsigned long long int) (signed char)-78)), (var_12)))))));
                    }
                    var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_18] [i_1] [i_0] [i_0]))) != ((-(2828775894197559719ULL)))));
                    var_43 = ((/* implicit */int) max((var_43), (((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_64 [i_1] [i_1] [i_18])))))) ? ((~((+(((/* implicit */int) (unsigned char)245)))))) : (((((/* implicit */_Bool) (unsigned short)49747)) ? (((/* implicit */int) max((arr_44 [23ULL] [i_18] [(unsigned short)3] [i_0] [(unsigned char)15]), (arr_1 [i_0] [i_0])))) : (-283410124)))))));
                }
            }
        } 
    } 
}
