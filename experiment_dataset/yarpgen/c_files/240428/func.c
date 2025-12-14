/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240428
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) >= (((/* implicit */int) var_3)))) ? (min((((/* implicit */int) var_1)), (((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((18408146170497077712ULL) < (var_5)))) : (((/* implicit */int) var_0)))))))));
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((var_2) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    var_12 = ((/* implicit */long long int) 18408146170497077712ULL);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) -8876027280946409525LL))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0] [i_0])), (16256LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((+(-3885592252839317658LL)))))));
            var_13 -= ((/* implicit */signed char) ((min((arr_5 [i_1]), (var_2))) ? (((((-3885592252839317659LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)127)) - (66))))) : (((/* implicit */long long int) ((arr_5 [i_0]) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0])))))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_2 [i_0] [i_0]) + (((/* implicit */unsigned int) (+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) -16254LL))))))))));
        }
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 0LL)) ? (3885592252839317644LL) : (-1272495145431699254LL)))))));
            var_15 = ((/* implicit */unsigned short) arr_5 [i_0]);
            arr_10 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8958285286698800023LL)) && (((/* implicit */_Bool) 9223372036854775807LL))));
        }
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) arr_9 [i_3])))) : (((/* implicit */int) max((arr_11 [i_0] [i_3] [i_0]), (arr_11 [i_0] [i_3] [i_3]))))));
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) max((var_7), (((/* implicit */short) arr_11 [i_0] [i_3] [i_0]))))))), (((arr_11 [i_0] [i_3] [i_3]) ? (((/* implicit */int) arr_3 [i_3])) : ((+(((/* implicit */int) var_2)))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                arr_17 [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) var_4));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    for (signed char i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((((/* implicit */_Bool) -8958285286698800010LL)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (signed char)45)))) & (((/* implicit */int) (signed char)101)))))));
                            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_6])))))));
                        }
                    } 
                } 
                var_19 = (!(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (2634022764U))));
                var_20 = ((/* implicit */short) (signed char)-98);
            }
        }
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)6292))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -3885592252839317683LL)) ? (arr_21 [i_0]) : (arr_19 [i_7] [i_7] [i_7] [i_0])))))))));
            var_22 = ((/* implicit */unsigned short) var_3);
            var_23 = (~(((18408146170497077693ULL) * (((/* implicit */unsigned long long int) -9223372036854775801LL)))));
            var_24 += ((/* implicit */_Bool) (((+(max((((/* implicit */unsigned long long int) -3912031185573965759LL)), (12060661294071061639ULL))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_7]))) + (arr_21 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_7])) ? (((/* implicit */int) arr_9 [i_7])) : (((/* implicit */int) (unsigned short)0))))))))));
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            var_25 = ((/* implicit */_Bool) max((var_25), (arr_5 [i_8])));
            var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17592186044415LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 17592186044422LL)) ? (6386082779638489977ULL) : (((/* implicit */unsigned long long int) -9223372036854775803LL)))))));
        }
        var_27 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])))) <= ((~(((/* implicit */int) arr_3 [i_0]))))));
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((((/* implicit */int) (short)-9580)) == ((-(((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) 6386082779638489978ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [4U] [4U]))) : (((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [(signed char)2] [i_9])))))));
        arr_31 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) 1272495145431699235LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9] [i_9]))) : (((((/* implicit */_Bool) arr_30 [i_9] [i_9])) ? (arr_30 [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (signed char i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 25; i_11 += 4) 
        {
            for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                {
                    arr_41 [i_10] [i_10] [i_10] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_28 [i_10] [i_11])))) : (18408146170497077700ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-58))) : (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) arr_35 [i_10] [i_10] [i_10]))))) ? (((/* implicit */long long int) ((unsigned int) var_6))) : (((((/* implicit */_Bool) arr_33 [i_10] [i_10])) ? (arr_30 [i_11] [i_10]) : (arr_30 [i_10] [i_12]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_14 = 2; i_14 < 21; i_14 += 2) /* same iter space */
                        {
                            var_31 *= ((/* implicit */unsigned long long int) ((arr_46 [i_14] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 + 1]) / (arr_46 [i_14 + 1] [i_14 - 1] [i_14 + 3] [i_14 + 1] [i_14 + 3])));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_10] [i_10] [i_12] [i_13])) ? (((((/* implicit */_Bool) arr_29 [i_10])) ? (((/* implicit */int) arr_43 [i_14 - 2] [i_10] [i_10] [i_10])) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) 8708638191188880547LL)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (_Bool)1))))));
                            var_33 |= ((/* implicit */_Bool) arr_44 [i_13]);
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((18446744073709551612ULL) / (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_44 [i_11]))))))));
                        }
                        for (unsigned short i_15 = 2; i_15 < 21; i_15 += 2) /* same iter space */
                        {
                            var_35 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (16380891494212307420ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_47 [i_10] [i_10] [i_12] [i_10] [i_13] [i_15])) ? (arr_47 [i_12] [i_11] [i_12] [i_10] [i_13] [i_10]) : (arr_47 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
                            var_37 *= ((((((/* implicit */_Bool) 562949953388544LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_12] [i_11]))) : (var_5))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)124))))));
                            var_38 |= ((/* implicit */long long int) (signed char)-16);
                        }
                        for (unsigned short i_16 = 2; i_16 < 21; i_16 += 2) /* same iter space */
                        {
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-125)))))));
                            arr_52 [i_10] [i_10] [i_13] = ((/* implicit */_Bool) arr_38 [i_10] [i_10] [i_10] [i_13]);
                        }
                        for (unsigned short i_17 = 2; i_17 < 21; i_17 += 2) /* same iter space */
                        {
                            var_40 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_17 - 2] [i_17 - 1] [i_17 - 2] [i_17 + 3] [i_17 + 2] [i_17] [i_17])) ? (((((/* implicit */_Bool) arr_46 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1102631026147371895LL))))))));
                            var_41 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_43 [i_17] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_39 [i_11] [i_11] [i_10]))))));
                            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_45 [i_17 + 3] [i_17] [i_17 + 2] [i_17 + 2] [i_17] [i_17 + 4])))))));
                            var_43 *= ((/* implicit */signed char) ((((/* implicit */int) var_9)) & (((((/* implicit */int) arr_43 [i_10] [i_13] [i_13] [i_13])) & (((/* implicit */int) var_3))))));
                        }
                        var_44 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_13] [i_12] [i_11] [i_11] [i_10] [i_10] [i_10])) ? (((((/* implicit */_Bool) arr_46 [i_13] [i_11] [i_12] [i_13] [i_10])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_10] [i_10] [i_11]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_45 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_45 [i_10] [i_11] [i_11] [i_11] [i_12] [i_18])), ((~(((((/* implicit */_Bool) 1102631026147371894LL)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_46 = ((/* implicit */short) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_58 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (arr_53 [i_10] [i_11] [i_12] [i_11] [i_19] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (arr_46 [i_10] [i_10] [i_10] [i_10] [i_10]))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) -3767603959946901380LL)) ? (((/* implicit */int) (unsigned short)15002)) : (((/* implicit */int) arr_40 [i_10] [i_11] [i_10]))))) ? (((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (short)2275)) : (((/* implicit */int) arr_32 [i_19])))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_32 [i_10])))))) - (2226)))));
                            var_47 ^= ((signed char) max((((/* implicit */short) (_Bool)1)), ((short)32755)));
                        }
                    }
                    arr_59 [i_10] [i_11] [i_12] [i_10] = ((/* implicit */signed char) var_1);
                }
            } 
        } 
        var_48 = ((/* implicit */signed char) (unsigned short)40689);
    }
}
