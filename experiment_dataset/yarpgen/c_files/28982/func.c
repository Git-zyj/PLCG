/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28982
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
    var_10 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_6))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)21144)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)21151)))))))) : (var_0)));
                        arr_9 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((min((var_4), ((~(arr_5 [i_0] [i_0] [i_0] [i_0]))))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) min(((unsigned char)161), (((/* implicit */unsigned char) var_6))))))))));
                        arr_10 [i_0] [i_1 + 2] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_3 + 1] [(unsigned short)3] [i_1 - 3] [i_1 - 3])) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) arr_3 [i_2 + 2])))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_1] [i_2] [16U] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_8)) ? (var_0) : (arr_2 [i_3 + 1] [i_1 - 3] [i_1]))))))));
                        var_12 = ((/* implicit */unsigned char) (((-(arr_0 [i_2 - 1] [(signed char)7]))) - (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)94)) - (((/* implicit */int) (unsigned short)24512))))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            arr_13 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_4] [(unsigned char)10] [i_1] [i_1] [i_0] [i_0])) ? (arr_0 [i_0] [i_1 + 1]) : (arr_0 [i_1] [i_1])))) * (((((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                            var_13 = ((/* implicit */unsigned long long int) ((min((min((-2278714415309581277LL), (((/* implicit */long long int) (unsigned char)117)))), (((/* implicit */long long int) min(((unsigned short)24512), (var_2)))))) == (var_3)));
                            arr_14 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((unsigned int) var_0)) > (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_1 + 1]) > (arr_3 [i_1 - 1])))))));
                            var_14 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (((-(((/* implicit */int) arr_6 [i_4] [i_3 - 1] [i_2] [i_2 + 2] [i_1 + 1] [i_0])))) == (((/* implicit */int) ((signed char) arr_5 [i_0] [i_1] [i_2 + 1] [i_3 - 1])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2))))) ? (arr_2 [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)161))))))));
                            arr_15 [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */signed char) var_8);
                        }
                    }
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_1] [(unsigned char)8] = (~(((/* implicit */int) (unsigned char)105)));
                        var_15 = ((/* implicit */_Bool) min((var_15), (var_6)));
                        arr_19 [i_5] [i_1] [4U] [i_1] [i_0] = ((/* implicit */signed char) var_1);
                        var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(-2039724168)))), (((((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (arr_5 [(unsigned short)16] [i_1] [i_1] [i_1 + 1])))) ^ ((-(arr_2 [(signed char)1] [i_1 + 2] [i_1])))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            arr_26 [(unsigned short)6] [2] [i_1 - 2] [i_1] [i_1 - 2] [i_6] [2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2 - 1] [i_6] [i_7])) ? (arr_25 [i_1] [i_2] [i_6]) : (((/* implicit */int) var_7))))));
                            arr_27 [i_0] [i_1] [i_1] [i_1] [(_Bool)0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_2))));
                        }
                        for (unsigned long long int i_8 = 3; i_8 < 16; i_8 += 2) 
                        {
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (var_8) : (((/* implicit */unsigned long long int) arr_28 [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_8 - 3] [6LL]))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_21 [8LL] [i_1 + 2] [i_2] [i_2] [i_2] [i_8 + 1])) / (((/* implicit */int) (unsigned short)41024)))))) : ((+(((/* implicit */int) ((_Bool) (unsigned short)1023))))))))));
                            arr_32 [i_0] [i_2] [i_1] [i_6] [i_1] [i_2 + 1] = ((/* implicit */_Bool) ((short) ((arr_16 [i_1 - 1]) - (arr_16 [i_1 + 1]))));
                            arr_33 [i_0] [i_1] [i_2 + 2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_0] [i_1] [15]))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_6)))))) / ((+((-(((/* implicit */int) var_2))))))));
                            arr_34 [(short)2] [i_0] [i_2] [16U] [i_0] &= ((/* implicit */short) min((((/* implicit */long long int) ((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_6] [i_8])) ? (((/* implicit */long long int) var_4)) : (arr_2 [(_Bool)1] [i_6] [(_Bool)1])))));
                        }
                        var_18 = ((/* implicit */unsigned short) arr_30 [i_1] [i_0] [i_1] [i_0] [6LL] [i_0] [14LL]);
                        var_19 = ((((/* implicit */long long int) (~((+(((/* implicit */int) var_6))))))) != (min((arr_22 [i_1] [i_1 - 3] [i_2] [i_1 - 1] [i_2 + 1] [i_2]), (((/* implicit */long long int) min((arr_20 [i_6] [i_2] [(unsigned char)13] [(_Bool)1] [(unsigned short)5] [i_0]), (((/* implicit */short) (_Bool)1))))))));
                        arr_35 [9ULL] [9ULL] [i_0] [9ULL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_16 [i_0])) ? (var_0) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (arr_3 [i_0]))))))) ? (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_1])) : (arr_7 [i_0] [i_0] [i_1] [i_1 - 3] [i_2] [i_6])));
                        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_29 [(signed char)10] [(signed char)10] [i_1 + 2] [i_1 + 1] [(signed char)10] [i_1 - 1] [i_1 + 2])) ^ (((/* implicit */int) (_Bool)1)))))))) == (var_9)));
                    }
                    for (short i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        arr_39 [(short)12] [i_2 + 1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_9] [i_1] [6LL])) || (var_6))))))) && (var_6)));
                        arr_40 [i_1] = ((/* implicit */_Bool) (+(((min((arr_2 [i_1] [i_1] [i_1]), (((/* implicit */long long int) var_9)))) / (((/* implicit */long long int) ((/* implicit */int) ((short) arr_28 [i_0] [i_1] [3U] [i_2] [i_1]))))))));
                    }
                    var_21 = ((/* implicit */int) ((((((long long int) (short)-11537)) + (9223372036854775807LL))) >> (((var_9) - (1225275321)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) min((var_4), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (unsigned char)22)) / (((/* implicit */int) (short)255)))))))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_8)))))) << (((((((/* implicit */_Bool) var_1)) && (var_6))) ? (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_7)))))))));
    var_24 = ((/* implicit */_Bool) ((short) (-(var_8))));
}
