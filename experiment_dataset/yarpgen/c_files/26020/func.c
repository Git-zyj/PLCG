/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26020
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((((/* implicit */long long int) arr_1 [(signed char)0])) != (((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0]))) ? (((long long int) arr_1 [9ULL])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                var_16 = ((/* implicit */_Bool) ((unsigned short) 3765952896U));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_0 - 1]) : (((/* implicit */int) arr_0 [i_0 - 1] [i_1]))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            }
            for (long long int i_3 = 4; i_3 < 12; i_3 += 2) 
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1788508684U)) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_11 [i_0 + 1] [13U] [i_1] [i_3 + 1]))))) ? (((max((arr_9 [i_0]), (((/* implicit */long long int) (_Bool)1)))) % (max((((/* implicit */long long int) 2506458599U)), (arr_10 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0 + 1] [5U])) * (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_6))))))))));
                var_19 = min((((/* implicit */long long int) -1)), (((((/* implicit */_Bool) (unsigned short)37589)) ? (-1713633239720504142LL) : (((/* implicit */long long int) 1788508684U)))));
                var_20 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_2 [i_3 - 3] [i_0 - 1]))))));
                var_21 = (~(((((/* implicit */int) (!(((/* implicit */_Bool) 4294967283U))))) + (((0) - (-1))))));
            }
        }
        arr_13 [12ULL] |= ((/* implicit */unsigned long long int) max(((unsigned char)242), (((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)5)), ((short)-16)))) >= (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551612ULL)) && (((/* implicit */_Bool) (signed char)-55))))))))));
        var_22 = ((/* implicit */_Bool) arr_10 [8] [i_0 + 1] [i_0 - 1] [8]);
    }
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_23 = ((/* implicit */int) (~(((max((((/* implicit */long long int) var_11)), (var_13))) & (max((((/* implicit */long long int) arr_14 [11LL])), (6871331064908822232LL)))))));
        var_24 |= ((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */int) var_12)) == (((/* implicit */int) ((unsigned short) var_9)))))), (var_2)));
        var_25 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */long long int) max((arr_14 [(signed char)12]), (((/* implicit */unsigned int) var_11))))) : (((((/* implicit */long long int) arr_14 [i_4])) + (arr_15 [(unsigned short)4] [i_4])))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_26 = ((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_5] [i_5])), ((-(min((-1), (((/* implicit */int) (unsigned char)14))))))));
        /* LoopSeq 4 */
        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
        {
            var_27 = ((/* implicit */_Bool) max((2506458612U), (((/* implicit */unsigned int) var_10))));
            arr_23 [i_6] = ((/* implicit */_Bool) min((((/* implicit */int) arr_17 [i_6 + 2])), (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
        }
        for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                var_28 = ((/* implicit */long long int) 1128534355);
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((arr_24 [i_5] [9ULL] [i_8]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7] [i_8])))));
                var_30 = ((/* implicit */unsigned int) (~(((unsigned long long int) var_11))));
            }
            /* vectorizable */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(1192939963)))) + (8258028602771776139LL)));
                var_32 = ((/* implicit */long long int) (-(-671437047)));
                var_33 -= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)36))))));
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7791345845853320294ULL)) ? (((((/* implicit */_Bool) var_15)) ? (arr_12 [i_5] [i_7] [i_9 - 1]) : (arr_12 [i_9 - 1] [i_9 - 1] [i_7]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))));
            }
            for (long long int i_10 = 3; i_10 < 12; i_10 += 2) 
            {
                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_5])) ? (arr_27 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) min(((_Bool)1), (((((/* implicit */long long int) ((/* implicit */int) var_5))) == (arr_15 [i_5] [(unsigned short)16])))))) : (((/* implicit */int) ((max((10232908581107009905ULL), (((/* implicit */unsigned long long int) 2506458612U)))) != (((((/* implicit */_Bool) -11LL)) ? (var_9) : (((/* implicit */unsigned long long int) arr_15 [i_5] [i_7])))))))));
                var_36 = ((/* implicit */unsigned char) (unsigned short)128);
                var_37 = ((/* implicit */unsigned long long int) (~(var_13)));
            }
            var_38 = ((/* implicit */signed char) var_13);
            var_39 = (unsigned short)3;
        }
        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            var_40 = ((/* implicit */unsigned long long int) -1359684440);
            var_41 = ((/* implicit */long long int) max((var_41), (((((_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [5] [i_5] [i_5])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_11])))))) ? (max((8258028602771776145LL), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */int) var_1)), (arr_1 [(unsigned char)1]))))))))));
        }
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            var_42 = ((/* implicit */unsigned long long int) (_Bool)0);
            /* LoopSeq 1 */
            for (unsigned short i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    var_43 = ((/* implicit */short) ((((/* implicit */_Bool) -6079051337456412397LL)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53)))));
                    var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [i_12 + 1] [i_13] [4LL])) ? (((/* implicit */int) ((unsigned short) (short)-10647))) : (((/* implicit */int) ((unsigned short) 2386525480U)))));
                }
                arr_49 [i_5] [i_5] [i_12] [(unsigned short)7] |= ((/* implicit */long long int) ((int) (unsigned short)3));
                var_45 -= ((/* implicit */unsigned char) ((arr_19 [i_12]) * (((/* implicit */unsigned long long int) -8258028602771776141LL))));
            }
            var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [(_Bool)1] [i_12 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))));
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 16; i_15 += 1) 
    {
        for (unsigned short i_16 = 0; i_16 < 16; i_16 += 3) 
        {
            {
                var_47 = arr_55 [(unsigned short)8] [(unsigned short)8] [i_16];
                arr_56 [i_15] |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_15 [i_15] [i_15])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_15] [i_16] [(unsigned char)10]))))) : (((/* implicit */int) var_12))))));
                var_48 = ((/* implicit */unsigned long long int) arr_55 [i_15] [i_16] [i_16]);
            }
        } 
    } 
    var_49 |= ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 2 */
    for (long long int i_17 = 0; i_17 < 17; i_17 += 2) 
    {
        var_50 = ((/* implicit */unsigned char) ((short) min((arr_59 [13] [(_Bool)1]), (arr_59 [i_17] [i_17]))));
        var_51 -= ((/* implicit */unsigned short) var_1);
    }
    for (unsigned char i_18 = 0; i_18 < 12; i_18 += 1) 
    {
        var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) ((arr_57 [i_18]) && (((/* implicit */_Bool) 18446744073709551610ULL))))), (arr_43 [i_18] [i_18] [i_18]))))))));
        var_53 -= ((/* implicit */int) max((((/* implicit */long long int) arr_12 [i_18] [i_18] [(unsigned char)10])), (((long long int) (+(((/* implicit */int) var_14)))))));
    }
    var_54 = min((((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)18)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) 2506458597U)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_7))))), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_6))) + (((((/* implicit */int) var_8)) - (((/* implicit */int) var_15))))))));
}
