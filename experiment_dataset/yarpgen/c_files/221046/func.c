/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221046
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 13153870865940390721ULL)) ? (var_3) : (((/* implicit */int) (short)15905))))) > (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) % (arr_0 [i_0]))))))));
                        var_17 = max((((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)115))))) < (((((/* implicit */int) (signed char)115)) ^ (((/* implicit */int) (signed char)1))))))), (arr_5 [i_3]));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 1; i_5 < 21; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_5)))) & (((/* implicit */int) (signed char)0))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(11914891919028336424ULL))))));
                            var_20 = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_0 [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                        }
                        var_21 -= ((/* implicit */long long int) var_1);
                        var_22 *= ((/* implicit */unsigned char) (_Bool)1);
                    }
                    var_23 = ((/* implicit */unsigned char) (signed char)-64);
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (unsigned short)28696)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2 - 1] [i_0] [i_0] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32748))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) : (arr_3 [i_0] [i_1 + 1] [i_2 + 1])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)28699))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (short)-5936)) | (((/* implicit */int) var_9)))))))));
        }
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            var_27 -= ((/* implicit */unsigned int) ((((/* implicit */int) (((-(((/* implicit */int) (unsigned short)22733)))) >= ((~(((/* implicit */int) var_2))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned long long int) var_3)) : (arr_3 [i_0] [i_7] [i_7])))))))));
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 68719476735LL)) ? (((/* implicit */unsigned long long int) arr_14 [i_0])) : (11002779601544967262ULL))), (6531852154681215191ULL)))) ? (-68719476744LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_7])) ? (var_3) : (((/* implicit */int) arr_9 [i_0] [i_7] [i_0]))))))))));
        }
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((-6344928431026498870LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142)))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 2; i_10 < 21; i_10 += 1) 
                {
                    for (unsigned char i_11 = 2; i_11 < 21; i_11 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_10])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9)))) * (((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))))), (min((((/* implicit */unsigned int) var_14)), (4293870662U)))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_26 [i_10 - 1] [i_10 - 1] [i_11 + 2] [i_11 + 1] [i_11 - 2] [i_11 - 2])), (((((/* implicit */unsigned long long int) arr_0 [i_8])) / (var_13)))))) ? (var_3) : (((/* implicit */int) var_7))));
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (-(3914009839687034016LL)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -68719476736LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5935))) : (2442939272U)))) : (((((/* implicit */_Bool) 14525344690314557251ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22761))) : (var_12))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_8] [i_10 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))) : (2828469803382431485LL)))));
                            var_33 *= ((/* implicit */unsigned short) (((~(((/* implicit */int) var_14)))) - ((~((~(((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((531702807U), (((/* implicit */unsigned int) (short)-27658))))) ? (((((/* implicit */int) (unsigned char)65)) - (((/* implicit */int) var_14)))) : ((+(-1778989602))))), (((/* implicit */int) (short)22329))));
                /* LoopSeq 2 */
                for (unsigned short i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((31), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 2305843009213693951LL)) || (((/* implicit */_Bool) 3914009839687034016LL)))) && (((/* implicit */_Bool) 11002779601544967264ULL))))) : (((int) var_14))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-5936)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_13 - 1] [i_12] [i_0] [i_8] [i_8] [i_0]))))))));
                        var_37 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_8]))));
                        var_38 = ((/* implicit */short) ((((((/* implicit */int) (signed char)63)) & (((/* implicit */int) var_5)))) | (((/* implicit */int) var_5))));
                    }
                }
                for (unsigned short i_14 = 0; i_14 < 23; i_14 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51754)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5935))) : (14140454940574414908ULL)))) ? (((((/* implicit */_Bool) arr_24 [i_0] [i_9])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) arr_24 [i_8] [i_0]))));
                    var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) (_Bool)1))));
                }
            }
            var_41 *= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_19 [i_8] [i_0] [i_0])) : (((/* implicit */int) var_6)))))))));
        }
        var_42 = ((/* implicit */unsigned short) ((max(((-(((/* implicit */int) var_14)))), (min((((/* implicit */int) (short)-14616)), (-1119412087))))) | (((/* implicit */int) var_10))));
        var_43 = ((/* implicit */unsigned long long int) ((short) 11002779601544967275ULL));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_15 = 2; i_15 < 19; i_15 += 3) 
    {
        var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (arr_23 [i_15 - 2] [i_15] [i_15] [i_15])));
        var_45 = ((/* implicit */unsigned int) (+(var_12)));
    }
}
