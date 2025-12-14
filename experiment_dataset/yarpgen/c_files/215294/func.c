/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215294
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120)))))) : (var_12)))) ? ((+(((((/* implicit */_Bool) var_3)) ? (arr_3 [(unsigned short)2]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
                var_20 = (!(((/* implicit */_Bool) min((((long long int) -4604423520492807578LL)), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)1864)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_10);
    var_22 = var_1;
    var_23 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 1; i_2 < 6; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 4; i_3 < 8; i_3 += 1) 
        {
            for (signed char i_4 = 3; i_4 < 9; i_4 += 4) 
            {
                {
                    var_24 ^= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) 2685235852U)), (arr_8 [i_4 - 3]))), (((/* implicit */unsigned long long int) (~(arr_16 [i_4] [i_3 - 1] [i_2]))))));
                    var_25 |= ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_4 - 1])))) / (arr_3 [i_4]));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        {
                            arr_26 [i_2] = ((/* implicit */_Bool) min((3089288647506232449LL), (((/* implicit */long long int) (_Bool)1))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_9 [i_8] [i_2 + 3])))) && (((/* implicit */_Bool) ((1173950263U) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)15786)) : (((/* implicit */int) arr_13 [i_2]))))))))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)27182))) - (arr_19 [i_2 + 3] [i_2 + 3] [i_2 + 1] [8ULL])))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_28 [i_2] [i_2]))))) : ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (5305790550134097795ULL)))))));
            /* LoopSeq 3 */
            for (long long int i_10 = 1; i_10 < 9; i_10 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    arr_35 [i_2] [i_9] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_0)) ^ (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (unsigned short)1855)))) ? ((~(((((/* implicit */_Bool) arr_25 [i_2] [i_9] [i_9] [i_9] [2LL] [(unsigned short)9])) ? (((/* implicit */int) arr_1 [(signed char)0])) : (((/* implicit */int) arr_24 [i_2] [i_10] [i_11] [i_10] [i_10] [i_9] [i_2])))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (!(arr_34 [i_2] [i_9] [(signed char)8] [i_10] [i_11])))) : ((~(((/* implicit */int) var_4))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_29 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (var_2) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)54598)))))))) ? (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (signed char)-6)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_12] [i_10] [i_9])) && (((/* implicit */_Bool) arr_14 [i_2] [i_10])))))))) : (((((/* implicit */_Bool) var_6)) ? (((var_2) & (4140671255956815172ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_31 [i_12] [i_11] [(unsigned short)8]))))))));
                        var_30 = ((/* implicit */unsigned short) max((((unsigned long long int) -7241734059860332452LL)), (((/* implicit */unsigned long long int) arr_25 [i_2] [i_9] [i_10] [(unsigned short)6] [i_11] [(_Bool)1]))));
                        var_31 = ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) 2685235852U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_23 [i_2] [i_9] [i_10] [i_11])))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_15 [i_10] [6ULL] [i_9])) : (((/* implicit */int) var_5))))))));
                        var_32 ^= ((/* implicit */_Bool) var_17);
                    }
                }
                for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    arr_42 [i_9] [i_2] = min((13140953523575453821ULL), (((((/* implicit */_Bool) (-(arr_39 [1LL] [i_9] [i_10] [i_13] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_2] [4LL]))) : (min((var_6), (((/* implicit */unsigned long long int) (signed char)6)))))));
                    arr_43 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) > ((((~(var_6))) & (((/* implicit */unsigned long long int) arr_18 [i_2 + 1] [i_2 + 1] [i_2 + 4]))))));
                    var_33 += ((/* implicit */unsigned short) var_18);
                    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) arr_4 [1ULL] [i_9]))));
                }
                for (unsigned long long int i_14 = 3; i_14 < 7; i_14 += 1) 
                {
                    arr_46 [3U] [i_9] [i_9] [i_9] [i_9] [i_2] = ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_5)), (arr_2 [i_9])))))) ? (((long long int) arr_15 [i_2] [i_10 + 1] [i_14 - 1])) : (var_10));
                    arr_47 [i_9] [i_9] [(unsigned short)2] = ((/* implicit */signed char) (-((-(arr_8 [i_14 + 2])))));
                }
                arr_48 [i_9] [i_10] [i_9] [i_9] = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))));
                arr_49 [i_9] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 8593501115311944568LL)) : (var_6))), (((/* implicit */unsigned long long int) arr_2 [i_2 + 3])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((((unsigned short) var_6)), ((unsigned short)62593)))))));
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_27 [i_2 + 2] [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_18 [i_2 + 1] [i_2 + 3] [i_2])) != (var_18))))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_15] [i_16]))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (((((/* implicit */unsigned long long int) var_18)) - (13565190202044177291ULL)))))));
                        }
                    } 
                } 
                var_37 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 8657201487240522213LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_10 - 1] [i_10] [i_9] [i_2])) ? (var_12) : (var_9)))) ? (((/* implicit */unsigned long long int) 4172244178080489225LL)) : (26ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)41259))))))))));
            }
            for (long long int i_17 = 1; i_17 < 7; i_17 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_38 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)9535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (14306072817752736443ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)51552))))));
                    var_39 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_36 [i_2] [i_2 - 1] [i_17 + 3] [i_9])), (arr_25 [i_2] [i_17 - 1] [i_17] [i_17 - 1] [i_17 - 1] [i_2]))))));
                }
                arr_63 [i_9] [i_9] [2ULL] [i_17] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
            }
            for (unsigned short i_19 = 0; i_19 < 10; i_19 += 3) 
            {
                var_40 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_59 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 4]) ? (((/* implicit */unsigned long long int) var_10)) : (var_9))))));
                arr_66 [i_9] = ((/* implicit */signed char) min(((~(arr_5 [i_2 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_7))) / (((/* implicit */int) arr_12 [i_2 + 3] [i_2 + 4])))))));
                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [(unsigned short)7] [i_2 + 2] [i_2] [i_2] [i_2] [i_2 + 2])) * (((/* implicit */int) arr_22 [i_2] [i_2 + 3] [i_2] [i_2] [i_2] [i_2 + 1]))))) ? ((~(arr_39 [i_2 + 4] [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)24291))))) : (min((((/* implicit */unsigned int) arr_34 [i_2] [i_2] [i_2] [i_2] [i_2])), (1173950259U))))))));
                var_42 = ((/* implicit */long long int) arr_56 [i_2] [i_9] [i_9] [i_19]);
                arr_67 [i_9] [i_9] [i_9] = ((/* implicit */signed char) arr_50 [i_2 + 3] [i_9] [i_2 + 3]);
            }
        }
        var_43 = (!(((/* implicit */_Bool) arr_54 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 + 4])));
    }
    for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 4) 
    {
        var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_18)))) ? (((arr_69 [(unsigned short)17] [i_20]) ? (((/* implicit */int) arr_69 [i_20] [i_20])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min(((unsigned short)10176), (arr_68 [i_20] [i_20])))))))));
        arr_70 [i_20] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (signed char)-25)))));
        var_45 = arr_68 [i_20] [i_20];
        arr_71 [i_20] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((10607829792280783085ULL), (((/* implicit */unsigned long long int) (unsigned short)8191))))) ? ((~(((/* implicit */int) (unsigned short)63584)))) : (((/* implicit */int) var_0)))), (((/* implicit */int) arr_69 [6LL] [i_20]))));
    }
    /* vectorizable */
    for (unsigned short i_21 = 1; i_21 < 21; i_21 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 1) 
        {
            for (unsigned short i_23 = 0; i_23 < 24; i_23 += 1) 
            {
                {
                    var_46 = ((/* implicit */unsigned long long int) (+(arr_77 [i_21 - 1])));
                    var_47 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)43835)) ? (arr_76 [i_21 + 1] [i_22]) : (((/* implicit */long long int) ((/* implicit */int) arr_81 [i_21 + 3] [i_21 + 2])))));
                }
            } 
        } 
        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_77 [i_21 + 3])) ? (arr_77 [i_21 + 2]) : (arr_77 [i_21 + 1])));
        arr_83 [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)0)))) : (16274209589331443199ULL)));
    }
    for (unsigned short i_24 = 3; i_24 < 16; i_24 += 3) 
    {
        arr_87 [i_24] [i_24] = ((/* implicit */_Bool) arr_77 [i_24]);
        /* LoopNest 2 */
        for (unsigned short i_25 = 0; i_25 < 19; i_25 += 3) 
        {
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                {
                    var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) (((+((+(((/* implicit */int) arr_93 [i_24] [i_24] [i_24])))))) - (((/* implicit */int) (signed char)-118)))))));
                    arr_94 [i_24] [i_25] [i_26] = ((/* implicit */unsigned short) ((((var_13) ? (((unsigned long long int) (unsigned short)58912)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41009))) & (var_16))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_79 [i_24] [i_24 + 3] [i_24] [i_24 + 1])) ? (((/* implicit */int) (signed char)109)) : (((((/* implicit */int) var_15)) | (((/* implicit */int) var_11)))))))));
                    var_50 = ((/* implicit */signed char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_26]))) * (2102495469816684047ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_79 [i_24] [i_25] [i_25] [i_26])))))), (((/* implicit */unsigned long long int) arr_72 [i_25]))));
                }
            } 
        } 
        var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_82 [i_24] [i_24] [i_24] [i_24 + 1]))))))) ? ((+(arr_73 [i_24]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37772))) : (var_12))))))))));
    }
}
