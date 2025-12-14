/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3172
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) 1633852957)) ? (((/* implicit */unsigned long long int) 0)) : (1731170398694792971ULL))))));
    var_14 = var_6;
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_0]))))))));
                arr_8 [i_0] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-1) : (((/* implicit */int) (unsigned short)23460))))) ? ((+(((/* implicit */int) arr_6 [i_2])))) : (((/* implicit */int) arr_2 [i_0])));
                var_16 = arr_6 [i_2];
            }
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) arr_6 [i_1])) ^ (3))) : (((/* implicit */int) (_Bool)1))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [22U])) : (((/* implicit */int) var_10))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                arr_16 [i_4] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_10))))) ? ((+(var_11))) : (((/* implicit */unsigned long long int) arr_10 [i_0] [(unsigned short)1] [i_1] [i_4]))));
                var_19 = ((short) var_10);
                arr_17 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_4] [i_4])) ? (((/* implicit */int) arr_9 [(unsigned short)20] [i_1] [(unsigned short)7])) : (((/* implicit */int) arr_9 [i_0] [(signed char)11] [i_0]))))), ((+(arr_12 [i_0] [i_1] [i_4])))));
            }
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0])) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))));
        }
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                arr_23 [i_6] [i_0] = (((+(arr_7 [i_5] [i_0]))) + (((((/* implicit */_Bool) var_10)) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_14 [i_5])))));
                arr_24 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (2276897023U) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (3831601656U)))))) ? (max((((/* implicit */unsigned long long int) var_12)), (arr_18 [i_6] [i_5]))) : (((((/* implicit */_Bool) (unsigned char)5)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 2018070273U)) : (6143206036988762946ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [9ULL])) ? (((/* implicit */long long int) 2276897023U)) : (arr_10 [i_0] [i_5] [i_5] [i_0]))))))));
                arr_25 [7ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */short) var_12))))) ? (max((((/* implicit */unsigned long long int) ((arr_5 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (((arr_18 [(unsigned short)21] [i_6]) & (arr_13 [i_6] [i_5] [i_0]))))) : (((/* implicit */unsigned long long int) (+(var_7))))));
            }
            var_21 += ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [21ULL]))) : (arr_7 [i_0] [i_5]))))))));
        }
        var_22 = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) var_10))))), (min((arr_10 [i_0] [i_0] [i_0] [16]), (((/* implicit */long long int) var_7))))));
    }
    for (short i_7 = 2; i_7 < 13; i_7 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 3; i_8 < 10; i_8 += 2) 
        {
            arr_32 [i_8] = 2064813894;
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                var_23 = ((/* implicit */_Bool) var_4);
                /* LoopNest 2 */
                for (unsigned char i_10 = 2; i_10 < 12; i_10 += 4) 
                {
                    for (int i_11 = 1; i_11 < 11; i_11 += 4) 
                    {
                        {
                            arr_43 [i_7 - 2] [i_7 + 1] [i_7 + 1] [i_7] [i_11] = ((/* implicit */short) ((((unsigned long long int) (_Bool)1)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)254)) << ((((((((-9223372036854775807LL - 1LL)) - (-9223372036854775790LL))) + (42LL))) - (20LL))))))))))));
                            var_24 += ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_40 [i_8] [(unsigned char)12] [i_7] [i_9] [i_11] [i_11 + 3])))) * (((/* implicit */int) (short)12428))));
                        }
                    } 
                } 
                arr_44 [i_7] [i_7] [i_8 + 3] [i_7] |= 2276897015U;
            }
            arr_45 [i_7] [i_7] [i_7 - 2] &= ((var_3) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [i_8] [i_8] [i_8 + 4]))) : (var_11)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)7346)), (arr_28 [(short)13] [i_8] [i_8])))) : (var_11))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (((((/* implicit */_Bool) -1565773372)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8))))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((0), (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_7)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
        for (int i_12 = 2; i_12 < 10; i_12 += 3) 
        {
            arr_50 [i_7] = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) -1)) : (arr_42 [i_7] [i_7] [i_7] [i_12] [i_12])))) - (((var_11) & (var_11))))));
            var_26 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_5)))) ? (((((/* implicit */_Bool) arr_12 [i_12 - 2] [i_7 - 2] [23LL])) ? (var_5) : (((/* implicit */unsigned long long int) arr_12 [i_12 + 1] [i_7 + 1] [i_7])))) : (((((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) ? (arr_35 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_7]))))));
        }
        var_27 = ((/* implicit */int) (short)(-32767 - 1));
        var_28 = ((/* implicit */signed char) (+(-2064813895)));
    }
    /* LoopSeq 3 */
    for (short i_13 = 0; i_13 < 10; i_13 += 2) 
    {
        arr_53 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (short)-30440))))), (4294934528U)))) ? (((/* implicit */int) arr_47 [12LL])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32751))) : (arr_5 [i_13])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((var_8) >= (var_8))))))));
        /* LoopSeq 1 */
        for (unsigned int i_14 = 3; i_14 < 8; i_14 += 4) 
        {
            var_29 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_14 + 2] [6U])) ? (((/* implicit */int) (short)24484)) : (((/* implicit */int) arr_20 [i_14 + 1] [i_14] [i_13] [i_13]))))), (((((/* implicit */_Bool) 2276897015U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_14 + 2] [i_14] [i_14 + 2] [i_14]))) : (arr_7 [i_14 - 1] [i_14 + 1])))));
            var_30 = ((/* implicit */unsigned short) var_9);
            /* LoopNest 3 */
            for (short i_15 = 1; i_15 < 9; i_15 += 1) 
            {
                for (short i_16 = 0; i_16 < 10; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) arr_4 [21ULL] [i_13]);
                            var_32 = ((/* implicit */signed char) min((min((var_5), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned char) arr_6 [i_13]);
            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_31 [(_Bool)1])) : (max((max((var_8), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) max((var_0), (var_6)))))))))));
        }
    }
    for (signed char i_18 = 0; i_18 < 11; i_18 += 3) 
    {
        var_35 += ((((var_11) | (((((/* implicit */_Bool) arr_5 [i_18])) ? (7167735309598259042ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152))))))) / (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_18] [i_18] [i_18] [i_18]))))), (arr_36 [i_18] [i_18] [i_18])))));
        /* LoopSeq 1 */
        for (unsigned int i_19 = 0; i_19 < 11; i_19 += 3) 
        {
            var_36 *= ((/* implicit */_Bool) min((max((arr_46 [i_18] [i_19]), (((/* implicit */unsigned long long int) var_6)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16363))) : (4417076679226081124ULL)))));
            var_37 = ((/* implicit */signed char) -46124130);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 4) 
        {
            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) 2115402846593008740LL))));
            var_39 += ((/* implicit */unsigned int) max((((/* implicit */long long int) min((max((((/* implicit */int) (unsigned short)148)), (arr_30 [i_18] [i_20]))), (((/* implicit */int) max((var_6), (((/* implicit */short) arr_47 [i_20])))))))), (((5345618467531679642LL) << (((arr_28 [i_18] [i_18] [i_18]) - (5348137546979046284LL)))))));
        }
        var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) max((((/* implicit */long long int) arr_67 [6ULL] [i_18] [i_18])), (max((arr_10 [12U] [i_18] [i_18] [i_18]), (-2577610046824101463LL))))))));
        /* LoopSeq 2 */
        for (long long int i_21 = 0; i_21 < 11; i_21 += 2) /* same iter space */
        {
            var_41 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32125))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_18] [i_18] [i_18] [i_18]))))))))));
            arr_73 [i_18] [i_21] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) var_1))), (((((/* implicit */_Bool) (short)-32126)) ? (((/* implicit */int) arr_21 [i_21] [i_21] [i_21] [i_18])) : (((/* implicit */int) arr_21 [(short)3] [i_21] [i_21] [i_21]))))));
        }
        for (long long int i_22 = 0; i_22 < 11; i_22 += 2) /* same iter space */
        {
            var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-32131))));
            arr_77 [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_18])) ? (arr_14 [i_18]) : (arr_14 [i_18])))) ? (max((arr_14 [i_18]), (arr_14 [i_18]))) : ((~(arr_14 [i_18])))));
            var_43 = ((/* implicit */unsigned char) arr_38 [i_18] [i_22]);
            arr_78 [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) 1700617268U)) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-7550)) + (2147483647))) << (((17034377563224584536ULL) - (17034377563224584536ULL)))))) : (-7369489131662359338LL)));
            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2971283871U)) ? (((/* implicit */unsigned int) arr_49 [i_22] [i_18])) : (var_4)))) ? (((((/* implicit */_Bool) var_9)) ? (arr_10 [i_22] [i_22] [i_18] [i_18]) : (((/* implicit */long long int) arr_49 [i_18] [i_22])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_49 [i_18] [i_22])) != (arr_10 [i_18] [i_18] [i_22] [i_22])))))));
        }
    }
    for (long long int i_23 = 0; i_23 < 20; i_23 += 4) 
    {
        arr_82 [i_23] = ((/* implicit */unsigned char) var_6);
        var_45 = (+(((((/* implicit */_Bool) arr_14 [i_23])) ? (1758178726U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_81 [i_23]))))));
        var_46 = var_7;
        arr_83 [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-30440)) ? (786799690U) : (((/* implicit */unsigned int) -477214493))));
        var_47 = ((/* implicit */unsigned long long int) arr_15 [i_23]);
    }
    var_48 = ((/* implicit */signed char) ((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_10))))) & (((/* implicit */int) var_0))));
}
