/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207578
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65520)))))));
                    var_19 = ((/* implicit */unsigned char) max(((~(0ULL))), (((/* implicit */unsigned long long int) var_8))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 243773321)) || (((/* implicit */_Bool) (short)6144))))))));
                                var_21 = ((/* implicit */signed char) min(((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33568)) || (var_3)))))), (((/* implicit */int) ((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) 18446744073709551601ULL)))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (var_3))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1 - 1] [9U] [0])) || (((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1] [i_3]))))) : ((~((-(((/* implicit */int) (short)16992))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        arr_19 [i_5] [(_Bool)1] = ((/* implicit */short) var_3);
        var_23 = ((/* implicit */signed char) var_12);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */int) (short)29698)) : (((/* implicit */int) arr_5 [i_5] [i_6] [(unsigned short)3])))) : (((/* implicit */int) var_6))));
            arr_22 [i_5] [i_5] [i_5] = 3739570110U;
            var_25 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)22978))))) || (((/* implicit */_Bool) arr_0 [i_5] [i_5]))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            arr_27 [1ULL] [i_5] [2] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) || (((((/* implicit */_Bool) arr_0 [i_5] [i_5])) || (((/* implicit */_Bool) var_14))))))), ((~(((/* implicit */int) arr_20 [i_7] [i_7] [i_7]))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                var_26 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_17)), (var_6)))) && ((!((_Bool)1)))))));
                arr_31 [i_5] [(signed char)3] [i_5] [(unsigned short)6] = ((/* implicit */int) (_Bool)1);
                arr_32 [(short)5] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_5]))))) || (((((/* implicit */_Bool) arr_30 [i_5] [i_7] [i_8])) || (((/* implicit */_Bool) 3938573184912682698ULL))))))), ((~(((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_8))))))));
            }
            for (short i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                var_27 = ((/* implicit */unsigned long long int) arr_17 [i_7]);
                arr_35 [(unsigned char)9] [i_7] [(unsigned char)5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-6145)))))) : (max((var_12), (((/* implicit */unsigned int) var_13))))))) ? (min((((/* implicit */unsigned int) var_8)), ((~(arr_1 [i_5]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_11), (var_7)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), ((unsigned char)139))))))))));
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    var_28 = ((/* implicit */int) min((((short) ((((/* implicit */_Bool) (unsigned short)42557)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(signed char)11] [i_9] [i_10])))))), (((/* implicit */short) (_Bool)1))));
                    var_29 = ((/* implicit */long long int) var_9);
                    arr_38 [i_5] [i_7] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_14 [i_5] [i_5] [8])), ((-(((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) (unsigned char)0))));
                    var_30 = ((/* implicit */unsigned short) min((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))), ((~(((/* implicit */int) ((short) (signed char)89)))))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_11 = 3; i_11 < 9; i_11 += 1) 
                {
                    var_31 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_5] [i_9] [i_11 + 1])), (((((/* implicit */_Bool) (short)-6145)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_8 [i_5] [(signed char)12] [i_9]))))));
                    arr_42 [i_5] [i_7] [i_9] [i_11] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned short)9]), (((/* implicit */short) arr_37 [i_5] [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) (unsigned char)85)) : ((~(((/* implicit */int) arr_37 [i_5] [(_Bool)0] [i_5] [(short)2])))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_11 - 2] [i_11 - 2])) && (((/* implicit */_Bool) min((arr_10 [i_5] [1LL] [i_9] [i_5] [(short)0]), (var_5)))))))));
                    arr_43 [i_5] [i_7] [9ULL] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)255)), ((short)-30387)))) ? (((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20489)) || (((/* implicit */_Bool) arr_8 [(short)3] [(short)3] [(short)3])))))))) || (((((/* implicit */_Bool) var_7)) || (arr_11 [i_11 - 1] [i_11 - 2] [(signed char)4] [i_11 - 2])))));
                }
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    arr_46 [i_5] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) (~(arr_16 [i_7] [i_12])));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_17)) : (var_0)));
                }
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) max((max((((/* implicit */signed char) var_8)), (arr_47 [i_9]))), ((signed char)-109)));
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)-48)))))));
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) || (var_3)));
                            arr_52 [i_5] [(signed char)9] [i_9] [i_14] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)51))))) || (((/* implicit */_Bool) (signed char)-33))))));
                        }
                    } 
                } 
            }
            arr_53 [i_5] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((var_11), ((signed char)-56)))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65530))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 243773321)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (signed char)-111))))))))));
        }
        var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)57))));
        arr_54 [i_5] [(signed char)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_33 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned short)58148)))), (((/* implicit */int) min(((short)-31109), (((/* implicit */short) (_Bool)1)))))))) : (((((/* implicit */_Bool) (unsigned short)6393)) ? (2941200188526789851ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)127), (((/* implicit */unsigned short) (signed char)55))))))))));
    }
    for (signed char i_15 = 0; i_15 < 14; i_15 += 2) 
    {
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (-(((/* implicit */int) ((var_8) || (var_8)))))))));
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            for (unsigned char i_17 = 0; i_17 < 14; i_17 += 3) 
            {
                {
                    arr_64 [i_17] = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)52052)))) ? (((((/* implicit */int) (short)17915)) / (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_56 [i_16])) * (((/* implicit */int) var_2)))))), (max((((/* implicit */int) (_Bool)1)), (-1164713054)))));
                    arr_65 [i_15] [i_15] [i_17] = ((/* implicit */short) min((((unsigned char) (unsigned short)29756)), (((/* implicit */unsigned char) var_4))));
                }
            } 
        } 
        arr_66 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (min((((/* implicit */unsigned long long int) ((var_3) || (((/* implicit */_Bool) arr_57 [i_15]))))), (max((((/* implicit */unsigned long long int) var_0)), (var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_15] [i_15])))));
    }
}
