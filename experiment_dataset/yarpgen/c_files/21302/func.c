/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21302
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
    var_10 = ((/* implicit */short) (unsigned short)65510);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((((/* implicit */int) ((signed char) 5318816733863281730LL))) - (58)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) * (((unsigned int) -5318816733863281735LL)))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -3027702241465499435LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-16223))))))))))));
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_7))));
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)43917)) ? (((/* implicit */int) (unsigned char)12)) : (((int) arr_0 [i_0 - 1] [i_0 + 2]))));
        var_13 = ((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0]);
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
        {
            arr_7 [i_1] [13U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [5])) || (((/* implicit */_Bool) (signed char)50))));
            var_14 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_9)))))));
            var_15 -= ((/* implicit */unsigned char) 13U);
        }
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)65)) / (((/* implicit */int) (signed char)64))))) ? (((((/* implicit */_Bool) (short)31)) ? (-5318816733863281718LL) : (3381049512784082594LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (-759601725)))))) / (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))));
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_5 [i_1] [i_3])) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (unsigned char)248)))))))));
            var_17 = ((/* implicit */_Bool) arr_8 [(signed char)6] [i_3] [(unsigned char)12]);
            arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) arr_1 [4] [i_3]))));
        }
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        arr_23 [i_1] [14ULL] [i_5] [i_6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) min((arr_13 [i_1] [i_5] [i_5]), (((/* implicit */unsigned short) var_1)))))))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_4]))) : (((int) (signed char)51))));
                        arr_24 [i_1] [(unsigned char)12] [i_5] [i_6] = ((/* implicit */unsigned char) (short)-32764);
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (unsigned short)2885))));
                    }
                    var_19 ^= arr_21 [i_1] [i_1] [i_4] [4U] [i_1];
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (long long int i_8 = 1; i_8 < 14; i_8 += 1) 
                        {
                            {
                                var_20 = ((long long int) min((arr_4 [i_8 + 1]), (arr_4 [i_8 - 1])));
                                arr_31 [i_8] [i_8] [i_5] [2ULL] [i_8] [i_1] = ((((/* implicit */_Bool) ((signed char) arr_21 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [(unsigned char)3]))) ? (((((/* implicit */_Bool) 5318816733863281720LL)) ? (3027702241465499412LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_8 - 1] [(signed char)0] [i_8] [(signed char)0] [i_8 - 1])) + (((/* implicit */int) arr_21 [i_8 + 1] [i_8] [i_8] [i_8] [i_8]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((arr_5 [i_1] [i_1]), (arr_12 [i_1] [i_1])))) / (((2482769298U) ^ (((/* implicit */unsigned int) arr_5 [i_1] [i_1]))))));
    }
    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        arr_36 [i_9] [i_9] = ((/* implicit */unsigned char) 6299932174141375932LL);
        var_22 = (-(((/* implicit */int) ((short) arr_33 [i_9] [i_9]))));
        /* LoopSeq 4 */
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            arr_39 [i_9] [i_10] = arr_8 [i_9] [i_10] [i_9];
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_12 = 1; i_12 < 6; i_12 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_9] [7LL] [i_11])) ? (((((/* implicit */unsigned int) (-(var_8)))) | (((var_3) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21619))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) != (((/* implicit */int) arr_22 [i_9] [i_10] [i_11])))))) < (5318816733863281730LL)))))));
                    arr_45 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)17)) | (((/* implicit */int) (_Bool)1))));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_30 [i_12 + 3] [i_12 + 4] [i_12 + 2] [i_9] [4LL]) - (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_12 + 4] [i_12 + 1] [i_12 + 2] [i_12 - 1] [i_12] [i_12] [i_12 + 3])))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_11] [i_11] [i_11])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_16 [i_9])))) == (((((/* implicit */int) (signed char)43)) ^ (((/* implicit */int) (signed char)84))))))) : (((/* implicit */int) arr_14 [i_11] [i_11]))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_48 [i_9] [i_9] = ((/* implicit */int) ((signed char) arr_17 [i_9] [i_10] [i_10]));
                    arr_49 [i_11] [(unsigned char)9] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) var_5);
                    arr_50 [i_9] [i_9] [(unsigned char)5] [i_9] [i_9] [2ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_41 [i_11] [i_10] [i_9])), (arr_3 [i_9])))) ? (((/* implicit */int) ((short) (unsigned char)132))) : (((((/* implicit */_Bool) 5318816733863281730LL)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (short)-6875))))));
                }
                arr_51 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_9] [i_9]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-82)) > (((/* implicit */int) arr_19 [i_9] [i_9] [i_9] [i_9] [(unsigned short)1] [(signed char)11])))))))) : (((arr_43 [i_9] [i_10] [i_11]) << (((arr_43 [7] [i_9] [i_11]) - (11320887981332959015ULL)))))));
            }
        }
        for (int i_14 = 0; i_14 < 10; i_14 += 1) 
        {
            var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) -5318816733863281731LL)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (unsigned char)13))));
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                for (unsigned char i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_17 = 0; i_17 < 10; i_17 += 2) 
                        {
                            arr_62 [i_9] [i_14] [i_14] [i_14] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_52 [i_16]), (837595327)))) ? (((min((((/* implicit */unsigned long long int) 211073589)), (18446744073709551592ULL))) * (((/* implicit */unsigned long long int) min((17134081), (-3)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_44 [i_9])) ? (8016249735194856873ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9] [i_15]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145)))))));
                            var_26 &= ((/* implicit */unsigned int) (_Bool)1);
                            arr_63 [i_9] [i_9] = ((/* implicit */unsigned int) (((~(((unsigned long long int) 0)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))));
                            arr_64 [(_Bool)1] [(_Bool)1] [i_15] [i_15] [(_Bool)1] = ((/* implicit */long long int) var_4);
                        }
                        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_9]), (((/* implicit */int) arr_1 [i_16] [i_15]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) (unsigned char)76)) : (1929206108))))));
                            arr_67 [i_9] [i_9] [i_9] [i_9] [(signed char)0] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_14] [i_14] [i_15] [i_16] [i_18])) ? (((/* implicit */int) ((unsigned char) arr_47 [i_9] [i_9] [(short)3] [i_14]))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) != (arr_20 [i_9] [i_14] [i_15] [i_16]))))))) ? (((/* implicit */long long int) arr_12 [i_9] [(unsigned char)8])) : (arr_30 [i_9] [i_14] [i_15] [i_9] [i_18])));
                        }
                        arr_68 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-12640)) | (-1144703763)))) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (unsigned short)13945))));
                        arr_69 [(signed char)1] [i_14] [4ULL] [i_16] = ((/* implicit */long long int) arr_17 [i_14] [i_15] [i_16]);
                        var_28 = ((/* implicit */long long int) arr_16 [i_9]);
                    }
                } 
            } 
            arr_70 [i_9] [(short)8] = (unsigned char)248;
        }
        for (unsigned char i_19 = 0; i_19 < 10; i_19 += 4) 
        {
            arr_73 [i_9] [i_19] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18172694146894174378ULL)) ? (12884212435549152381ULL) : (((/* implicit */unsigned long long int) 4194303))));
            var_29 *= ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) 0LL)) && ((_Bool)1))) ? (arr_57 [i_9]) : (((/* implicit */int) arr_16 [i_9])))), (((((/* implicit */_Bool) ((unsigned char) 5318816733863281713LL))) ? (((/* implicit */int) arr_37 [i_19] [5LL])) : (((/* implicit */int) arr_71 [i_19] [i_19] [i_9]))))));
        }
        for (long long int i_20 = 0; i_20 < 10; i_20 += 4) 
        {
            arr_76 [i_9] [i_9] = ((/* implicit */unsigned int) ((((((long long int) var_7)) < (((/* implicit */long long int) ((/* implicit */int) var_4))))) ? (min((0LL), (((long long int) arr_60 [i_9] [i_9] [i_9] [i_9] [i_9])))) : (((/* implicit */long long int) ((/* implicit */int) min((((var_2) <= (((/* implicit */unsigned int) arr_35 [i_9] [i_20])))), (((_Bool) 0LL))))))));
            var_30 += ((/* implicit */unsigned long long int) (short)-26);
            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((short) arr_40 [i_9] [i_20] [(_Bool)1] [i_20])))));
            var_32 = ((/* implicit */signed char) (+(((arr_32 [i_20] [i_20]) ^ (arr_32 [i_9] [i_9])))));
            arr_77 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 17592186044415LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)-62))))) && (((/* implicit */_Bool) 13624653774839589239ULL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned short)34758)) : (((/* implicit */int) (unsigned char)24))))) ? (arr_32 [i_9] [i_9]) : (((/* implicit */unsigned long long int) 17592186044415LL))))));
        }
    }
}
