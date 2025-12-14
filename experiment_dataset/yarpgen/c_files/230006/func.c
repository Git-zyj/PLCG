/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230006
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_7))))), (max((min((4654234226401765251LL), (961093120546905944LL))), (((/* implicit */long long int) var_15)))))))));
        var_19 ^= ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) var_13);
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_15)), ((unsigned short)31))))));
            arr_9 [i_1] |= ((/* implicit */int) (unsigned short)20896);
        }
        for (int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_10)))))) * (((/* implicit */int) var_2)))))));
            arr_12 [i_1] [i_3] &= ((/* implicit */long long int) (((+(max((arr_4 [i_1]), (((/* implicit */unsigned long long int) (unsigned short)21)))))) >> ((+(((/* implicit */int) var_6))))));
            var_22 = ((/* implicit */unsigned char) max((((unsigned int) arr_10 [i_1 + 3])), (((/* implicit */unsigned int) var_16))));
            var_23 = min((((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_4))))), (((signed char) (short)-22457))))), (max((min((-961093120546905926LL), (((/* implicit */long long int) var_1)))), (min((var_11), (((/* implicit */long long int) var_1)))))));
        }
        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                var_24 += ((/* implicit */long long int) var_7);
                var_25 = ((/* implicit */short) ((((/* implicit */long long int) var_1)) / (((long long int) var_16))));
            }
            var_26 = ((/* implicit */int) var_14);
        }
    }
    for (unsigned char i_6 = 2; i_6 < 11; i_6 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                var_27 = ((/* implicit */unsigned long long int) var_10);
                var_28 ^= arr_18 [i_8];
            }
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) << (((((unsigned int) ((unsigned char) var_17))) - (61U)))));
        }
        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                var_30 = ((/* implicit */unsigned char) arr_29 [i_10]);
                var_31 = ((short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_11)));
            }
            arr_32 [i_6] [i_9] = ((/* implicit */unsigned int) var_14);
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */long long int) var_16)), (var_4))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (var_6))))) : (1442893777894949663LL))))));
        }
        /* vectorizable */
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned char) (_Bool)1);
            var_34 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (var_8))) << (((1442893777894949652LL) - (1442893777894949638LL)))));
            var_35 = ((/* implicit */unsigned long long int) ((long long int) arr_24 [i_6 + 1] [i_11] [i_11] [i_11]));
        }
        var_36 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_6] [i_6 - 2])) ? (((/* implicit */int) arr_11 [i_6] [i_6])) : (((/* implicit */int) var_13)))) <= (min((((/* implicit */int) var_10)), (var_3))))))) % ((-(max((arr_30 [10ULL] [i_6 - 2] [2LL] [10ULL]), (2552931188U)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_12 = 1; i_12 < 10; i_12 += 4) 
        {
            var_37 = ((/* implicit */_Bool) -1442893777894949637LL);
            arr_37 [i_6] = ((/* implicit */signed char) (((!(var_6))) ? (((/* implicit */int) arr_5 [i_6])) : (((((/* implicit */_Bool) 3712446045U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))));
            var_38 = ((/* implicit */unsigned int) var_9);
        }
        for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                var_39 = ((/* implicit */long long int) ((short) arr_25 [i_6] [i_6 + 1] [i_6]));
                var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((((((/* implicit */_Bool) 441027837U)) || (((/* implicit */_Bool) min((var_11), (961093120546905938LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_18 [i_14]), (((/* implicit */unsigned long long int) arr_33 [i_14] [i_13] [i_6])))))))) : (((/* implicit */int) var_6)))))));
            }
            var_41 = ((/* implicit */long long int) var_16);
            /* LoopSeq 1 */
            for (unsigned char i_15 = 1; i_15 < 8; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        {
                            arr_49 [i_6] [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6 - 1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) arr_7 [i_6])) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_28 [2LL] [i_6 - 2] [2LL] [9])) / (((/* implicit */int) arr_2 [i_6]))))));
                            arr_50 [i_13] [i_13] [i_15] [i_13] [i_17] [i_16] [i_6] = ((/* implicit */unsigned int) var_16);
                            var_42 ^= ((/* implicit */short) (~(min((16679208779937682625ULL), (((/* implicit */unsigned long long int) arr_11 [i_6 + 1] [i_6 - 2]))))));
                            var_43 = ((/* implicit */unsigned short) ((unsigned long long int) var_2));
                        }
                    } 
                } 
                var_44 = ((6134665575355401439LL) >> (((961093120546905952LL) - (961093120546905898LL))));
                var_45 = ((/* implicit */unsigned int) var_8);
            }
            var_46 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_46 [(short)2])) || (((/* implicit */_Bool) (unsigned char)35)))) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_12))))))));
            var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((arr_8 [i_6 - 2] [i_13]), (arr_8 [i_6 + 1] [i_13])))), (((unsigned int) arr_8 [i_6 + 1] [8])))))));
        }
    }
    for (unsigned char i_18 = 2; i_18 < 17; i_18 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) ((unsigned long long int) ((((((/* implicit */_Bool) 17LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [(unsigned char)8] [(unsigned char)8]))) : (var_5))) == ((+(arr_54 [i_18] [(unsigned short)16] [i_19])))))))));
            var_49 = arr_55 [i_18];
        }
        for (long long int i_20 = 0; i_20 < 18; i_20 += 1) 
        {
            arr_59 [i_18] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)35)), (arr_58 [i_18] [i_20])))) ? (((((/* implicit */int) arr_56 [i_18])) / (((/* implicit */int) arr_58 [i_18] [i_20])))) : (((/* implicit */int) arr_58 [i_20] [(unsigned char)6]))))));
            var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) min((((/* implicit */int) (signed char)16)), (((((/* implicit */_Bool) var_11)) ? (arr_55 [8ULL]) : (((/* implicit */int) arr_51 [i_20])))))))));
            arr_60 [i_18] [i_20] = ((/* implicit */long long int) (unsigned char)69);
        }
        for (unsigned char i_21 = 0; i_21 < 18; i_21 += 3) 
        {
            var_51 = ((/* implicit */unsigned short) arr_54 [i_18] [i_21] [i_21]);
            var_52 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_18])) && (((/* implicit */_Bool) var_4))))) % (var_3)))), (var_1)));
            var_53 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & ((~(var_4)))))) ? (((/* implicit */int) arr_51 [i_18])) : ((+((~(((/* implicit */int) var_13))))))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_22 = 0; i_22 < 18; i_22 += 4) 
        {
            var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) arr_53 [i_18 - 2] [i_18 - 2]))));
            var_55 = ((/* implicit */long long int) var_17);
            /* LoopNest 3 */
            for (unsigned short i_23 = 0; i_23 < 18; i_23 += 4) 
            {
                for (signed char i_24 = 3; i_24 < 15; i_24 += 2) 
                {
                    for (short i_25 = 0; i_25 < 18; i_25 += 1) 
                    {
                        {
                            var_56 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [(short)14] [i_22])))))) % (arr_54 [i_23] [(unsigned short)14] [i_23]))) : (((unsigned long long int) arr_51 [i_22]))));
                            var_57 = ((/* implicit */unsigned char) (unsigned short)56096);
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            var_58 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_61 [i_18 - 2] [i_18]), (arr_61 [i_18 + 1] [i_18]))))));
            arr_78 [i_18] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_67 [17ULL] [i_18] [i_26]))));
        }
        arr_79 [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_77 [i_18] [i_18]))));
        var_59 = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((var_7), (((/* implicit */signed char) var_6)))))))))));
}
