/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211811
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
        arr_3 [i_0] = arr_0 [i_0 - 1];
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_1 [i_1 - 1])))) ^ ((+(((/* implicit */int) (unsigned short)52217))))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((min((((/* implicit */int) (unsigned char)255)), (arr_4 [i_1] [i_1 - 1]))), (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned char)0)))))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) min((min((arr_5 [i_1]), (arr_5 [i_1]))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (arr_5 [i_1])))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (+((((~(((/* implicit */int) arr_11 [i_2])))) ^ (min((((/* implicit */int) (unsigned short)30079)), (-425732802))))))))));
                    arr_15 [i_2] [i_2] [i_2] [i_2] = (unsigned char)78;
                }
            } 
        } 
        arr_16 [(unsigned short)4] [i_2] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((int) arr_11 [i_2]))) ? (min((arr_13 [i_2 - 1]), (arr_4 [i_2 - 1] [(unsigned char)3]))) : (((/* implicit */int) arr_10 [i_2 - 1])))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 2; i_5 < 16; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 16; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 17; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((min((((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_2 - 1] [i_5] [i_6])) && ((_Bool)1)))), (min((var_10), (((/* implicit */short) arr_24 [i_2] [i_2] [(unsigned char)16] [i_2 - 1])))))), (((/* implicit */short) arr_25 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                                arr_30 [i_2] [i_2] [i_2] [(short)5] [i_2] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) & (((/* implicit */int) ((((/* implicit */int) (unsigned short)35456)) == (((/* implicit */int) arr_6 [i_2]))))))));
                                arr_31 [1ULL] [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)13318);
                                arr_32 [i_2] [i_2] [i_6 - 1] [i_7 - 3] [i_6 - 1] [i_6] = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_9 = 3; i_9 < 17; i_9 += 2) 
                    {
                        arr_35 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((signed char) ((arr_24 [i_6] [i_2] [i_2] [i_6 + 2]) ? (((/* implicit */int) arr_25 [i_2] [(unsigned char)10] [i_2] [(unsigned char)10] [i_9])) : (((((/* implicit */int) var_4)) >> (((64482045) - (64482015))))))));
                        arr_36 [i_2] [i_2 - 1] [8U] [i_2] = ((/* implicit */long long int) ((unsigned char) min((((((/* implicit */int) arr_33 [i_2] [i_5] [i_5] [i_2] [i_9])) % (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_2 - 1] [i_2 - 1] [i_9])) << (((((/* implicit */int) arr_19 [i_2 - 1] [i_2 - 1] [i_2 - 1])) - (57992)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_2 - 1] [i_6 - 4] [i_9 + 1])) ? (-1075297076) : (((/* implicit */int) arr_19 [i_5] [i_5 + 2] [i_5 - 1]))))) : (((long long int) arr_19 [i_2] [i_6 + 1] [i_9 - 1])))))));
                        arr_37 [i_5 - 2] [i_5 + 2] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((arr_0 [i_2 - 1]), (((/* implicit */short) (unsigned char)174))))))) ? (((min((((/* implicit */long long int) (_Bool)0)), (6857973853923715374LL))) >> (((/* implicit */int) ((var_12) != (((/* implicit */int) var_7))))))) : (((/* implicit */long long int) (-(64482045))))));
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_40 [i_2] [(unsigned char)5] [(unsigned char)5] [i_2] = ((/* implicit */unsigned short) 1587468288);
                            arr_41 [i_2] [i_5 + 2] [i_5] [i_5 - 2] [(unsigned char)8] [i_5] [8U] = ((/* implicit */unsigned short) (~(((9223372036854775807ULL) << (((((/* implicit */int) (unsigned short)13335)) - (13279)))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_8))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) 947430831938362540LL))));
                            arr_42 [i_2] [i_2] = ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (signed char)-107)));
                        }
                        for (short i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (((~(((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_0)))))) >= (((((((/* implicit */int) var_13)) | (((/* implicit */int) arr_29 [(short)8] [(short)8])))) ^ (((/* implicit */int) ((((/* implicit */int) arr_25 [i_11] [i_6 - 3] [i_6 - 3] [(unsigned char)12] [i_2])) >= (((/* implicit */int) arr_11 [i_2 - 1]))))))))))));
                            arr_46 [i_2 - 1] [i_5] [i_2] [i_2] [i_11] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_11)) >> (((((/* implicit */int) (short)28855)) - (28829))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-48))) | (var_9)))))));
                            arr_47 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)44)), ((short)23179)))) / ((+(((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_2] [i_5]))) : ((-(10243941160462816028ULL)))));
                        }
                        for (short i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((long long int) arr_22 [i_5 - 2] [(unsigned char)8] [(unsigned char)8] [i_5])))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)44)) >> (((((/* implicit */int) (unsigned char)210)) - (203)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))) & (((((/* implicit */unsigned long long int) var_9)) ^ (5297504445761984519ULL))))))))));
                        }
                    }
                    for (unsigned char i_13 = 1; i_13 < 15; i_13 += 3) 
                    {
                        arr_54 [17U] [i_5] [i_2] = min((((int) ((((/* implicit */_Bool) -1075297076)) ? (((/* implicit */int) arr_38 [i_2])) : (((/* implicit */int) arr_10 [i_5 + 2]))))), (((/* implicit */int) var_4)));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) var_2))))))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 4 */
    for (int i_14 = 0; i_14 < 18; i_14 += 3) /* same iter space */
    {
        arr_58 [i_14] = ((/* implicit */unsigned long long int) min((min(((~(((/* implicit */int) arr_18 [(_Bool)1] [i_14] [i_14])))), (((/* implicit */int) var_3)))), (((/* implicit */int) ((unsigned short) (unsigned char)152)))));
        var_26 = ((/* implicit */short) (unsigned short)16563);
    }
    for (int i_15 = 0; i_15 < 18; i_15 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) (short)6729);
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((((arr_4 [i_15] [i_15]) ^ (((/* implicit */int) (unsigned short)8821)))) & (((/* implicit */int) arr_38 [6LL])))) | ((~(((/* implicit */int) max(((unsigned short)13335), (((/* implicit */unsigned short) var_5))))))))))));
        arr_61 [i_15] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) ^ (min((((((/* implicit */int) var_7)) >> (((((/* implicit */int) (short)23155)) - (23131))))), (min((var_8), (((/* implicit */int) (unsigned char)5))))))));
    }
    for (unsigned char i_16 = 4; i_16 < 15; i_16 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) 2013621091))));
        arr_65 [i_16] = ((/* implicit */unsigned long long int) (-((((~(((/* implicit */int) var_0)))) & (((/* implicit */int) min((arr_62 [0] [0]), (var_5))))))));
    }
    for (unsigned char i_17 = 4; i_17 < 15; i_17 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_28 [(unsigned short)16] [(_Bool)1] [i_17] [i_17] [i_17] [10U] [i_17 - 3]))) % (var_12)));
        var_31 = ((/* implicit */short) ((signed char) ((((((/* implicit */int) arr_45 [i_17] [i_17] [i_17] [i_17] [i_17 + 1] [i_17])) + (((/* implicit */int) arr_27 [i_17] [i_17 + 2] [i_17])))) > (((/* implicit */int) (unsigned char)8)))));
    }
    var_32 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)20)) + ((-(((/* implicit */int) var_11))))));
}
