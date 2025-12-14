/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36058
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : (var_9)));
    var_11 = ((/* implicit */int) var_2);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)65516))));
            var_13 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) >> (((((/* implicit */int) (short)32753)) - (32732))))) % (((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)35243)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_7 [i_3] [22LL] [8U])))) ? ((-(((/* implicit */int) arr_10 [i_0] [13] [i_0] [(signed char)3])))) : (((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) (short)32743)) : (((/* implicit */int) arr_0 [i_0] [(unsigned short)20]))))))) : (min((((/* implicit */long long int) ((short) var_6))), (((var_2) - (-6253361220110522859LL))))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */signed char) (~(((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))) | (-882874864785915078LL))) - (min((((/* implicit */long long int) arr_3 [i_2] [i_2])), (var_2)))))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [0] [i_2] [i_3] [i_3])))))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_4] [i_3] [i_3] [(signed char)20] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_5]))))) ? (((((/* implicit */int) arr_8 [i_0] [i_3] [i_4])) | (arr_12 [i_0] [i_2] [i_2] [i_4] [i_5]))) : (((/* implicit */int) arr_9 [i_0]))))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_0)))))));
                        }
                        var_18 = max((((/* implicit */unsigned char) arr_9 [i_2])), (min((arr_4 [i_2] [i_3] [i_4]), (arr_4 [i_2] [i_2] [i_4]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_19 = ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_6])) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) arr_8 [i_0] [13U] [i_6])));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_6]);
                        arr_22 [i_2] [i_2] = ((/* implicit */unsigned int) arr_14 [i_0] [i_2] [i_7] [i_8]);
                        arr_23 [i_0] [i_2] [i_6] [i_7] [i_2] = ((/* implicit */signed char) ((int) (+(((/* implicit */int) arr_1 [i_8] [i_7])))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (unsigned short)451))));
                        var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_12 [(unsigned short)8] [(_Bool)1] [i_6] [i_6] [i_6])))) ? (-972355799) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_12 [i_0] [i_2] [i_6] [0] [i_9])) / (((arr_7 [i_7] [i_7] [i_7]) / (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 2; i_10 < 19; i_10 += 3) 
                    {
                        arr_29 [i_2] [(_Bool)1] [i_6] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (signed char)102);
                        var_24 = arr_1 [i_2] [i_6];
                    }
                }
            }
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)3))))));
            var_26 *= ((/* implicit */_Bool) var_1);
            arr_32 [i_0] [i_11] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -882874864785915067LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))) : (var_7)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_27 [(_Bool)1])), (arr_3 [16U] [i_11])))) : (((/* implicit */int) arr_28 [i_0] [i_11])))) & (((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_8)))) - ((~(((/* implicit */int) var_4))))))));
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) var_7))));
        }
        arr_33 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [(_Bool)1]);
        arr_34 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(55218357U)))) ? (((arr_1 [i_0] [i_0]) ? (257162220) : (((/* implicit */int) (signed char)-30)))) : ((+(((/* implicit */int) var_8))))));
        arr_35 [i_0] = ((signed char) (unsigned char)209);
    }
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */_Bool) min((var_28), (arr_27 [(unsigned char)8])));
        /* LoopSeq 2 */
        for (signed char i_13 = 3; i_13 < 11; i_13 += 3) 
        {
            arr_41 [i_12 + 1] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)232))))) > (min((min((arr_13 [i_12] [i_12] [i_12] [i_12] [(unsigned short)2] [i_12]), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_12] [i_13])) ? (var_7) : (var_7))))))));
            var_29 = ((/* implicit */int) (unsigned short)20919);
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_13])) ? (arr_40 [i_13] [i_12] [i_12 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_12] [7LL] [0ULL])))));
            /* LoopSeq 2 */
            for (unsigned short i_14 = 1; i_14 < 11; i_14 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    var_31 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) min((var_3), (arr_24 [i_12] [i_13 - 3] [i_14 - 1] [i_13 - 3] [i_13 - 1])))), (((signed char) (short)32742)))))) ^ (var_9)));
                    arr_50 [i_12] [i_13] [i_13] [i_12] [i_12] = ((/* implicit */signed char) var_5);
                }
                for (long long int i_16 = 2; i_16 < 9; i_16 += 4) 
                {
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)77)))))));
                    arr_54 [i_12] [i_12] [i_14] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_12] [i_13 - 3]))) | ((~(var_2))))) | (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)40)) | (((/* implicit */int) (unsigned char)31)))))));
                    var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) & (((var_3) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_16] [i_13 - 1] [i_13 + 1])))))));
                    arr_55 [i_12] [i_13 + 1] [i_14] [i_13 + 1] [i_16] [i_13 + 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (unsigned short)64302)))));
                    arr_56 [i_16] [i_14] [i_13 - 3] [i_16] &= ((/* implicit */_Bool) ((max(((((_Bool)1) || (((/* implicit */_Bool) arr_42 [i_12] [i_16] [i_14] [(unsigned char)6])))), (((var_4) && (arr_2 [i_12] [i_16]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_38 [i_13 - 1] [(_Bool)1] [i_16])), (arr_8 [(signed char)0] [i_12 + 1] [i_16 + 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)240)) && (((/* implicit */_Bool) 11380232829370640343ULL)))))));
                }
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((7417583518404420702LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-31197))))) : (((((/* implicit */_Bool) -524371226)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6037003044325572169LL)))));
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_3))) + (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_37 [i_12] [i_14 - 1]))))));
                arr_57 [i_12] [i_14] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) arr_4 [i_12] [i_13] [i_12])) : (((/* implicit */int) (signed char)74))))));
                var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
            }
            for (long long int i_17 = 1; i_17 < 10; i_17 += 1) 
            {
                var_37 = ((/* implicit */_Bool) (+(((unsigned long long int) 1229858578238241258LL))));
                /* LoopSeq 1 */
                for (unsigned char i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)240)) ? (((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) arr_14 [i_12] [i_13] [i_17] [(signed char)22])) : (((/* implicit */int) arr_27 [i_18])))) : (((/* implicit */int) (unsigned char)104)))))));
                        var_39 = ((/* implicit */unsigned int) var_9);
                        var_40 = ((/* implicit */signed char) (unsigned char)0);
                    }
                    for (long long int i_20 = 0; i_20 < 12; i_20 += 2) 
                    {
                        var_41 = ((long long int) (_Bool)1);
                        arr_66 [i_12] = var_7;
                        var_42 = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)94));
                    }
                    arr_67 [(_Bool)1] [i_12] [i_12] [i_12] [i_12 + 1] = ((/* implicit */unsigned char) var_5);
                    /* LoopSeq 2 */
                    for (signed char i_21 = 2; i_21 < 11; i_21 += 4) 
                    {
                        arr_72 [i_12] [i_13] [i_13] [i_13 + 1] [i_13 - 1] = ((/* implicit */short) arr_7 [i_12] [i_21] [i_12]);
                        var_43 = ((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-25)))), (((/* implicit */int) (_Bool)0))));
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) (short)10631)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_64 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (short)-17380)) ? (33488896) : (((/* implicit */int) arr_26 [i_12] [(unsigned char)12] [i_17] [i_17] [i_17] [17ULL] [i_12])))) : (((/* implicit */int) (unsigned short)10284))))));
                        arr_73 [i_12] [i_13 + 1] [i_13 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)15))));
                    }
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                    {
                        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) arr_5 [i_12]))));
                        arr_76 [i_12] [i_13] [i_13] [i_17] [11LL] [i_12] = ((/* implicit */_Bool) arr_65 [i_22 + 1] [i_12] [i_12] [i_12 + 1]);
                        var_46 = ((/* implicit */long long int) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) < (min((var_9), (((/* implicit */long long int) (unsigned char)128)))))), (var_3)));
                        var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_13 - 3] [i_22 + 1]))) & (-8091333286025026470LL)))) ? (min(((~(arr_7 [i_12] [i_13] [i_13 - 2]))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_3))))))) : (((((((/* implicit */long long int) ((/* implicit */int) (signed char)37))) | (2479518738934919784LL))) | (((/* implicit */long long int) var_0))))));
                    }
                }
                var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned int) ((-666946341) * (((/* implicit */int) arr_43 [i_12 + 1] [i_12] [(unsigned short)7]))))) / (((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_0))))) : ((-(arr_5 [i_13 - 2]))))))));
            }
        }
        for (unsigned char i_23 = 0; i_23 < 12; i_23 += 4) 
        {
            var_49 = ((/* implicit */int) (~(((long long int) max((var_7), (((/* implicit */long long int) var_3)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                var_50 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                var_51 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (arr_5 [i_12]))) | (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
            }
            var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2589081807719928741LL)) ? (max((((((/* implicit */_Bool) arr_37 [i_12] [i_12])) ? (2097151ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_12 + 1] [i_23] [i_12 + 1] [i_12] [(unsigned char)22]))))), (((/* implicit */unsigned long long int) (unsigned short)33115)))) : (((/* implicit */unsigned long long int) -3715420080169481030LL))));
        }
    }
    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) /* same iter space */
    {
        var_53 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_9 [i_25 + 1]))))) * (((((/* implicit */_Bool) min((var_1), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_26 [i_25 + 1] [i_25 + 1] [i_25] [i_25] [i_25] [i_25 + 1] [(_Bool)0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_18 [i_25] [i_25 + 1] [i_25 + 1]))) : (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_25] [0LL] [(_Bool)1]))) : (var_2)))))));
        var_54 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 1483312860)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12342))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_69 [i_25] [i_25] [4ULL] [4ULL] [(unsigned short)4]))))), (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */unsigned long long int) -6067697797210997140LL)) : (14233636154763869286ULL)))))));
        var_55 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)1023)) ? (-1483312861) : (((/* implicit */int) (unsigned short)32421)))), (min((arr_78 [i_25] [i_25 + 1]), (arr_78 [11U] [i_25 + 1])))));
    }
}
