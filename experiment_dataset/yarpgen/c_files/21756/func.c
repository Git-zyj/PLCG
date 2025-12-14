/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21756
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 3) /* same iter space */
        {
            arr_5 [i_1] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)14234)) == (((/* implicit */int) var_4))));
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)39770)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)992))) : (0ULL)));
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((/* implicit */int) (unsigned char)4)))))));
            var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) -2106621757)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_1)));
        }
        for (signed char i_2 = 2; i_2 < 20; i_2 += 3) /* same iter space */
        {
            arr_8 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)216)) >= (((/* implicit */int) (unsigned short)52187))));
            var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (-16) : (((/* implicit */int) (_Bool)0))));
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (unsigned char)251))));
        }
        arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)14234)) >= (((/* implicit */int) (unsigned short)0))));
    }
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)37042)) || (((/* implicit */_Bool) (unsigned short)14253)))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)14236))))) > (((((/* implicit */_Bool) (unsigned char)252)) ? (33776997205278720LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_6)) + (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)5), ((unsigned char)252))))) : (var_2)));
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)14234)) || (((/* implicit */_Bool) (unsigned char)224)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2097120)) ? (((/* implicit */int) (unsigned short)20823)) : (((/* implicit */int) (unsigned short)28494))))) : (((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 234881024)))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
        var_19 = ((/* implicit */long long int) max((var_19), (-586132062134872022LL)));
    }
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
        {
            var_20 = (unsigned short)52187;
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)51319)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_7)))))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned char)252)))) == (((/* implicit */int) (unsigned short)16346)))))))))));
        }
        for (int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
        {
            arr_21 [i_4] [8] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) != (var_0)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_7 = 3; i_7 < 9; i_7 += 4) 
            {
                arr_24 [i_7] [i_6] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_5))))) / (var_0)));
                arr_25 [i_4] = ((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157)))));
                var_22 = ((/* implicit */signed char) var_4);
                arr_26 [i_4] [(_Bool)1] = ((/* implicit */long long int) (unsigned short)14234);
            }
            var_23 = var_7;
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            var_24 += var_11;
                            arr_37 [i_4] [i_10] [i_9] [i_10] [i_10] [i_4] = ((/* implicit */unsigned int) (unsigned short)24224);
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_8))));
                            arr_38 [i_10] [i_10] [i_9] [i_8] [i_10] = ((/* implicit */unsigned int) (unsigned char)251);
                        }
                        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) 
                        {
                            var_26 = ((/* implicit */int) (unsigned short)26038);
                            var_27 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)12)) & (((/* implicit */int) var_7))));
                        }
                        for (short i_13 = 2; i_13 < 10; i_13 += 1) 
                        {
                            arr_44 [i_10] = ((/* implicit */long long int) ((var_9) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)19345)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))))));
                            var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135))))) / (((/* implicit */unsigned int) 576010383))));
                        }
                        for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
                        {
                            arr_48 [(unsigned short)0] [i_10] [i_10] [i_10] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (358574480) : (((/* implicit */int) (signed char)-73))));
                            var_29 = ((/* implicit */_Bool) var_9);
                        }
                        var_30 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64262))) : (var_11))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        var_31 -= ((/* implicit */unsigned int) ((18446744073709551615ULL) + (((((/* implicit */_Bool) 9006099743113216ULL)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51604)))))));
                        var_32 = ((/* implicit */signed char) (unsigned char)9);
                    }
                } 
            } 
            var_33 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) & (((((/* implicit */_Bool) (signed char)90)) ? (4576054520013597255ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13947)))))));
            arr_49 [i_4] [i_8] [i_4] = ((/* implicit */_Bool) (unsigned char)251);
        }
        /* vectorizable */
        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 4) 
        {
            var_34 &= ((/* implicit */signed char) (unsigned short)59162);
            arr_53 [i_4] [i_15] = ((/* implicit */unsigned short) var_0);
        }
        for (int i_16 = 1; i_16 < 10; i_16 += 4) 
        {
            arr_56 [i_4] [i_4] = ((/* implicit */_Bool) (unsigned char)252);
            arr_57 [(signed char)8] [i_16 + 1] [i_16 - 1] &= ((/* implicit */signed char) min((2998447990909650806LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_6)))))));
        }
        for (unsigned short i_17 = 0; i_17 < 11; i_17 += 4) 
        {
            arr_60 [i_4] = ((/* implicit */_Bool) (unsigned char)19);
            arr_61 [i_4] [i_17] = ((/* implicit */short) var_5);
            /* LoopSeq 4 */
            for (unsigned short i_18 = 0; i_18 < 11; i_18 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 11; i_19 += 4) 
                {
                    for (long long int i_20 = 0; i_20 < 11; i_20 += 1) 
                    {
                        {
                            arr_70 [i_4] [i_4] [i_20] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) 8957786212809946772ULL);
                            var_35 *= ((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_3)))))));
                            arr_71 [i_4] [i_20] [i_18] [(signed char)2] [(_Bool)1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) | (((264786233671330238ULL) & (((/* implicit */unsigned long long int) -1640153799815821676LL)))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned short) ((((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) == (0ULL))))));
            }
            for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 2) /* same iter space */
            {
                arr_75 [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */unsigned long long int) (unsigned short)0)), (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_2) : (var_2))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_22 = 0; i_22 < 11; i_22 += 3) 
                {
                    arr_79 [8ULL] [i_22] [0ULL] = ((/* implicit */signed char) 9488957860899604848ULL);
                    arr_80 [i_22] [i_22] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (13870689553695954360ULL)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_23 = 0; i_23 < 11; i_23 += 4) 
                    {
                        var_37 += ((/* implicit */int) (unsigned short)64);
                        arr_83 [i_22] [i_17] [i_22] [i_17] [i_22] = ((/* implicit */signed char) ((((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned short)1231)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2)))) : (((((/* implicit */_Bool) var_10)) ? (18181957840038221377ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1196)))))));
                    }
                }
                for (unsigned short i_24 = 0; i_24 < 11; i_24 += 2) 
                {
                    var_38 = ((/* implicit */long long int) var_11);
                    /* LoopSeq 1 */
                    for (unsigned short i_25 = 0; i_25 < 11; i_25 += 3) 
                    {
                        arr_88 [(_Bool)1] [i_24] [i_25] [i_17] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)73)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (unsigned char)13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) var_2))))) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551615ULL))))))) : (((((var_9) & (((/* implicit */unsigned int) -1676057199)))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)31029)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) var_4)))))))));
                        var_39 = ((((/* implicit */_Bool) (unsigned short)1536)) && (((/* implicit */_Bool) (unsigned short)2)));
                    }
                }
            }
            for (unsigned long long int i_26 = 0; i_26 < 11; i_26 += 2) /* same iter space */
            {
                var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (unsigned short)20407))));
                var_41 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) - (((/* implicit */int) (short)-25115))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9342)))));
                var_42 = ((/* implicit */unsigned long long int) max((var_42), (18446744073709551611ULL)));
                arr_93 [i_4] [i_4] [i_17] [i_26] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) var_6)) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_7), (var_4)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (unsigned char)18)))))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_27 = 0; i_27 < 11; i_27 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_28 = 0; i_28 < 11; i_28 += 4) 
                {
                    var_43 = ((/* implicit */unsigned short) ((var_0) + (((/* implicit */long long int) ((/* implicit */int) (short)0)))));
                    var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) (signed char)-5))));
                }
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)49194)) >= (((/* implicit */int) var_4))));
                var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))))))));
                arr_100 [i_4] [i_17] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18181957840038221362ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))));
                arr_101 [i_4] [(unsigned char)8] [5ULL] [(unsigned short)4] = ((/* implicit */unsigned int) var_6);
            }
        }
        var_47 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (short)20639)))), (((((/* implicit */_Bool) (unsigned short)64)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (unsigned short)64)))))), (((/* implicit */int) (signed char)8))));
        arr_102 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) (unsigned short)44090)) : (((/* implicit */int) (short)1))));
    }
    var_48 = ((/* implicit */long long int) ((((/* implicit */long long int) var_2)) != (var_0)));
}
