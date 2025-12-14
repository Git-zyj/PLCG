/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247300
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
    var_14 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)49421))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((((/* implicit */short) (signed char)18)), ((short)31277)))) : (((/* implicit */int) min((arr_4 [i_1] [i_1 - 3] [i_1 - 2] [i_1]), (arr_4 [i_1] [i_1 + 1] [i_1 + 1] [i_1]))))));
                var_15 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (arr_3 [i_1 - 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                arr_7 [i_1 - 3] [i_1] = arr_1 [i_2] [i_0];
            }
            var_16 = max((max((arr_3 [5ULL] [i_1 - 1]), (((/* implicit */unsigned long long int) var_1)))), (max((var_13), (((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
        }
        for (unsigned long long int i_3 = 4; i_3 < 8; i_3 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_9 [i_0] [i_3])) ? (((/* implicit */int) ((short) var_10))) : ((-(((/* implicit */int) arr_9 [i_0] [i_3 + 2])))))), ((-(((/* implicit */int) ((unsigned char) var_10)))))));
            var_18 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_3] [i_0]))))) ? (min((var_4), (((/* implicit */unsigned long long int) var_9)))) : (min((((/* implicit */unsigned long long int) var_11)), (var_4))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 1; i_4 < 7; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    {
                        var_19 = ((/* implicit */short) var_11);
                        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_11)))) & (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)15851)), (var_4)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)22)))) : (((/* implicit */int) ((unsigned short) var_8))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) ((_Bool) (signed char)0)))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                arr_19 [(short)3] [i_3] [i_6] = ((/* implicit */unsigned short) var_6);
                /* LoopSeq 4 */
                for (unsigned char i_7 = 1; i_7 < 9; i_7 += 2) 
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7779)) ? ((((!((_Bool)1))) ? (((/* implicit */int) arr_22 [i_3] [i_3] [i_6] [i_7])) : (((/* implicit */int) arr_4 [i_7] [i_6] [i_3] [i_7])))) : ((+(((/* implicit */int) min((((/* implicit */short) (unsigned char)68)), ((short)-3415))))))));
                    var_22 = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)24935)))) * (((/* implicit */int) (unsigned short)46540))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)24935)) + ((+((-(((/* implicit */int) arr_15 [i_7] [i_6] [i_3] [i_0]))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        arr_27 [i_0] [i_3] [i_3] [i_7] [(unsigned short)5] [(unsigned short)2] [i_7] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) != (((/* implicit */int) (unsigned short)6787))))), (var_3));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))) / ((-(((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3 - 3] [i_3] [(unsigned char)7] [i_7]))) : (arr_5 [i_0] [i_6] [i_7] [i_8 + 1])))))));
                    }
                    for (short i_9 = 1; i_9 < 9; i_9 += 3) 
                    {
                        arr_30 [i_7] [0ULL] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3 + 1] [i_7 + 1] [i_9 - 1])) ? (((/* implicit */int) arr_17 [i_3 - 4] [i_7 - 1] [i_9 - 1])) : (((/* implicit */int) arr_17 [i_3 - 3] [i_7 - 1] [i_9 - 1]))))) ? ((-(((/* implicit */int) arr_17 [i_3 - 2] [i_7 + 1] [i_9 + 2])))) : (((((((/* implicit */int) arr_17 [i_3 + 2] [i_7 + 2] [i_9 + 1])) + (2147483647))) >> (((var_13) - (13646444394440099229ULL)))))));
                        arr_31 [i_7] [i_7] [(short)8] [i_7 - 1] [i_6] = ((/* implicit */unsigned char) ((unsigned short) var_13));
                    }
                    for (unsigned char i_10 = 3; i_10 < 9; i_10 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned char) var_2))));
                        var_26 = ((/* implicit */signed char) min(((+(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) var_9))))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((var_6) - (4670750663876603908ULL)))))) ? ((~((+(((/* implicit */int) arr_18 [i_10 + 2] [i_7] [i_3])))))) : ((+(((/* implicit */int) var_9)))))))));
                        arr_35 [i_3 - 1] [i_7] [i_7] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [(unsigned char)0] [(unsigned char)2])) == ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
                    }
                }
                for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_12 = 2; i_12 < 9; i_12 += 3) 
                    {
                        var_28 = arr_15 [i_0] [i_3 + 3] [i_12 - 1] [i_12 + 1];
                        var_29 *= ((/* implicit */unsigned char) arr_21 [i_3 - 1] [i_3] [i_0] [i_11 - 1]);
                        arr_40 [i_0] [i_3] [i_6] [i_11] [i_12] [i_0] [i_12 + 2] = ((/* implicit */unsigned char) arr_17 [i_12] [i_12] [i_3 - 3]);
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [9ULL] [i_6] [i_3 - 4] [i_0])) ? (((/* implicit */int) (unsigned short)59290)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_0)) / (((/* implicit */int) arr_39 [i_6] [(unsigned short)5])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) (_Bool)1))))));
                        var_31 = ((/* implicit */unsigned char) var_2);
                    }
                    for (unsigned char i_13 = 3; i_13 < 10; i_13 += 3) 
                    {
                        var_32 &= ((/* implicit */short) arr_11 [i_6]);
                        var_33 = (-(((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (var_3))) : (var_3))));
                        arr_45 [i_0] [i_3] [i_6] [i_13] [i_13 - 3] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (unsigned short)25799)) : (((/* implicit */int) (signed char)16))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))))));
                    }
                    arr_46 [i_11] [i_3] &= ((/* implicit */signed char) ((((/* implicit */int) min((max((((/* implicit */unsigned short) var_7)), (arr_14 [i_11] [i_6] [i_3] [i_0]))), (min((arr_14 [10ULL] [i_3] [i_6] [i_11]), (((/* implicit */unsigned short) var_0))))))) * (max(((-(((/* implicit */int) arr_44 [i_6] [i_6] [i_6] [i_3 + 2] [i_6])))), (((/* implicit */int) arr_15 [i_11] [i_3] [i_6] [i_11 + 1]))))));
                    var_34 = ((/* implicit */unsigned short) var_5);
                }
                for (unsigned long long int i_14 = 2; i_14 < 9; i_14 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned short) var_5);
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((unsigned short) min((((/* implicit */short) var_1)), ((short)19292)))))));
                }
                for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 4) /* same iter space */
                {
                    var_37 *= ((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) arr_14 [(unsigned short)0] [i_15] [i_15] [i_15 + 1])));
                    var_38 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-17)) % (((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (unsigned short)39737))));
                    var_39 = min((min((((/* implicit */unsigned long long int) var_9)), ((~(arr_24 [i_15] [i_6] [i_3] [1ULL]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))));
                }
                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_18 [i_0] [i_3] [i_3 - 3]), (arr_2 [i_6] [i_6] [i_3 - 2])))) || (((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) var_7))))))));
                /* LoopSeq 2 */
                for (unsigned char i_16 = 1; i_16 < 9; i_16 += 3) 
                {
                    var_41 &= var_11;
                    var_42 = ((/* implicit */unsigned char) ((var_2) || (((/* implicit */_Bool) ((unsigned char) (_Bool)1)))));
                }
                /* vectorizable */
                for (unsigned long long int i_17 = 4; i_17 < 9; i_17 += 2) 
                {
                    arr_59 [i_0] [i_3] [i_6] [i_6] &= ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                    var_43 = ((/* implicit */signed char) (-(((arr_25 [i_0] [i_0] [i_6] [i_17] [i_17]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)243)) - ((-(((/* implicit */int) (unsigned char)7))))));
                }
            }
            /* vectorizable */
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_19 = 3; i_19 < 10; i_19 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 2) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_8)))));
                        arr_68 [i_0] [(unsigned char)6] [i_0] [i_19] [i_19 - 3] [i_20] [i_20] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_22 [i_0] [i_19 - 2] [i_3 + 3] [i_0]))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned char) arr_69 [8ULL] [i_18] [i_19 - 1] [i_18 - 1] [i_18] [i_0]);
                        var_47 = (unsigned short)49117;
                    }
                    for (unsigned char i_22 = 3; i_22 < 10; i_22 += 3) 
                    {
                        arr_73 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_69 [i_0] [i_18] [i_3 - 2] [i_19 - 1] [i_22 - 1] [i_22])) ? (((/* implicit */int) arr_43 [i_18] [i_3] [i_18 - 1] [i_19] [i_19] [i_3 - 4])) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_38 [i_22] [i_18] [i_18] [i_3] [i_0])) : (((/* implicit */int) arr_67 [i_3] [i_19 - 3] [i_22 + 1]))))));
                        var_48 = ((/* implicit */unsigned long long int) var_8);
                    }
                }
                var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1)))))));
            }
            var_50 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_10)), (((arr_43 [(short)1] [i_3 - 4] [i_3 - 2] [i_3 - 1] [i_0] [i_3]) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
        }
        arr_74 [i_0] = ((/* implicit */unsigned char) var_7);
        /* LoopNest 2 */
        for (signed char i_23 = 1; i_23 < 7; i_23 += 4) 
        {
            for (short i_24 = 0; i_24 < 11; i_24 += 3) 
            {
                {
                    var_51 &= var_7;
                    var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_23] [i_0] [i_23 + 4] [i_24])), ((unsigned char)141)))) * (((/* implicit */int) ((short) var_7)))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_10))))) : (((/* implicit */int) arr_4 [i_23] [i_23] [i_23] [i_23]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_25 = 0; i_25 < 11; i_25 += 4) 
        {
            for (unsigned long long int i_26 = 0; i_26 < 11; i_26 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_27 = 0; i_27 < 11; i_27 += 3) 
                    {
                        for (unsigned short i_28 = 0; i_28 < 11; i_28 += 3) 
                        {
                            {
                                arr_90 [i_25] [i_25] [i_26] [i_27] [i_28] = ((/* implicit */unsigned char) arr_89 [i_0] [i_25] [(unsigned short)1] [i_26] [i_27] [i_28]);
                                var_53 = ((/* implicit */unsigned long long int) ((_Bool) max(((~(((/* implicit */int) var_1)))), (((arr_66 [i_0] [i_25] [i_26] [i_26] [i_27] [i_28] [i_28]) ? (((/* implicit */int) arr_18 [i_0] [i_26] [i_26])) : (((/* implicit */int) var_8)))))));
                                arr_91 [i_0] [i_25] [i_28] [i_27] [i_28] = ((/* implicit */short) var_9);
                                arr_92 [10ULL] [i_26] &= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) min((arr_21 [i_0] [i_25] [i_25] [i_27]), (((/* implicit */unsigned long long int) (unsigned char)172)))))))));
                            }
                        } 
                    } 
                    var_54 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)58)), ((unsigned short)39607)));
                    var_55 = ((/* implicit */unsigned char) (+(var_3)));
                    var_56 &= var_1;
                    var_57 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_78 [i_25] [i_25] [i_26] [i_26])) : (((/* implicit */int) var_10))))) || (arr_85 [i_0]))) ? (((/* implicit */int) (unsigned short)46374)) : ((~(((/* implicit */int) max((var_8), (var_11))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_29 = 0; i_29 < 11; i_29 += 3) 
        {
            for (unsigned short i_30 = 0; i_30 < 11; i_30 += 3) 
            {
                for (unsigned char i_31 = 0; i_31 < 11; i_31 += 4) 
                {
                    {
                        var_58 = ((/* implicit */unsigned char) max((var_58), (((/* implicit */unsigned char) (-(((var_2) ? ((+(arr_11 [i_30]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)39613))))))))))));
                        arr_102 [i_31] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)182))));
                    }
                } 
            } 
        } 
    }
}
