/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19421
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8804)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)31717)) : (((/* implicit */int) var_13)))))));
    }
    for (long long int i_1 = 2; i_1 < 16; i_1 += 4) 
    {
        var_16 = ((/* implicit */int) 296682203U);
        var_17 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (((3998285092U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94)))))))) ? (min((((((/* implicit */_Bool) var_3)) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_1 [i_1] [i_1])))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) 1172025592)) : (arr_6 [i_2])))) || (((/* implicit */_Bool) -4537442238599328796LL)))))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) arr_7 [i_2]);
        var_19 = ((/* implicit */_Bool) var_12);
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65522)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) || (((((/* implicit */_Bool) arr_14 [(signed char)11] [i_4] [i_3])) || (((/* implicit */_Bool) var_6))))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (((+(var_5))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (arr_15 [i_5] [i_4] [i_4] [i_3]))))))))));
                arr_19 [i_5] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)100)) + (arr_9 [1U] [1U])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))) : (arr_12 [(_Bool)1])));
            }
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                arr_22 [i_3] [i_3] [i_3] [(short)21] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-90)) && (((((/* implicit */_Bool) arr_17 [i_4] [(unsigned char)19])) || (((/* implicit */_Bool) var_7))))));
                var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (arr_18 [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [6U] [6U] [6U] [i_6])))))) ? (6632711245110440440LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_20 [(signed char)16] [i_4] [i_3]) : (((/* implicit */int) (_Bool)1)))))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_3] [i_4])) || (((/* implicit */_Bool) var_3)))))) % (((((/* implicit */long long int) ((/* implicit */int) (signed char)-93))) % (arr_16 [(unsigned short)13] [19U] [(unsigned short)13])))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [(signed char)9] [(signed char)9])) ? (((/* implicit */long long int) 1040384U)) : (arr_12 [i_4])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1148518123)) ? (((/* implicit */int) (signed char)-81)) : (arr_20 [i_6] [i_4] [i_3]))))));
            }
            arr_23 [i_3] [16] [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_4]);
            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_10) % (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
        }
        for (short i_7 = 4; i_7 < 23; i_7 += 3) 
        {
            arr_26 [i_7] [(unsigned short)22] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (-1172025592) : (((/* implicit */int) var_12)))) + ((+(((/* implicit */int) var_12))))));
            arr_27 [i_7] [i_3] [i_7] = ((/* implicit */int) arr_13 [i_7]);
        }
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            arr_31 [i_8] [i_3] [i_3] = ((/* implicit */long long int) var_12);
            arr_32 [i_8] [i_8] [(_Bool)1] = ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (((((/* implicit */_Bool) arr_17 [i_8] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_10))));
            var_26 = ((/* implicit */unsigned int) var_6);
        }
        for (unsigned char i_9 = 1; i_9 < 22; i_9 += 1) 
        {
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((var_9) ? (-6632711245110440441LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [17ULL] [i_3] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (arr_36 [i_3])))))))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_9] [i_3] [i_3])) && (((((/* implicit */_Bool) arr_21 [i_3] [(unsigned char)17])) || (((/* implicit */_Bool) (short)-23731))))));
            var_29 = ((/* implicit */int) (!(var_13)));
            /* LoopSeq 2 */
            for (signed char i_10 = 1; i_10 < 22; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_3] [i_10] [i_3] [19LL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_3] [i_3] [i_3]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_10]))) / (arr_18 [i_3] [i_9]))))))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_16 [i_3] [i_3] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_12])))))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_33 [i_9] [i_10] [5U])) : (arr_21 [i_3] [i_3])))));
                            arr_44 [i_3] [i_9] [(unsigned char)5] [i_11] [i_12] [i_10] = ((((((/* implicit */long long int) var_11)) != (var_8))) ? (arr_16 [i_3] [i_9 + 2] [i_10 + 1]) : (((/* implicit */long long int) var_11)));
                            arr_45 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_13))) != (var_8))) ? (arr_16 [i_12] [(short)3] [(short)3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)30)))));
                            arr_46 [i_3] [i_10] [i_11] [i_11] = arr_38 [i_10] [i_10];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_13 = 2; i_13 < 24; i_13 += 3) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_35 [i_13] [i_10] [i_3])) || (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) var_12)))))));
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_37 [i_14] [i_13] [i_10] [i_9])) : (((/* implicit */int) var_4))))));
                            var_34 = ((/* implicit */short) arr_15 [i_3] [i_10 + 3] [i_13] [i_3]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_49 [i_9] [23LL] [i_9] [i_3]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_10] [i_9])) && (((/* implicit */_Bool) arr_12 [i_10])))))) : (arr_13 [i_9])));
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) 2147483647))));
                }
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 25; i_16 += 3) 
                {
                    for (unsigned int i_17 = 3; i_17 < 24; i_17 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */int) var_1);
                            var_38 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) arr_30 [(signed char)24])))) + (((((/* implicit */long long int) arr_58 [i_9] [i_10] [i_17 - 1])) % (arr_47 [i_3] [i_3] [i_9 + 3] [(unsigned char)13] [i_17 - 2] [22LL])))));
                        }
                    } 
                } 
            }
            for (signed char i_18 = 1; i_18 < 22; i_18 += 3) 
            {
                var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) < (5540159146586683107LL))))) < ((+(var_10))))))));
                var_40 = ((/* implicit */_Bool) var_6);
                var_41 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_14 [i_3] [i_9 - 1] [i_9 - 1])) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [23U] [i_9] [i_9 + 2] [(unsigned char)8] [(unsigned char)0] [i_9 + 2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_12)))))));
                /* LoopSeq 3 */
                for (unsigned int i_19 = 1; i_19 < 22; i_19 += 3) /* same iter space */
                {
                    var_42 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_62 [i_18] [12LL] [12LL])))) ? (((((/* implicit */_Bool) arr_53 [i_3] [i_3] [i_9 + 3] [i_18] [i_18] [i_18])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_6)))))));
                    var_43 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */unsigned int) arr_36 [(_Bool)1])) : (arr_62 [i_3] [7U] [i_3]))) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-26474)))));
                }
                for (unsigned int i_20 = 1; i_20 < 22; i_20 += 3) /* same iter space */
                {
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_18] [i_18] [i_18])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)65535))))) && (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_51 [i_20 + 2] [i_18] [i_9] [i_9] [i_9] [14] [i_3]))))));
                    var_45 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_3] [i_3] [i_18] [i_20]))) < (var_10)))) < (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_56 [i_20] [i_18 + 2] [i_9] [(_Bool)1])))))));
                }
                for (signed char i_21 = 2; i_21 < 24; i_21 += 1) 
                {
                    var_46 -= ((/* implicit */signed char) var_2);
                    var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) arr_10 [(unsigned char)13]))));
                    var_48 += ((/* implicit */unsigned char) ((var_13) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_58 [4LL] [15LL] [4LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                }
                var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) (_Bool)1))));
            }
        }
        var_50 = ((/* implicit */unsigned char) var_11);
    }
    var_51 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_8) != (((/* implicit */long long int) var_11)))))))) || (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) < (((/* implicit */int) (!(var_13))))))));
    var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))), (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_7)));
}
