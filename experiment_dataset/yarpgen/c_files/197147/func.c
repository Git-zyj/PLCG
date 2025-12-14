/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197147
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
    var_19 += ((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_10)) - (41))))))) < (((/* implicit */int) var_6))));
    var_20 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13)))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6))))), (var_14))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */_Bool) var_14);
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((max((var_1), (arr_1 [i_0] [i_0]))) - (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (var_14)))))));
    }
    for (unsigned char i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    arr_11 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_7 [i_1 - 2])))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_18))))) || (((/* implicit */_Bool) var_5)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18490)) ? (((/* implicit */int) (short)-18491)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 1])) : (((((/* implicit */int) arr_5 [i_1] [(unsigned short)18])) / (((/* implicit */int) var_9)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)85)), (arr_10 [i_1] [i_1] [i_1] [(short)5])))))))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)18491)) ? (((/* implicit */long long int) var_12)) : (arr_10 [i_1] [i_1 - 1] [i_1] [i_1]))))) % (((/* implicit */int) ((short) var_13)))));
        arr_12 [i_1] [i_1] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (_Bool)0))))));
    }
    /* vectorizable */
    for (long long int i_4 = 2; i_4 < 16; i_4 += 4) 
    {
        arr_15 [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_14 [i_4 - 2] [i_4 - 1]))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_5] [i_5] [i_4] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_9 [(short)18] [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_17 [i_4] [(unsigned char)17]) : (((/* implicit */int) arr_13 [i_4] [i_5]))))) : ((+(-91526341824266361LL))))))));
            arr_19 [i_4] [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_17 [i_4 + 2] [i_5])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (12157212863679411040ULL)))));
            var_25 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_6 [i_4] [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((var_8) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4])))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_22 [i_4] [(unsigned char)11] [i_5] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_4 - 2] [(short)16] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_4] [i_4 - 2]))));
                    }
                } 
            } 
            arr_24 [i_5] [i_5] = ((((/* implicit */int) (short)-27986)) == (((/* implicit */int) (signed char)98)));
        }
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) arr_13 [i_4] [i_4]))))))))));
        var_30 = ((/* implicit */_Bool) max((var_30), ((_Bool)0)));
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            var_31 = ((/* implicit */short) var_17);
            /* LoopSeq 3 */
            for (short i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                var_32 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_18))));
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_27 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        arr_36 [(unsigned char)6] [i_8] [i_8] = ((/* implicit */signed char) var_8);
                        var_34 += ((/* implicit */unsigned long long int) ((_Bool) var_0));
                        var_35 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) var_18)) - (3179)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_10] [i_10])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_13))))));
                    }
                    var_36 = ((/* implicit */_Bool) ((unsigned char) arr_22 [i_4] [i_4 + 1] [i_9] [i_4 - 1]));
                }
                /* LoopSeq 1 */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    var_37 -= ((/* implicit */short) var_9);
                    arr_41 [i_4] [i_8] [i_9] [i_12] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_9 [i_4] [i_8])))) ? (((((/* implicit */_Bool) (unsigned char)5)) ? (arr_29 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_8])))));
                    var_38 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_40 [i_12] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1])) : ((+(((/* implicit */int) var_2))))));
                    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) var_15))));
                    var_40 = (~(var_1));
                }
                /* LoopSeq 1 */
                for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    arr_44 [i_4 - 2] [i_8] [i_9] [i_4 - 2] = ((/* implicit */long long int) (_Bool)1);
                    arr_45 [i_13] [i_9] [i_8] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
                    var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_13] [i_4] [i_8] [i_4] [i_4])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_40 [i_8] [i_8] [i_8] [i_8] [i_8]))));
                }
                arr_46 [(unsigned short)8] [i_8] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((18446744073709551611ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_4] [i_4 + 2])))));
            }
            for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 1) 
            {
                arr_49 [4] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (short)-18512)) == (((/* implicit */int) var_18)))))));
                /* LoopSeq 3 */
                for (short i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 18; i_16 += 3) 
                    {
                        var_42 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_4 + 2])) ? (((/* implicit */int) arr_14 [i_15] [i_16])) : (((/* implicit */int) (_Bool)0))));
                        arr_56 [17] [i_15] [i_16] [i_16] [i_8] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_14 [i_4] [(short)9]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_14])) ? (((/* implicit */int) (short)-18491)) : (var_3))))));
                    }
                    arr_57 [i_15] [(_Bool)1] [i_4] = ((/* implicit */_Bool) var_6);
                }
                for (short i_17 = 0; i_17 < 18; i_17 += 4) /* same iter space */
                {
                    arr_61 [i_4] [i_8] [i_4] [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_4 - 1] [i_8] [i_4] [i_17])) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_58 [i_4 - 2] [i_4] [i_4] [i_4 + 2]))));
                    arr_62 [i_14] [i_14] &= ((/* implicit */unsigned short) ((short) var_18));
                }
                for (unsigned char i_18 = 0; i_18 < 18; i_18 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_68 [i_4] [i_18] [i_14] [i_18] [i_19] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_26 [i_8] [i_8]))))) < ((+(((/* implicit */int) var_18))))));
                        var_43 ^= ((/* implicit */signed char) (!(var_8)));
                    }
                    for (short i_20 = 0; i_20 < 18; i_20 += 3) 
                    {
                        var_44 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45220)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45220)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45240))) : (((var_8) ? (((/* implicit */long long int) var_14)) : (-3424348904254496543LL))))))));
                    }
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) (_Bool)0))));
                        var_47 = ((_Bool) arr_14 [i_4 - 2] [i_21 - 1]);
                    }
                    var_48 = (+(((/* implicit */int) var_16)));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 4) /* same iter space */
                    {
                        arr_77 [(unsigned short)15] [i_8] [16ULL] [i_14] [i_18] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_15) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_4] [i_4] [i_22] [i_18])))))) <= (((/* implicit */int) arr_34 [i_4 + 1] [i_4 - 1] [i_4 - 2]))));
                        var_49 |= ((/* implicit */short) (!(((/* implicit */_Bool) -1502432863509795251LL))));
                        arr_78 [i_14] [i_18] [i_14] [i_8] [i_4] = ((/* implicit */long long int) -444835203);
                        var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? ((-(444835202))) : (((((/* implicit */int) var_8)) + (((/* implicit */int) (short)-13281))))));
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 4) /* same iter space */
                    {
                        var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_34 [i_4] [(_Bool)1] [i_14])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (short)-31835))));
                        var_52 &= ((/* implicit */unsigned int) ((_Bool) (unsigned char)4));
                        var_53 *= ((/* implicit */_Bool) (signed char)55);
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        arr_84 [i_24] [(short)14] [i_14] [i_24] = ((/* implicit */int) (_Bool)1);
                        arr_85 [i_4] [i_8] [i_24] [i_4] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_74 [i_4 + 2] [i_4] [i_4] [i_4] [i_4] [i_4 + 2])) ? (((/* implicit */int) arr_74 [i_4 - 2] [i_4 - 2] [0U] [(unsigned short)17] [i_4 - 2] [i_4 - 2])) : (((/* implicit */int) (_Bool)1))));
                        arr_86 [i_4] [i_4 - 2] [i_4 - 2] [i_14] [i_18] [i_24] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_17))));
                    }
                    for (long long int i_25 = 2; i_25 < 17; i_25 += 3) 
                    {
                        arr_89 [i_4] [i_25] [i_14] [i_18] [i_25] = ((((/* implicit */unsigned int) ((/* implicit */int) ((var_3) <= (((/* implicit */int) var_9)))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (var_12))));
                        var_54 = ((/* implicit */_Bool) var_4);
                        arr_90 [(unsigned short)14] [(unsigned short)14] [i_18] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_12)))) ? (var_5) : ((-(arr_79 [i_4] [i_8] [4LL] [i_18] [i_25])))));
                        arr_91 [i_4] [i_4] [i_8] [i_25] [i_18] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (var_14)));
                    }
                }
                arr_92 [15U] [i_8] [i_4] = ((/* implicit */signed char) arr_54 [i_4]);
            }
            for (short i_26 = 0; i_26 < 18; i_26 += 4) 
            {
                var_55 = (~(arr_95 [i_26] [i_26] [(signed char)8] [i_26]));
                arr_96 [i_4] [i_4 + 2] [i_4 + 2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_76 [i_4] [i_4 - 2] [i_4] [i_4] [i_26]))));
                var_56 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-11037)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) == (6387065106649104758ULL))))) : (arr_83 [i_4] [i_4] [i_4] [(_Bool)1] [i_4] [i_4])));
            }
        }
    }
}
