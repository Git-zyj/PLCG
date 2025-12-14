/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212176
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
    var_12 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) 7302274950047115182ULL);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_13 = var_5;
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_1 [i_0] [(unsigned char)9]))));
                    }
                } 
            } 
            var_15 = arr_1 [(short)21] [(short)21];
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_4 + 1] [i_4 - 1])) ? (((var_7) >> (((11144469123662436434ULL) - (11144469123662436401ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))))))));
                var_17 = ((/* implicit */short) arr_10 [i_4 + 1] [i_4 - 1]);
            }
            var_18 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_4 - 1] [i_4 + 1]))));
        }
        var_19 -= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))) == (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))));
        arr_17 [i_0] = var_4;
        /* LoopSeq 2 */
        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (11144469123662436462ULL) : (7233663935094687610ULL))))));
            var_21 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_21 [i_6 + 1])))) || (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_6 + 1] [15ULL]))) == (var_2))) ? (min((((/* implicit */unsigned long long int) var_11)), (9386701039817671497ULL))) : (min((arr_21 [i_0]), (9386701039817671497ULL))))))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                for (short i_8 = 1; i_8 < 18; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) arr_21 [i_0]))), ((-(((/* implicit */int) var_11))))));
                            var_23 -= ((/* implicit */unsigned short) arr_14 [i_0] [i_6 + 1] [i_7]);
                            arr_29 [i_0] [i_6 + 1] [i_6] [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)5309))));
                        }
                        arr_30 [i_6] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_8] [i_6]))))) / (((((/* implicit */_Bool) arr_20 [i_0] [21ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_22 [i_0] [i_6] [i_7] [i_8])))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) arr_6 [i_6] [i_6] [i_6] [i_0]);
            /* LoopSeq 4 */
            for (unsigned long long int i_10 = 3; i_10 < 21; i_10 += 4) 
            {
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2ULL)))))));
                var_26 = ((/* implicit */unsigned char) var_7);
                arr_34 [i_0] [i_6] = ((/* implicit */unsigned short) (short)29435);
            }
            for (unsigned char i_11 = 2; i_11 < 20; i_11 += 4) 
            {
                arr_37 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) min((min((7302274950047115154ULL), (((/* implicit */unsigned long long int) (unsigned short)29102)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_11 - 2] [i_6])) ? (((/* implicit */int) arr_26 [i_6 - 1] [i_11] [i_11 + 1] [i_6] [i_11 + 1] [i_11])) : (((/* implicit */int) arr_26 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_11 - 1] [i_11 - 1])))))));
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_0] [i_6] [i_11 - 2] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_11 - 1])) <= (((/* implicit */int) var_9))))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_6] [i_6])) && (((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_11])))))))) : (max((min((((/* implicit */unsigned long long int) (unsigned short)4)), (9386701039817671502ULL))), (((/* implicit */unsigned long long int) ((unsigned char) arr_25 [i_0] [i_0] [i_6] [i_11 - 2])))))));
                arr_38 [i_6] [i_6 - 1] [20ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (short)-1))) ? (((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (unsigned short)29102)) : (((/* implicit */int) (short)26)))) : (((/* implicit */int) (short)(-32767 - 1)))))) ? ((-(((((/* implicit */_Bool) (short)12817)) ? (9060043033891880114ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min(((unsigned short)22389), (((/* implicit */unsigned short) (short)1)))))))));
                var_28 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [(short)16] [(short)16] [i_6] [i_6])) % (((/* implicit */int) arr_13 [i_6]))))) ? (((/* implicit */int) (short)12817)) : (((/* implicit */int) ((unsigned char) arr_21 [i_11]))))), (((/* implicit */int) (((-(7302274950047115154ULL))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255))))))))));
            }
            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_13 = 2; i_13 < 21; i_13 += 4) 
                {
                    arr_46 [i_0] [i_6] [i_6 - 1] [i_12] [i_13 - 2] = ((/* implicit */unsigned long long int) max(((((-(((/* implicit */int) (unsigned short)40035)))) / (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)16)))))), (((/* implicit */int) arr_33 [i_13]))));
                    var_29 -= ((/* implicit */short) (~(((((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [13ULL])) == (((/* implicit */int) arr_0 [(short)13]))))) % ((-(((/* implicit */int) var_10))))))));
                    var_30 = ((/* implicit */unsigned char) (-(1942320189833230853ULL)));
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_9))))))) ? ((-(((/* implicit */int) arr_18 [i_0] [i_12] [1ULL])))) : (((/* implicit */int) ((unsigned char) arr_45 [i_6])))));
                    var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_19 [i_13] [(unsigned short)6] [(unsigned short)6])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_12]))))) : ((-(10571517685566510185ULL)))))) || (((/* implicit */_Bool) ((short) arr_41 [i_0] [(unsigned char)18] [i_13] [(unsigned char)18])))));
                }
                for (unsigned char i_14 = 2; i_14 < 19; i_14 += 1) 
                {
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_22 [i_6 - 1] [2ULL] [2ULL] [i_6 - 1])) ? (arr_22 [i_6 - 1] [(short)6] [(short)6] [i_6 + 1]) : (var_3))))))));
                    var_34 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)15627))));
                    var_35 -= ((/* implicit */short) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_14] [i_6 - 1] [i_6 - 1] [(unsigned char)18])) : (((/* implicit */int) (unsigned char)255)))), ((-(((/* implicit */int) var_10))))));
                }
                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) min((11144469123662436471ULL), (((/* implicit */unsigned long long int) (unsigned char)227))))) ? (((((/* implicit */_Bool) arr_33 [i_6 - 1])) ? (((/* implicit */int) arr_35 [i_6] [i_6 + 1] [i_6 - 1])) : (((/* implicit */int) arr_33 [i_6 + 1])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) arr_4 [i_6 - 1] [i_6 + 1]))))));
                arr_49 [i_12] [i_6] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_3)))) ? (min((((/* implicit */int) arr_42 [i_6] [i_6] [i_6 + 1] [i_6])), ((-(((/* implicit */int) arr_10 [i_6] [i_12])))))) : (((/* implicit */int) max((arr_24 [i_6] [i_6 - 1] [i_6 + 1]), (arr_24 [i_0] [i_0] [i_6 + 1]))))));
            }
            for (unsigned char i_15 = 3; i_15 < 20; i_15 += 3) 
            {
                arr_54 [i_6] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_6] [i_15 - 3]))))), (((((/* implicit */int) arr_7 [i_0] [i_15 + 2] [i_15 - 3])) % (((/* implicit */int) arr_42 [i_6 - 1] [i_6 + 1] [i_15 - 1] [i_6]))))));
                arr_55 [i_6] = ((((/* implicit */_Bool) (+(arr_5 [i_6 + 1] [i_6 + 1] [i_15 + 1])))) ? (((var_7) + (arr_5 [i_6 - 1] [i_6 + 1] [i_6 + 1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_41 [i_6 + 1] [i_6 - 1] [i_6] [i_15 - 1]))))));
            }
        }
        for (unsigned char i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            arr_58 [i_0] [i_16] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_16] [i_0] [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_16] [i_16])) : (((/* implicit */int) arr_18 [i_16] [i_0] [i_0]))))) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_16])) : ((-(((/* implicit */int) arr_18 [i_0] [i_16] [i_16]))))));
            var_37 *= ((/* implicit */unsigned char) arr_45 [i_16]);
            var_38 = ((/* implicit */short) min(((+(((((/* implicit */_Bool) (unsigned short)60227)) ? (arr_57 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_41 [i_0] [i_0] [i_16] [i_0])) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), (var_10)))))))));
            arr_59 [i_0] [i_0] [i_16] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (15292536681494613482ULL) : (8964418667966587245ULL)))) ? ((-(((/* implicit */int) arr_10 [i_0] [i_16])))) : ((+(((/* implicit */int) (unsigned char)255))))))));
            /* LoopNest 2 */
            for (unsigned short i_17 = 1; i_17 < 20; i_17 += 4) 
            {
                for (unsigned short i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    {
                        var_39 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (short)18612)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (unsigned char)58)))));
                        var_40 = ((/* implicit */short) (-(((((/* implicit */_Bool) 16884244954077031672ULL)) ? (((/* implicit */int) (short)-1504)) : (((/* implicit */int) (unsigned char)241))))));
                        arr_64 [i_0] [(unsigned short)20] [i_0] [(unsigned short)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_44 [i_18] [i_18])))), (((/* implicit */int) arr_0 [i_17 + 1]))))) ? (((/* implicit */int) arr_1 [i_0] [i_17])) : (((((/* implicit */_Bool) arr_24 [i_0] [i_17] [i_18])) ? ((+(((/* implicit */int) arr_13 [i_0])))) : ((+(((/* implicit */int) (unsigned char)134))))))));
                    }
                } 
            } 
        }
    }
}
