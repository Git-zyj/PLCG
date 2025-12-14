/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196199
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
    var_13 = ((/* implicit */unsigned char) (short)-2);
    var_14 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-2)))))), (max((((/* implicit */unsigned long long int) var_8)), (7641940449195620727ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((11311498939489015746ULL) < (((/* implicit */unsigned long long int) -1845038667646941282LL))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(2407902588U)))) && (((/* implicit */_Bool) max(((signed char)32), (((/* implicit */signed char) var_3)))))));
        var_16 = ((/* implicit */signed char) ((unsigned char) 6079601081017396588ULL));
        /* LoopSeq 2 */
        for (long long int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-((+(3817861390U)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((arr_10 [i_1]) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)105)) - (((/* implicit */int) (_Bool)1))))))))));
                arr_11 [i_0] = ((/* implicit */signed char) var_12);
                /* LoopNest 2 */
                for (unsigned int i_3 = 4; i_3 < 13; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        {
                            arr_17 [i_0] [i_1] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */int) var_4)) | (((int) var_0))));
                            var_18 &= ((/* implicit */unsigned short) ((-3811618402177363505LL) - (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            var_19 = ((/* implicit */unsigned int) 2LL);
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) var_8))) & (var_9)))));
            }
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        {
                            var_21 = ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)6)))) ? (min((((/* implicit */unsigned long long int) (unsigned char)255)), (arr_0 [9ULL] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */short) var_4)))))))) + (((/* implicit */unsigned long long int) (-(arr_20 [i_1 - 2] [i_5 - 1] [i_5 - 2] [i_0] [i_5 - 2])))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_3 [i_0] [i_1 + 1] [i_1 - 3]))) ? (min((((((/* implicit */_Bool) var_7)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) var_0)))) : (max((((/* implicit */unsigned int) arr_1 [i_0])), (((unsigned int) arr_1 [i_0]))))));
                            var_23 = ((/* implicit */short) (_Bool)1);
                            var_24 *= ((/* implicit */int) (((-(((((/* implicit */_Bool) var_6)) ? (var_7) : (2147483646))))) > (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 15872)), (12014034319883346464ULL)))) ? (((/* implicit */int) arr_9 [i_1 - 3] [i_5] [i_1])) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_16 [13U] [12] [i_5] [i_1])), (var_12))))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_10 = 1; i_10 < 12; i_10 += 1) 
                {
                    for (unsigned int i_11 = 2; i_11 < 12; i_11 += 2) 
                    {
                        {
                            var_25 *= ((/* implicit */unsigned long long int) var_0);
                            var_26 &= ((/* implicit */long long int) ((((/* implicit */int) ((var_9) < (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) + (((int) 1041672701))));
                            arr_34 [i_0] [i_0] [i_9 + 2] [i_10] [i_0] = ((((3U) << (((((/* implicit */long long int) -1775367644)) / (-1845038667646941282LL))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [7U] [i_0] [i_9 + 2]))) != (arr_8 [i_0] [i_0] [i_9 + 3] [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 13; i_12 += 4) 
                {
                    for (short i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        {
                            arr_40 [i_0] [i_12] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -3811618402177363479LL)) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-20))) / (max((((/* implicit */long long int) var_0)), (-1845038667646941284LL))))) : (max((((/* implicit */long long int) ((12014034319883346444ULL) != (((/* implicit */unsigned long long int) arr_20 [i_0] [i_8 - 1] [i_9 + 2] [i_0] [i_13]))))), ((-(3373508132686820912LL)))))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_8])) ? (arr_3 [(unsigned char)12] [i_9 + 2] [i_9 + 3]) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 7949702542711279509ULL)))) : ((-(arr_12 [i_9 + 1] [i_8 - 1]))))))));
                        }
                    } 
                } 
                var_28 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) / (((/* implicit */int) var_0)))) + (((var_10) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]))))))) && (((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (arr_24 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((var_7) == (((/* implicit */int) var_8))))))))));
            }
            var_29 = ((((/* implicit */int) arr_32 [i_0] [i_8] [i_0] [9U] [i_0] [9U] [1LL])) / (((((/* implicit */int) (unsigned char)11)) * (((/* implicit */int) (unsigned short)48900)))));
            arr_41 [i_0] [i_0] [i_8 - 1] = ((/* implicit */_Bool) max((arr_12 [i_8 - 1] [i_0]), (((/* implicit */long long int) min((((/* implicit */int) ((_Bool) var_5))), (((((/* implicit */int) var_8)) + (-134217728))))))));
            var_30 = ((/* implicit */long long int) ((((((/* implicit */int) var_10)) + (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_8] [i_8 - 1])))) * (((((/* implicit */int) min((var_12), (var_12)))) >> ((((+(((/* implicit */int) (unsigned char)217)))) - (194)))))));
        }
    }
    for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) 
    {
        var_31 -= ((/* implicit */_Bool) (signed char)6);
        /* LoopSeq 2 */
        for (unsigned int i_15 = 4; i_15 < 11; i_15 += 1) 
        {
            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_10 [6ULL]), (arr_10 [2ULL]))))));
            /* LoopSeq 1 */
            for (unsigned int i_16 = 1; i_16 < 13; i_16 += 3) 
            {
                var_33 = ((/* implicit */unsigned int) (short)4);
                var_34 = (!(((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_4)))))))));
                arr_51 [i_16] [i_15 - 2] = ((/* implicit */signed char) var_8);
                var_35 *= ((/* implicit */unsigned long long int) (_Bool)0);
            }
            var_36 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 33554176)), (18446744073709551604ULL)));
        }
        for (unsigned char i_17 = 0; i_17 < 14; i_17 += 3) 
        {
            arr_55 [i_17] [i_17] [i_17] = ((/* implicit */_Bool) 2031616);
            arr_56 [i_17] [i_17] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((3811618402177363491LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))) / ((-(-1)))))), (((unsigned int) var_12))));
        }
    }
}
