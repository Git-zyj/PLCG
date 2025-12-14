/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32982
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [4LL] [i_1] [i_2 + 1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)27))) & (var_8))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3)))))));
                                var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) var_4))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (long long int i_6 = 4; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_11 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) arr_15 [i_6 + 1] [i_1] [0] [i_1 - 2])))));
                                var_12 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5])) || (((/* implicit */_Bool) (signed char)-103)))))) / (var_6))) * (((/* implicit */long long int) (((+(((/* implicit */int) var_2)))) / ((-(((/* implicit */int) (unsigned char)87)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */unsigned int) ((signed char) var_9));
        arr_19 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [4ULL] [i_0] [(unsigned char)8] [i_0] [i_0] [(short)10])) ? (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */signed char) arr_14 [i_0] [12LL] [2] [12LL] [i_0])), (arr_7 [i_0] [i_0] [i_0] [i_0])))) < (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)76))) : (var_6)))) ? (((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(unsigned char)2] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
        var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_16 [i_0] [(unsigned short)2] [i_0] [i_0] [i_0])), (((arr_14 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [12LL] [i_0] [12LL] [i_0]))) : (var_8)))))) != (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (4101546892188172481ULL)))));
        arr_20 [i_0] = ((((((/* implicit */_Bool) (+(var_5)))) ? ((-(((/* implicit */int) (signed char)-50)))) : (((/* implicit */int) (signed char)-28)))) * (((((/* implicit */int) min(((signed char)27), (((/* implicit */signed char) (_Bool)0))))) / (((/* implicit */int) (unsigned char)29)))));
    }
    for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        arr_24 [i_7] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(4258087541U)))) ? ((+(arr_22 [i_7]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-21553)) + (-208585983)))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [(short)10])) % (((/* implicit */int) arr_23 [19LL])))))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                {
                    var_14 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) (unsigned char)168))), (arr_21 [i_8])));
                    arr_30 [i_9] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_7)) ? (arr_22 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) << (((((/* implicit */int) var_7)) - (60))))) >> (((min((4379978965278925978ULL), (15839888387260324497ULL))) - (4379978965278925971ULL)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (signed char i_11 = 2; i_11 < 24; i_11 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_7)) - (100))))))))));
                    arr_35 [i_11] = (i_11 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) arr_34 [i_7] [i_11] [(_Bool)1] [i_11])) << (((((((/* implicit */_Bool) (~(arr_28 [i_11] [i_10] [i_7])))) ? (((unsigned long long int) (unsigned char)220)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7] [i_10] [i_11 - 1]))))) - (218ULL)))))) : (((/* implicit */signed char) ((((((/* implicit */int) arr_34 [i_7] [i_11] [(_Bool)1] [i_11])) + (2147483647))) << (((((((((/* implicit */_Bool) (~(arr_28 [i_11] [i_10] [i_7])))) ? (((unsigned long long int) (unsigned char)220)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7] [i_10] [i_11 - 1]))))) - (218ULL))) - (2ULL))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        arr_38 [i_7] [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)168)))))))));
                        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((~(((/* implicit */int) var_0)))) | (((/* implicit */int) ((unsigned short) arr_32 [i_11 - 1]))))))));
                        arr_39 [i_11] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) < ((-(((/* implicit */int) ((unsigned char) (signed char)27)))))));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_5))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_14 = 2; i_14 < 24; i_14 += 3) 
                        {
                            arr_44 [i_11] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_43 [i_7] [i_10] [i_10] [i_10] [i_11 - 1] [i_14 + 1] [i_14])) ? (arr_36 [i_14 - 2] [i_11] [i_11 - 2]) : (arr_36 [i_14 - 2] [i_11] [i_11 - 2]))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)87)) | (((/* implicit */int) ((_Bool) (signed char)-37))))))));
                            arr_45 [i_7] [i_10] [i_11] [i_13] [i_14] [i_7] [i_7] = (~(((/* implicit */int) (short)-21554)));
                            arr_46 [i_7] [i_11] [i_14] [i_7] [i_14] = ((/* implicit */unsigned short) var_0);
                        }
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            arr_49 [1ULL] [1ULL] [i_11] [i_15 - 1] = ((/* implicit */unsigned int) (-(((var_2) ? (arr_31 [i_7] [i_10]) : (arr_31 [i_7] [i_10])))));
                            arr_50 [i_11] [i_11] [i_11] [i_13] [i_15] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (4482634597101575966ULL)));
                        }
                        /* vectorizable */
                        for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
                        {
                            arr_54 [i_11] = ((/* implicit */unsigned int) (unsigned short)25677);
                            var_18 ^= (-(((/* implicit */int) ((((/* implicit */unsigned int) -303128097)) >= (var_4)))));
                        }
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((short) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) -65845305)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-29)) && (((/* implicit */_Bool) 4482634597101575966ULL))))) : (((/* implicit */int) (_Bool)0))))))));
                        /* LoopSeq 2 */
                        for (signed char i_17 = 0; i_17 < 25; i_17 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) arr_43 [i_17] [(unsigned char)7] [i_11] [6ULL] [i_7] [i_7] [i_7]);
                            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_43 [i_10] [(_Bool)1] [i_10] [i_11 - 2] [i_11 - 2] [i_10] [i_11])))) <= (arr_43 [i_10] [(unsigned char)5] [i_10] [i_11 - 1] [i_11 - 1] [i_17] [i_17])));
                            var_22 ^= (~(max((arr_36 [i_17] [i_13] [i_11 - 1]), (arr_36 [(unsigned short)6] [i_13] [i_11 + 1]))));
                            arr_57 [i_7] [i_10] [i_17] [i_11] [(_Bool)1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_48 [i_11 + 1] [i_10] [i_11])) ? (((/* implicit */int) arr_48 [i_11 - 1] [i_7] [i_11])) : (((/* implicit */int) arr_48 [i_11 - 2] [i_13] [i_7])))), (((/* implicit */int) ((signed char) arr_48 [i_11 - 2] [i_10] [i_11 - 1])))));
                        }
                        for (signed char i_18 = 0; i_18 < 25; i_18 += 3) /* same iter space */
                        {
                            arr_60 [i_11] [i_11] [i_11] = ((/* implicit */short) ((((((/* implicit */_Bool) 2683720638U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_11] [i_11] [i_11 + 1] [i_13] [i_7] [i_18] [i_11]))) : (0U))) >> ((+(((/* implicit */int) (_Bool)0))))));
                            var_23 ^= ((/* implicit */short) ((((((/* implicit */unsigned long long int) -6282067855714414949LL)) % (var_5))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74)))));
                            arr_61 [(signed char)5] [i_11] [i_18] = ((/* implicit */signed char) (~((~(((/* implicit */int) (_Bool)1))))));
                            var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)28)) ? (11958998811412187138ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))));
                        }
                        arr_62 [i_13] [i_11] [i_11] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((arr_22 [i_7]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_7] [i_10] [i_11] [i_10] [i_10] [i_11])))))) : (((/* implicit */int) var_3))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [24U] [i_11] [i_11] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_7]))) : (-6282067855714414953LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1475870138189977640LL)))) : (max((((/* implicit */long long int) arr_25 [i_7] [i_10] [i_7])), (arr_42 [i_7] [i_7] [i_11] [i_13] [i_13])))))));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((short) (short)-11663)))));
    }
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))))) >= (((/* implicit */int) (unsigned char)218))));
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : (-3253519583921607336LL)));
    var_28 = (~(((/* implicit */int) ((short) var_6))));
}
