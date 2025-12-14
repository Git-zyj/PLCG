/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53744
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
    var_18 = ((/* implicit */short) -2283945022532629702LL);
    var_19 = ((/* implicit */long long int) (unsigned short)8184);
    var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(var_13)))) < (((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_8)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)8173)) >= (((/* implicit */int) (unsigned short)46923))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) (((+(((unsigned long long int) arr_2 [i_0])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 2])) == (((/* implicit */int) arr_1 [i_0 + 4]))))))));
        arr_3 [i_0 + 2] = var_6;
        arr_4 [i_0] = ((/* implicit */long long int) (~((((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) min((var_8), (arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_1 [i_0 + 3])))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) arr_5 [i_1]);
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_5 [(unsigned short)8]))) + (((/* implicit */long long int) ((/* implicit */int) (!(arr_8 [i_1] [i_1] [i_2])))))))))))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (unsigned short)46923)) < (((/* implicit */int) (signed char)-6))))))));
        }
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            var_25 = ((/* implicit */int) ((arr_10 [3ULL] [i_3] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))));
            var_26 = ((/* implicit */long long int) min((var_26), (var_6)));
            var_27 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-6)), (var_15)))) ? (min((((/* implicit */int) ((_Bool) var_13))), ((+(((/* implicit */int) (unsigned short)8173)))))) : (((/* implicit */int) (unsigned short)36275))));
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */_Bool) 8512346029714132644LL)) && (((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_1]))))) - (((/* implicit */unsigned long long int) ((max((arr_5 [i_1]), (arr_5 [i_1]))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10186)))))))))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13392798665526351567ULL)) ? (6755399441055744LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25542)))))) ? (max((992ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((unsigned short)46910), (((/* implicit */unsigned short) arr_13 [i_4] [i_4]))))), (((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (-17LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)20))))))))));
        /* LoopSeq 2 */
        for (short i_5 = 2; i_5 < 15; i_5 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 3; i_6 < 15; i_6 += 1) 
            {
                for (long long int i_7 = 4; i_7 < 14; i_7 += 3) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)126)), (arr_21 [i_4] [i_5] [i_4] [i_5] [i_5] [i_5 - 2]))))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [(signed char)11] [i_4] [i_4] [i_4]))) : (min((var_6), (((/* implicit */long long int) (unsigned short)55338))))))));
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) arr_18 [i_7] [(_Bool)1] [(_Bool)1] [i_4])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27787)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [i_5] [(signed char)0] [(unsigned short)14]))) : ((~((-(-5247518324240026630LL))))))))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)23503)) >= (((/* implicit */int) (signed char)79))))) % ((~(((/* implicit */int) arr_11 [i_4] [i_4]))))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_21 [i_7 + 3] [(unsigned short)4] [i_4] [i_4] [i_6] [i_6]), (((/* implicit */unsigned short) arr_20 [i_6 + 1] [i_4] [i_4] [i_4]))))) << (((((((((/* implicit */_Bool) (unsigned short)30622)) ? (arr_17 [i_6] [i_6] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7 - 2] [i_7] [i_4] [i_4] [i_6] [i_6]))))) + (2583115291427010952LL))) - (18LL)))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                var_34 -= ((/* implicit */unsigned short) (((~(5053945408183200043ULL))) >> (((/* implicit */int) ((unsigned short) arr_20 [(_Bool)1] [14] [i_5 + 2] [i_5])))));
                var_35 = ((/* implicit */unsigned long long int) (unsigned char)180);
                arr_25 [i_4] [i_8] = arr_11 [i_5] [i_4];
            }
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                arr_28 [i_4] [i_5] = ((/* implicit */short) (~(13LL)));
                arr_29 [i_4] [i_5] [i_4] = ((/* implicit */int) var_10);
                var_36 *= ((/* implicit */long long int) min((((((/* implicit */_Bool) var_1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [6] [(unsigned char)16]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_15 [i_4] [i_5] [(unsigned char)2])), (var_15))))));
                var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((~((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */int) (signed char)112)) : (((((/* implicit */_Bool) ((signed char) 1100645393))) ? ((+(((/* implicit */int) (signed char)127)))) : (var_5))))))));
                /* LoopSeq 1 */
                for (signed char i_10 = 1; i_10 < 16; i_10 += 1) 
                {
                    var_38 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((((((/* implicit */int) var_9)) | (((/* implicit */int) arr_27 [i_4] [(unsigned char)6])))) << (((((((/* implicit */int) min((var_0), (arr_18 [i_10] [(unsigned short)4] [(unsigned short)4] [i_4])))) + (38))) - (14))))) : (((/* implicit */int) arr_26 [0LL] [i_5 - 1] [i_10 + 1]))));
                    var_39 *= ((/* implicit */unsigned long long int) ((((arr_17 [i_9 + 1] [(unsigned char)12] [i_9]) ^ (arr_17 [i_9 + 1] [i_9 + 1] [i_10 - 1]))) ^ (max((arr_17 [i_9 + 1] [i_10] [i_10]), (arr_17 [i_9 + 1] [i_9 + 1] [i_9])))));
                }
            }
            /* LoopSeq 2 */
            for (long long int i_11 = 2; i_11 < 14; i_11 += 3) /* same iter space */
            {
                var_40 = ((((((/* implicit */int) (signed char)10)) < (((/* implicit */int) (unsigned short)0)))) ? ((((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((15984520264681067207ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)161)))))))) : (((/* implicit */int) var_15)));
                var_41 = ((/* implicit */_Bool) ((max((arr_20 [i_11] [i_4] [i_4] [i_11 + 2]), (arr_20 [i_11] [i_4] [i_4] [i_11 + 1]))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [15ULL] [i_4] [i_4] [i_11 + 1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_11] [i_4] [i_4] [i_11 - 2]))) / (var_4)))));
            }
            for (long long int i_12 = 2; i_12 < 14; i_12 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 4; i_13 < 14; i_13 += 1) 
                {
                    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        {
                            var_42 -= ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_13 [i_13] [i_5])) | (var_17))) | (((/* implicit */int) arr_41 [i_13] [i_13] [i_12] [i_13] [8LL]))))) <= (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) arr_42 [i_14] [i_13 - 3] [i_12] [i_5] [(unsigned short)5])) : (((/* implicit */int) arr_36 [i_4] [(_Bool)1] [(signed char)16] [i_4]))))), (max((((/* implicit */unsigned long long int) (unsigned short)48217)), (3273774971019994675ULL))))));
                            var_43 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-6)), (arr_16 [i_4] [i_5] [(unsigned char)13]))))));
                            var_44 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47932))) != (998ULL))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((-5090488609890599909LL), (((/* implicit */long long int) arr_42 [i_4] [i_5] [i_12 - 1] [i_13] [i_14]))))) != (((unsigned long long int) (unsigned short)12)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_14] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_5]))) : (var_4)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)121))))) : (max((3940649673949184LL), (((/* implicit */long long int) (unsigned char)55))))))));
                            var_45 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */int) arr_44 [i_4] [i_12] [i_12] [i_13 - 1] [i_14])) >> (((((/* implicit */int) var_9)) - (49175))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_4] [i_14] [i_12])) ? (((/* implicit */int) arr_24 [i_4] [i_5])) : (((/* implicit */int) arr_13 [i_4] [i_5]))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_45 [i_4] [i_5] [i_4] [2] [i_4] = ((/* implicit */signed char) (~(max((max((((/* implicit */unsigned long long int) (unsigned char)193)), (0ULL))), (918508445431093412ULL)))));
                        }
                    } 
                } 
                var_46 |= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_36 [i_12 + 2] [6LL] [6LL] [i_5])) < (((/* implicit */int) (signed char)28)))))));
            }
            var_47 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-124)) ? (10465636500369319224ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)57)))))) ? (var_7) : (((/* implicit */unsigned long long int) -1976684834))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) (_Bool)1)))))) : (((long long int) (~(var_14))))));
            var_48 ^= ((/* implicit */short) ((((((/* implicit */_Bool) arr_36 [i_4] [(unsigned short)6] [i_5] [i_5 + 2])) ? (((/* implicit */int) arr_36 [i_4] [12ULL] [6] [i_5 - 2])) : (((/* implicit */int) arr_36 [i_4] [(unsigned short)6] [i_5] [10])))) == (((((/* implicit */_Bool) arr_34 [4ULL])) ? (((/* implicit */int) arr_34 [(unsigned short)10])) : (((/* implicit */int) arr_34 [(unsigned short)6]))))));
        }
        for (short i_15 = 2; i_15 < 15; i_15 += 3) /* same iter space */
        {
            var_49 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_15] [i_15] [i_4])) ? (max((var_16), (-713412247))) : (var_17))) != (((/* implicit */int) ((unsigned short) (unsigned short)50251)))));
            arr_48 [i_4] [i_4] = ((((/* implicit */_Bool) (unsigned short)17773)) ? (((((/* implicit */int) arr_46 [i_4])) + (((/* implicit */int) arr_14 [i_15 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))));
            /* LoopSeq 1 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_17 = 2; i_17 < 15; i_17 += 1) 
                {
                    for (unsigned char i_18 = 1; i_18 < 16; i_18 += 4) 
                    {
                        {
                            var_50 *= ((/* implicit */signed char) (~(9223372036854775807LL)));
                            var_51 = ((/* implicit */unsigned char) var_8);
                            var_52 ^= ((/* implicit */unsigned short) ((unsigned char) min(((unsigned short)57047), (((/* implicit */unsigned short) (signed char)-6)))));
                            var_53 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 7271906246616853057LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_4] [6LL] [(unsigned short)12] [(unsigned short)12]))))) && (arr_41 [16LL] [i_15 + 1] [i_16] [i_17 - 1] [(signed char)14])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113))) == (var_7))))));
                        }
                    } 
                } 
                arr_57 [8LL] [i_15] [i_16] [8LL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_11 [10ULL] [10ULL]), (arr_11 [(signed char)6] [(signed char)6])))) ? (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (64424509440ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))));
                /* LoopSeq 2 */
                for (long long int i_19 = 1; i_19 < 14; i_19 += 4) 
                {
                    var_54 = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_42 [i_19 + 3] [5] [i_15] [i_15 + 1] [2LL]), (arr_42 [i_19 + 3] [i_19] [i_16] [i_15 - 2] [i_4]))))));
                    var_55 = ((/* implicit */long long int) max((var_55), (((/* implicit */long long int) ((unsigned short) var_4)))));
                    var_56 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127))));
                    var_57 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_53 [i_19 - 1] [i_19] [i_19 - 1] [(short)1] [i_19])) || (((/* implicit */_Bool) (+(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45126))) | (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (((((/* implicit */long long int) -1379368362)) ^ (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_30 [i_4] [i_19] [i_16] [i_16] [i_15 + 1] [i_4]), (arr_30 [i_4] [i_19] [i_19] [i_19] [i_15 - 2] [i_4])))))));
                }
                for (unsigned long long int i_20 = 3; i_20 < 16; i_20 += 3) 
                {
                    var_58 *= ((/* implicit */unsigned char) arr_21 [i_4] [i_4] [(unsigned short)0] [i_15] [i_16] [i_20]);
                    var_59 = ((/* implicit */unsigned short) min((var_59), (((/* implicit */unsigned short) arr_55 [i_4] [i_15 + 2] [i_4] [i_16] [i_20]))));
                    var_60 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)50251))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_21 = 1; i_21 < 14; i_21 += 1) 
                    {
                        var_61 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_15 + 2] [i_15 + 2] [i_15 + 2])) || (((/* implicit */_Bool) arr_40 [i_15 - 1] [i_15 + 2] [i_15 + 2]))));
                        var_62 = ((/* implicit */short) (~(var_12)));
                    }
                    arr_66 [i_4] [i_4] [i_4] [10LL] = ((/* implicit */_Bool) ((int) (unsigned char)172));
                }
                arr_67 [i_16] [i_4] [i_4] = ((/* implicit */int) min((min((((/* implicit */long long int) (signed char)-90)), (arr_64 [i_15] [i_15 + 1] [i_15 - 2] [i_15 + 1] [i_15 - 2] [i_15 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) -906353800)) ? (((/* implicit */int) arr_63 [i_15 - 2] [i_15 + 1] [i_15 - 2] [i_15 - 2])) : (((/* implicit */int) arr_63 [i_15 - 2] [i_15 - 1] [i_15 - 1] [i_15 + 1])))))));
            }
        }
    }
}
