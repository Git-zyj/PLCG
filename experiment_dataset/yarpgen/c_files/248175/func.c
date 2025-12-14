/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248175
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
    var_20 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 367817419U)) || (((/* implicit */_Bool) 367817445U)))))) == (var_9)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13)))))))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [(unsigned char)2] [i_1] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))));
                    var_22 -= ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (signed char)-93)), (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_5 [(unsigned short)16] [i_1] [i_1] [(_Bool)1]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            for (long long int i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                {
                    arr_15 [i_3] = ((/* implicit */short) ((((long long int) ((((/* implicit */int) (signed char)43)) - (((/* implicit */int) (short)12015))))) % (((/* implicit */long long int) (+(((/* implicit */int) (signed char)28)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 1) /* same iter space */
                    {
                        var_23 += ((unsigned short) max((((/* implicit */long long int) (short)-12025)), (7755067989739410980LL)));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) var_18)) - (arr_9 [i_0] [i_0]))), ((+(((/* implicit */int) (short)12025))))))) | ((+(((((/* implicit */_Bool) arr_17 [(signed char)7] [i_3] [(unsigned short)8] [(_Bool)1])) ? (((/* implicit */unsigned long long int) var_9)) : (var_6))))))))));
                        var_25 = ((/* implicit */long long int) ((unsigned int) min((arr_4 [17] [i_3] [i_3] [i_5]), (((/* implicit */long long int) max((((/* implicit */short) var_1)), ((short)-3727)))))));
                    }
                    for (unsigned char i_6 = 1; i_6 < 18; i_6 += 1) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */unsigned char) (((~(max((((/* implicit */unsigned long long int) var_10)), (11686643480070136886ULL))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (unsigned short)48070))))) : (((367817419U) & (987749594U))))))));
                        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) var_4))), (var_6))))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)22)) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)183)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(short)1] [18U] [10])))))) : (max((var_11), (((/* implicit */long long int) (signed char)43)))))))));
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            arr_25 [i_0] [8U] [i_3] [i_4] [i_6] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 946868096209396587ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [(short)0]))))))) * (((unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_10 [13LL] [i_6] [i_0])))))));
                            var_29 = (i_3 % 2 == zero) ? (((/* implicit */unsigned int) (((((-(((/* implicit */int) ((((/* implicit */_Bool) 11686643480070136880ULL)) || (((/* implicit */_Bool) var_11))))))) + (2147483647))) >> (((((arr_19 [i_0] [i_3] [i_3] [i_3 + 1]) % (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) - (3444U)))))) : (((/* implicit */unsigned int) (((((-(((/* implicit */int) ((((/* implicit */_Bool) 11686643480070136880ULL)) || (((/* implicit */_Bool) var_11))))))) + (2147483647))) >> (((((((arr_19 [i_0] [i_3] [i_3] [i_3 + 1]) % (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) - (3444U))) - (3324U))))));
                            var_30 -= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) (short)11993)) ? (var_6) : (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) (+(arr_21 [i_3 - 1] [2ULL] [i_7] [i_7]))))));
                        }
                        for (signed char i_8 = 3; i_8 < 18; i_8 += 3) 
                        {
                            arr_28 [8] [i_0] [6LL] [i_3] [16U] [i_6] [i_8] = ((/* implicit */short) (((-(3481665667957504530LL))) * (((/* implicit */long long int) ((/* implicit */int) (((-(arr_18 [16ULL] [i_3] [12LL] [i_6] [17LL]))) > (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_8] [i_6] [i_4] [i_0])))))))));
                            arr_29 [i_3] [(short)9] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) arr_2 [i_3] [(unsigned short)11] [i_3])))) <= (((/* implicit */int) min(((signed char)44), ((signed char)-19)))))))) <= (((((((/* implicit */_Bool) (short)-3480)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                        }
                    }
                }
            } 
        } 
    }
    for (int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                {
                    arr_39 [i_9] [i_11] [8U] [i_10] = ((/* implicit */unsigned int) (+((+(((-3481665667957504524LL) + (((/* implicit */long long int) ((/* implicit */int) var_17)))))))));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-43)) ? (6760100593639414730ULL) : (11686643480070136881ULL)));
                    /* LoopNest 2 */
                    for (short i_12 = 2; i_12 < 16; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 19; i_13 += 2) 
                        {
                            {
                                arr_44 [(signed char)17] [12U] [i_11] [i_12] [i_13] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (+(var_4)))) ? (((arr_43 [i_9] [i_10] [(signed char)14] [i_12] [i_13] [16]) / (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_9] [i_12] [(signed char)17] [i_12] [i_13] [(unsigned short)6]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [12U] [i_12] [8])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)211))))))));
                                var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_10))))))) >= (((6760100593639414712ULL) * (((/* implicit */unsigned long long int) arr_9 [i_12] [18ULL]))))));
                                var_33 = ((/* implicit */unsigned char) (-((-(var_0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_45 [10LL] = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)74)))), (((((/* implicit */_Bool) (short)12024)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_14 = 1; i_14 < 12; i_14 += 2) 
    {
        var_34 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (466015567330399334ULL) : (((/* implicit */unsigned long long int) 1257272108)))) >= (((/* implicit */unsigned long long int) ((long long int) var_15))))))) * ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (3927149876U)))))));
        arr_48 [i_14] = ((min((arr_33 [i_14 + 1]), (1794868114U))) | (((arr_33 [i_14 + 1]) - (4142410771U))));
    }
    for (unsigned short i_15 = 1; i_15 < 23; i_15 += 1) 
    {
        var_35 = ((/* implicit */int) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (1794868131U))) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_15] [i_15 + 1]))) : (((((/* implicit */_Bool) 5988790598729390507ULL)) ? (((/* implicit */long long int) var_12)) : (arr_50 [i_15]))))) * (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75))) : (17980728506379152282ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_19)) - (56272))))))))))));
        arr_52 [i_15] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [(unsigned char)3])) ? (arr_50 [i_15]) : (var_13)))) ? (min((5984794835922718894LL), (var_0))) : (max((var_13), (((/* implicit */long long int) var_4)))))) / (((-7624234147473048445LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4269)))))));
    }
}
