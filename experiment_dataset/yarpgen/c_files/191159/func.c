/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191159
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
    var_16 += max((((/* implicit */long long int) var_11)), (((((((/* implicit */int) var_14)) == (((/* implicit */int) (short)-23924)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_5))));
    var_17 = ((/* implicit */long long int) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0] [i_1] [8LL]))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6291456U)) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_3] [i_0])))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_4] [16U] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_3] [i_3] [i_2] [(_Bool)1] [(_Bool)1]))) : (arr_8 [i_0] [i_1] [i_3] [i_4])));
                        }
                        for (long long int i_5 = 2; i_5 < 18; i_5 += 4) 
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_3] [(signed char)12] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_5 - 1] [i_5] [i_5 - 2] [i_5 - 1] [i_5 - 2] [i_5]))));
                            var_21 = (-(((long long int) 6291433U)));
                            var_22 = ((/* implicit */long long int) (short)23917);
                        }
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            arr_19 [8U] [i_2] [i_2] [8U] [i_0] = ((/* implicit */long long int) (~(4288675847U)));
                            arr_20 [i_0] [17] [17] [(signed char)0] [(signed char)0] = ((((/* implicit */int) ((((/* implicit */_Bool) 18121564829210927181ULL)) || (((/* implicit */_Bool) arr_14 [i_0] [i_0]))))) | (((/* implicit */int) arr_17 [i_2])));
                            arr_21 [i_0] [i_1] [i_1] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((~(arr_8 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) var_8))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_14 [(signed char)9] [(signed char)9])))) ? (1487021363) : (((/* implicit */int) ((signed char) var_10)))));
                        }
                    }
                    for (short i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        var_24 = ((/* implicit */short) (~(((/* implicit */int) ((short) -1282192134)))));
                        var_25 |= ((/* implicit */unsigned int) (~(arr_14 [i_7 + 2] [i_7 + 3])));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_8] = ((/* implicit */unsigned long long int) (!(((arr_8 [i_8] [i_8] [i_8] [i_8]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [4LL] [2] [2] [i_2] [i_7 + 3] [i_8])))))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((arr_22 [i_7 - 1] [0ULL] [i_8] [(signed char)11] [i_8]) ? (((/* implicit */int) arr_22 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7])) : (((/* implicit */int) arr_22 [i_7 + 2] [i_8] [i_7 + 2] [(_Bool)1] [(_Bool)1])))))));
                        }
                        var_27 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
                    }
                    for (short i_9 = 1; i_9 < 19; i_9 += 3) 
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])) ? (arr_3 [i_0] [(short)11]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_18 [(unsigned short)0] [1U] [i_2] [i_2] [(unsigned short)5])) : (((/* implicit */int) var_0)))))));
                        var_29 = ((/* implicit */short) ((((/* implicit */int) arr_22 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 - 1])) <= (((/* implicit */int) ((((/* implicit */int) (short)27267)) != (((/* implicit */int) (short)21555)))))));
                        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_9 + 1] [i_9 - 1] [i_9 + 1]))));
                        var_31 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 6291445U)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_2] [9] [(short)4])) : (1282192133)))));
                    }
                    var_32 *= ((/* implicit */signed char) arr_13 [i_0] [i_0] [10LL] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) (~(arr_12 [i_0] [i_0] [i_1] [i_1] [i_10])));
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_10] [i_2] [11ULL] [i_1] [i_0])) ? (arr_8 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_10])))));
                    }
                    arr_36 [i_2] [12] [(short)18] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_0] [i_0]))));
                }
            } 
        } 
        var_35 -= ((/* implicit */short) (+(((/* implicit */int) arr_23 [i_0]))));
    }
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        var_36 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((long long int) arr_37 [0LL]))) ? (min((var_5), (((/* implicit */long long int) (signed char)39)))) : (min((arr_37 [i_11]), (((/* implicit */long long int) arr_38 [i_11 + 1])))))) - (((/* implicit */long long int) ((/* implicit */int) ((short) (-(arr_37 [i_11]))))))));
        var_37 -= ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) arr_37 [i_11 + 1])) ? (arr_38 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
        arr_39 [i_11] = (~(((((/* implicit */_Bool) ((arr_37 [i_11]) / (((/* implicit */long long int) arr_38 [i_11 + 1]))))) ? (max((var_8), (((/* implicit */long long int) 601001064U)))) : (min((((/* implicit */long long int) arr_38 [i_11])), (arr_37 [i_11]))))));
        var_38 |= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_37 [i_11])))) ? (((/* implicit */unsigned int) (+(1122233985)))) : ((~(arr_38 [i_11])))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 6291453U)), (36028797018963967ULL)))) ? ((-(arr_37 [22LL]))) : (max((arr_37 [i_11]), (((/* implicit */long long int) arr_38 [i_11 + 1]))))))));
        /* LoopSeq 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                var_39 += ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-1364260778577995671LL));
                arr_46 [i_11] [i_11] = ((/* implicit */_Bool) (~(((long long int) arr_44 [i_11] [i_11] [i_11] [i_11]))));
            }
            for (signed char i_14 = 0; i_14 < 24; i_14 += 1) 
            {
                var_40 = ((/* implicit */_Bool) min((var_40), (((((/* implicit */int) (short)-23903)) < (((/* implicit */int) (short)19894))))));
                var_41 = arr_44 [i_11] [i_12] [i_12] [i_11];
            }
            for (signed char i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                arr_55 [i_15] [i_15] [6ULL] [i_15] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)27266))));
                var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (~(((((/* implicit */int) arr_49 [i_11] [i_11] [i_11] [i_15])) ^ (-959370387))))))));
                var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-19885)) + (1282192153)));
                arr_56 [i_15] [i_12] [i_15] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) ((long long int) arr_41 [3LL] [i_12]))))));
            }
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                for (signed char i_17 = 0; i_17 < 24; i_17 += 1) 
                {
                    {
                        arr_61 [i_11] [i_17] [i_12] [i_16] [i_12] = var_3;
                        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_11 + 1])) ? (arr_37 [i_17]) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))) ? (((/* implicit */unsigned long long int) max((arr_37 [i_11 + 1]), (((/* implicit */long long int) (short)19884))))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) arr_37 [i_11 + 1])) : (16770550553911495512ULL))))))));
                        var_45 = ((/* implicit */short) (+(arr_47 [i_17])));
                    }
                } 
            } 
            var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_60 [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1] [(unsigned short)7])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_50 [i_11 + 1] [i_11 + 1] [i_11 + 1]))))) : (min((arr_41 [i_11 + 1] [i_11 + 1]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))))));
            var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) == (max((arr_38 [i_11 + 1]), (arr_38 [i_11 + 1]))))))));
        }
        /* vectorizable */
        for (long long int i_18 = 2; i_18 < 20; i_18 += 1) 
        {
            var_48 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [16LL])) ? (((/* implicit */int) arr_63 [i_11] [i_11 + 1] [i_18 + 2])) : (((/* implicit */int) arr_63 [(unsigned short)2] [i_11] [i_11]))));
            var_49 = ((/* implicit */_Bool) (signed char)127);
            /* LoopSeq 1 */
            for (signed char i_19 = 0; i_19 < 24; i_19 += 4) 
            {
                var_50 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_42 [(unsigned short)23] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_11] [i_18] [i_11]))) : (-1LL)))));
                var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_38 [i_18 - 1])) <= (arr_47 [i_19])))))))));
            }
            /* LoopSeq 1 */
            for (long long int i_20 = 0; i_20 < 24; i_20 += 3) 
            {
                var_52 = ((((/* implicit */_Bool) arr_62 [i_11 + 1] [i_11 + 1] [i_18 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_52 [(short)6] [(short)6] [(short)6] [(short)6])) ? (arr_45 [i_11] [i_11]) : (((/* implicit */unsigned long long int) arr_52 [(unsigned short)18] [i_18 - 1] [(unsigned short)18] [(unsigned short)18])))));
                /* LoopNest 2 */
                for (unsigned short i_21 = 3; i_21 < 23; i_21 += 3) 
                {
                    for (unsigned short i_22 = 0; i_22 < 24; i_22 += 4) 
                    {
                        {
                            arr_74 [i_20] = (~(((((/* implicit */_Bool) arr_68 [i_18 + 1] [15ULL] [i_18 + 1])) ? (4LL) : (((/* implicit */long long int) 805306368U)))));
                            var_53 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4288675864U)) >= (var_13))))) >= (757123725U)));
                            var_54 = ((/* implicit */unsigned char) ((_Bool) ((arr_41 [i_18] [i_18]) << (((/* implicit */int) (signed char)39)))));
                        }
                    } 
                } 
            }
        }
    }
}
