/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220763
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            var_11 = ((/* implicit */int) (unsigned char)255);
            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((min((max((((/* implicit */int) var_3)), (-715386125))), (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1]))))))))));
            var_13 = ((/* implicit */unsigned long long int) max(((short)-21541), (((/* implicit */short) (unsigned char)0))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((max((((/* implicit */int) max(((unsigned char)202), (((/* implicit */unsigned char) (signed char)30))))), ((~(((/* implicit */int) arr_4 [(short)11])))))) % (((/* implicit */int) (!(arr_8 [i_0] [i_2 + 3] [i_0] [i_1 + 1]))))));
                        arr_11 [i_0] [8] [i_2 + 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((((/* implicit */_Bool) -715386125)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (signed char)127))))))) ? (((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)27)), (arr_4 [i_3])))) : (((((/* implicit */_Bool) 817992236518120331ULL)) ? (((/* implicit */int) var_8)) : (715386116))))) : (((arr_8 [i_2] [i_2 + 1] [i_2] [i_2 + 2]) ? (((/* implicit */int) arr_8 [i_2] [i_2 + 1] [6ULL] [i_2 + 2])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 + 2]))))));
                        arr_12 [i_0] [(signed char)1] [i_2] [(signed char)1] [i_3] = ((/* implicit */int) ((((86976444) == (((/* implicit */int) (unsigned char)249)))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)6))))), (17736348977607698298ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)137)), ((+(17732923532771328LL))))))));
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) ? (-1) : (((((/* implicit */_Bool) arr_9 [i_0] [i_2 + 2] [i_3])) ? (((/* implicit */int) (short)22888)) : (((/* implicit */int) (short)4361))))));
                    }
                } 
            } 
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned char) var_7)), ((unsigned char)250))), (((/* implicit */unsigned char) (signed char)15))))) ? (((/* implicit */int) var_6)) : (((int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-88))) ^ (2251799813681152LL)))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_15 [(unsigned short)10] [i_0] [i_4] = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_2)) ? (817992236518120331ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15))))), (min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_6 [i_4] [i_4] [i_0] [i_4]))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)93)))))))));
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) var_6));
        }
        for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (short)-25049))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */long long int) (unsigned char)9)), (arr_13 [i_0] [i_5]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)54)) ^ (((/* implicit */int) (short)22888))))) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) 9641133099559107588ULL))))))) : ((-(((/* implicit */int) min((var_3), (var_7))))))));
                var_18 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (short)-22888))) ? (((int) var_3)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)58040)) : (((/* implicit */int) (_Bool)1))))))), (max((max((var_1), (((/* implicit */unsigned long long int) -334475420)))), (((/* implicit */unsigned long long int) max((-17), (((/* implicit */int) (short)-15)))))))));
                arr_22 [i_0] [14] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_20 [i_0] [(short)14] [i_6]), (var_4)))) ? (((/* implicit */int) (short)-15)) : (((((/* implicit */_Bool) (short)30957)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_0] [i_0] [(_Bool)1] [(_Bool)1]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) arr_2 [i_5] [i_5] [i_0]))))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) (short)22892)) && (((/* implicit */_Bool) arr_21 [i_0] [(unsigned char)0])))))))));
            }
            var_19 += ((((/* implicit */int) ((short) 7298796226537596462ULL))) / (((((/* implicit */int) (signed char)-65)) - (((/* implicit */int) ((((/* implicit */int) (unsigned char)222)) != (((/* implicit */int) (unsigned short)256))))))));
        }
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            var_20 = ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_8))));
            arr_25 [i_0] = ((/* implicit */unsigned short) (unsigned char)225);
        }
        var_21 = ((/* implicit */int) max((var_21), (max((((/* implicit */int) max(((signed char)65), (var_7)))), (((((/* implicit */int) (short)3111)) << (((arr_23 [i_0] [i_0]) - (409825465)))))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-59))))) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (((~(((/* implicit */int) (unsigned char)222)))) <= (((/* implicit */int) max(((unsigned char)172), (((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_0]))))))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        arr_29 [i_8] = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) arr_26 [i_8] [i_8])))), (-315027212))), (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (unsigned short)14545)))) + ((-(((/* implicit */int) var_5))))))));
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_23 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                        arr_37 [i_10] [i_10] [i_10] [i_11] [i_11] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(1188351235004718785ULL)))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_8] [i_9]))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_8] [i_8] [i_8]))) < (min((((/* implicit */unsigned long long int) arr_36 [i_8] [i_8] [i_9] [i_9] [i_10] [i_11])), (arr_30 [i_8])))))));
                        var_24 = ((/* implicit */_Bool) 3474452909250911803ULL);
                        arr_38 [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1188351235004718792ULL)) ? (arr_34 [i_11]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_8] [i_8])))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */int) (signed char)41)) >= (1051819300))))));
        var_26 = ((/* implicit */unsigned short) 18446744073709551615ULL);
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 12; i_12 += 3) 
    {
        arr_41 [i_12] [i_12] = ((/* implicit */int) ((unsigned short) (unsigned char)2));
        var_27 = ((/* implicit */int) min((var_27), ((-(((/* implicit */int) arr_8 [i_12] [i_12] [i_12] [(unsigned char)1]))))));
        /* LoopNest 3 */
        for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            for (signed char i_14 = 2; i_14 < 9; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_50 [(unsigned char)0] [i_14] [i_14 + 3] [i_15] [(signed char)1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_4)) != (((/* implicit */int) arr_40 [i_13])))) ? (18446744073709551615ULL) : (((((/* implicit */_Bool) 9506367393488976801ULL)) ? (1188351235004718785ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) 784611251093693567ULL)) ? (8940376680220574814ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
                        var_29 *= (-(((/* implicit */int) ((((/* implicit */int) (signed char)124)) > (((/* implicit */int) (unsigned short)15183))))));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */signed char) min((3474452909250911808ULL), (((((/* implicit */_Bool) 17662132822615858049ULL)) ? (((((/* implicit */_Bool) var_8)) ? (17662132822615858048ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : ((~(9550819752284502734ULL)))))));
    var_31 = ((/* implicit */int) max((18446744073709551615ULL), (min((((/* implicit */unsigned long long int) var_2)), (max((1188351235004718772ULL), (((/* implicit */unsigned long long int) var_6))))))));
}
