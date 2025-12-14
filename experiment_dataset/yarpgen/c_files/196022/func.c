/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196022
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 1) /* same iter space */
        {
            arr_5 [(signed char)1] [3U] [i_0] = ((/* implicit */unsigned short) (((+(-2738188169942768740LL))) < (((/* implicit */long long int) ((((/* implicit */int) (signed char)48)) % (((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 2 */
            for (short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                var_11 = ((/* implicit */_Bool) max((var_11), ((((((_Bool)1) ? (var_6) : (((/* implicit */unsigned int) arr_0 [i_1])))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 7847683U)) && ((_Bool)1)))))))));
                var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-48)))) * (((/* implicit */int) (!((_Bool)1))))));
                var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-23)))) <= ((+(((/* implicit */int) (_Bool)1))))));
                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_6))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)27)))))));
            }
            for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                arr_11 [i_3 + 1] = ((/* implicit */_Bool) 4140771447519491335ULL);
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((arr_9 [i_0] [i_0] [i_0] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_0]))))) : (((/* implicit */unsigned long long int) (-(arr_0 [i_3])))))))));
            }
            /* LoopNest 3 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    for (unsigned char i_6 = 1; i_6 < 10; i_6 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) (_Bool)1);
                            var_17 = ((/* implicit */short) var_4);
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_7 = 2; i_7 < 7; i_7 += 1) /* same iter space */
        {
            arr_24 [i_0] = (signed char)-8;
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((((/* implicit */int) (signed char)-26)) >= (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)90)) + (((/* implicit */int) (unsigned char)205))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-34)) | (((/* implicit */int) (unsigned short)56386))))) : ((+(var_8))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_6 [i_7 + 4] [i_0])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)-10121))))))))))));
        }
        for (short i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            arr_28 [i_0] = ((/* implicit */short) ((arr_4 [i_0] [i_0] [(unsigned char)5]) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) - (var_6)))) ? (((((/* implicit */int) (short)1)) + (((/* implicit */int) (unsigned char)195)))) : (((2147483647) - (511161211))))))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_0] [i_0] [i_8]))))), (((((/* implicit */_Bool) var_7)) ? (var_8) : (arr_15 [i_0])))))) ? (-2147483627) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)87)) - (((/* implicit */int) (unsigned char)206))))) >= ((((_Bool)1) ? (1976368201U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))))))))));
        }
        var_20 = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]);
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_0] [i_0])) - (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) (short)-24234)))))))));
        arr_29 [i_0] |= min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)254)) * (((/* implicit */int) (signed char)-16))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_0])), (arr_2 [i_0])))) ? (min((4297537711522133755LL), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0])))) : (((var_7) << (((((-511161211) + (511161227))) - (16))))))));
        /* LoopNest 2 */
        for (long long int i_9 = 1; i_9 < 10; i_9 += 2) 
        {
            for (short i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                {
                    arr_36 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_12 [i_0] [i_9 + 1] [i_10] [i_10])) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (short)-22525)))) % ((-(((/* implicit */int) arr_10 [i_0] [i_9] [i_9 - 1] [i_10])))))), (((((((/* implicit */int) (unsigned char)187)) + (((/* implicit */int) (_Bool)1)))) - (((2147483647) + (((/* implicit */int) (signed char)-109))))))));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((27859497U), (var_9))))));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-45)))))))));
                }
            } 
        } 
    }
    for (long long int i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
    {
        arr_41 [i_11] = ((/* implicit */int) var_4);
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) min((((/* implicit */long long int) arr_6 [i_11] [i_11])), (((((/* implicit */long long int) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) | (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)48))) : (var_3))))))))));
    }
    for (long long int i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
    {
        arr_44 [i_12] [i_12] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-12)) >= (((/* implicit */int) (signed char)-48)))))) - ((+(263882790666240ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19127)) + (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))))));
        var_25 = ((/* implicit */unsigned char) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_9 [i_12] [i_12] [i_12] [i_12]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_12] [i_12]))))))));
    }
    for (long long int i_13 = 0; i_13 < 11; i_13 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 4) 
        {
            var_26 = ((/* implicit */short) 416040487);
            arr_51 [i_14] = (-(((((/* implicit */int) (unsigned char)234)) << (((arr_9 [i_13] [i_14] [i_14] [i_14]) - (6280607620986492072ULL))))));
        }
        var_27 = min(((+(((((/* implicit */_Bool) arr_20 [i_13] [i_13] [i_13])) ? (-537789637531882352LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_47 [i_13] [i_13])) - (((/* implicit */int) min((((/* implicit */short) (unsigned char)31)), ((short)8182))))))));
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((max((((/* implicit */signed char) var_2)), ((signed char)22))), (((/* implicit */signed char) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_8 [(signed char)8] [i_13] [i_13])))))))) * (((((((/* implicit */int) (unsigned char)190)) & (((/* implicit */int) arr_1 [i_13])))) + (((/* implicit */int) ((((/* implicit */int) arr_26 [i_13] [i_13])) == (((/* implicit */int) (unsigned char)154))))))))))));
        var_29 = ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (signed char)97)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : (var_7))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3603492823U)) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224)))))) ? (((((/* implicit */int) (signed char)-81)) / (((/* implicit */int) arr_30 [i_13])))) : ((-(((/* implicit */int) (signed char)14)))))))));
    }
    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (+((+(17ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55363))) : (var_9)))))));
}
