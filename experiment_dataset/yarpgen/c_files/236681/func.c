/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236681
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    arr_6 [i_1] = ((/* implicit */short) (~(((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_0 [i_0] [i_1])))))));
                    arr_7 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((int) var_8));
                    var_19 -= ((/* implicit */int) var_9);
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) arr_1 [i_2]);
                }
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 2; i_5 < 20; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_1] [(unsigned short)12] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) max(((unsigned short)8), (var_12))))))));
                            var_20 = ((/* implicit */short) (+((+(((((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_5])) * (((/* implicit */int) var_1))))))));
                            var_21 = ((/* implicit */short) var_13);
                            var_22 = ((/* implicit */unsigned char) arr_0 [12U] [i_1]);
                        }
                        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 4) 
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)7))));
                            var_23 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)39402)), (((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (signed char)-8))))) * (((/* implicit */int) (short)-7530))))));
                        }
                        arr_24 [i_0] [14] [14] [i_4] &= ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)8])) ? (((/* implicit */int) (unsigned short)65535)) : (var_2)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 2; i_7 < 20; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((int) (short)-32752))) ? (((arr_5 [i_7] [i_3] [i_1] [(short)14]) & (((/* implicit */int) (short)0)))) : (((/* implicit */int) ((unsigned short) -9))))))));
                        /* LoopSeq 3 */
                        for (short i_8 = 1; i_8 < 20; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_30 [i_0] [i_1] [i_1] [i_7] [(unsigned short)0])) - (((/* implicit */int) var_17))));
                            var_26 = ((/* implicit */signed char) ((((var_3) << (((((/* implicit */int) var_7)) - (64))))) | (((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_3] [i_0] [i_3])))))));
                            var_27 = ((int) var_1);
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) 3950261845U))))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_9] [i_3] [6] [6] &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_14)))) && (((/* implicit */_Bool) arr_28 [i_7] [i_7] [i_7]))));
                            var_29 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_10 [i_7] [i_1])))) > (var_0)));
                            var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                        }
                        for (short i_10 = 1; i_10 < 22; i_10 += 2) 
                        {
                            var_31 = ((/* implicit */short) ((((var_13) < (((/* implicit */int) (signed char)30)))) ? ((+(((/* implicit */int) var_11)))) : (((((/* implicit */int) (short)-22266)) | (((/* implicit */int) var_4))))));
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (-((~(((/* implicit */int) var_5)))))))));
                            arr_38 [i_1] [i_1] [i_3] [i_7] = ((signed char) var_1);
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) 5554068619356400438ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((((/* implicit */_Bool) 3020132038U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (16777216U)))));
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (unsigned char)0))));
                        }
                    }
                    var_35 = arr_14 [i_0];
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        arr_42 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) var_17)), ((+(3155526608U)))));
                        var_36 = ((/* implicit */signed char) min((var_36), (arr_15 [i_0])));
                        var_37 |= ((/* implicit */signed char) min((max((((((/* implicit */_Bool) (short)16128)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) ((var_13) / (((/* implicit */int) (unsigned short)6))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) (signed char)57))))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) ((short) var_6))))))));
                    }
                    arr_43 [i_0] [(short)15] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((((((/* implicit */_Bool) -514164865)) ? (var_2) : (((/* implicit */int) arr_2 [14] [i_1])))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_1])) && (((/* implicit */_Bool) 809804436))))) - (1)))))), (arr_36 [i_3])));
                    var_38 = ((/* implicit */_Bool) (-(var_0)));
                }
                for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    arr_46 [i_1] [i_12] [i_12] = (+(((/* implicit */int) (((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) (unsigned short)3465)) - (3465))))) == (arr_27 [i_0] [i_1] [(short)17] [5] [i_12])))));
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (((+(523045478))) < (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))) < (((((/* implicit */long long int) arr_20 [i_1] [i_1] [i_1] [i_0])) & (min((6713007363502809343LL), (((/* implicit */long long int) var_5))))))));
                    arr_47 [(short)14] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((short) ((((((/* implicit */int) var_7)) < (((/* implicit */int) (signed char)-32)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_12 [i_1])) ? (4294967295U) : (((/* implicit */unsigned int) var_0)))))));
                }
                var_40 *= ((/* implicit */signed char) ((int) ((((((/* implicit */int) var_7)) / (((/* implicit */int) var_6)))) * (((/* implicit */int) ((unsigned short) var_10))))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    for (unsigned char i_14 = 1; i_14 < 22; i_14 += 4) 
                    {
                        {
                            arr_53 [i_0] [i_1] [4U] [5U] = ((/* implicit */unsigned char) (signed char)-108);
                            var_41 = (short)32767;
                            var_42 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_9)))) || ((!(((/* implicit */_Bool) arr_44 [1U] [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-1)), (arr_52 [i_0] [i_1] [i_13] [i_14])))) | (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)9838))))))) : ((((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)9)))) : (min((((/* implicit */unsigned long long int) 1128289714)), (2332143133849047557ULL)))))));
                            var_43 = ((/* implicit */signed char) min(((((((-(((/* implicit */int) var_5)))) + (2147483647))) << (((min((var_15), (((/* implicit */unsigned long long int) var_7)))) - (75ULL))))), (((/* implicit */int) arr_19 [(unsigned char)6] [i_1] [i_13]))));
                            arr_54 [i_0] [i_1] [i_13] [13U] [13U] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_14 - 1] [i_14] [i_14 + 1] [i_14 + 1]))) : (((((/* implicit */_Bool) var_5)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (max((((((/* implicit */int) (unsigned char)75)) >> (((/* implicit */int) var_9)))), (((/* implicit */int) ((_Bool) (short)-20762))))) : ((-(((/* implicit */int) arr_4 [i_14] [i_14] [i_1] [i_14 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 4) 
    {
        for (int i_16 = 0; i_16 < 21; i_16 += 3) 
        {
            for (unsigned int i_17 = 0; i_17 < 21; i_17 += 1) 
            {
                {
                    var_44 += ((unsigned char) ((var_3) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) (short)18140)))))));
                    var_45 = ((/* implicit */unsigned long long int) (short)-24435);
                    arr_65 [i_15] [i_16] [i_16] [i_17] = ((/* implicit */unsigned short) (short)-15478);
                    var_46 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) max((arr_34 [i_17] [i_17] [i_17] [i_17] [i_17]), ((signed char)-34)))) / (783034618))))));
                    /* LoopSeq 3 */
                    for (signed char i_18 = 0; i_18 < 21; i_18 += 4) /* same iter space */
                    {
                        arr_68 [i_15] [i_16] [i_17] [i_18] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_20 [i_18] [i_16] [i_18] [i_18])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))) : (arr_20 [i_18] [i_16] [i_17] [i_16])));
                        var_47 = ((/* implicit */unsigned short) ((-1861348842) & (((/* implicit */int) (short)5008))));
                    }
                    for (signed char i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
                    {
                        var_48 ^= ((/* implicit */unsigned char) var_8);
                        arr_73 [i_19] [i_19] [i_19] [10] |= ((/* implicit */unsigned int) (((~(((((/* implicit */int) var_10)) & (((/* implicit */int) (short)-29823)))))) & (min((((/* implicit */int) min(((signed char)42), (arr_13 [i_16] [i_16] [i_16] [i_16])))), ((~(((/* implicit */int) var_14))))))));
                        var_49 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_61 [i_15] [i_16] [i_15] [i_19])), (max((((/* implicit */unsigned long long int) arr_61 [(short)6] [i_15] [i_15] [i_15])), (var_15)))));
                    }
                    /* vectorizable */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2783965829U)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) arr_34 [i_15] [i_20] [i_16] [i_20] [(_Bool)1]))));
                        var_51 *= ((/* implicit */unsigned int) arr_49 [i_15] [i_15] [(unsigned short)12]);
                        arr_76 [i_20] [i_20] [i_20] [(short)2] [i_20] [i_20] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_55 [i_15]))));
                    }
                }
            } 
        } 
    } 
}
