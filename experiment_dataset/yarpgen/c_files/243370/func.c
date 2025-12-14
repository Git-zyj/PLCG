/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243370
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
    var_10 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_11 -= ((/* implicit */long long int) ((0ULL) - (((/* implicit */unsigned long long int) (+((+(var_8))))))));
                    var_12 |= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_1 [i_1]))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    arr_9 [i_0] = ((/* implicit */unsigned char) 8251239184089009494LL);
                    var_13 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)200)), (min((((((/* implicit */_Bool) var_8)) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)247)))))))));
                }
                for (short i_4 = 4; i_4 < 8; i_4 += 4) 
                {
                    var_14 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? ((~(var_8))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)50))))))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) var_7)))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            arr_18 [i_0] [i_5 - 1] [i_1] [i_1] [i_0] = ((/* implicit */short) var_7);
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) 3047699146U)) ? (((/* implicit */int) (unsigned short)62234)) : (((/* implicit */int) (short)1667)))))));
                            var_17 = ((/* implicit */signed char) arr_8 [i_5 + 1] [i_1] [i_0] [i_5]);
                        }
                        for (unsigned long long int i_7 = 4; i_7 < 11; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)55284))));
                            arr_22 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (unsigned short)6456))) ^ (((/* implicit */int) ((2017612633061982208LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))))))))) ? (((/* implicit */int) arr_11 [i_5] [i_0])) : (((/* implicit */int) ((short) (unsigned char)200)))));
                            arr_23 [i_0 - 2] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((signed char)68), (((/* implicit */signed char) arr_5 [i_4])))))))) ? (arr_20 [i_0] [i_1] [i_0] [i_1] [i_7 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                        }
                        arr_24 [i_0] [i_0] [(unsigned short)11] [i_5] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0])))))))), ((+(((/* implicit */int) (short)-1661))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            arr_27 [i_0] [i_5] [i_4] [i_1] [i_0] = ((/* implicit */signed char) (-(arr_8 [i_0 - 3] [i_0] [i_0] [i_0])));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_26 [i_0] [i_0] [i_4] [i_5] [i_5] [i_8]);
                        }
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            arr_31 [i_0] [i_1] [i_4 - 3] [i_5] [i_0] = ((/* implicit */unsigned int) ((short) 0ULL));
                            arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
                            arr_33 [i_0] [4LL] [i_0] [i_4] [i_5] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_20 [i_4 - 3] [i_0] [i_4 - 3] [i_0] [i_0 + 1])))) && (((/* implicit */_Bool) (+(min((arr_7 [i_0] [i_0] [i_0] [i_9 - 1]), (((/* implicit */int) arr_4 [i_0] [(short)0] [i_0] [i_0])))))))));
                            arr_34 [i_4] [i_0] [6U] [i_4] [i_0] [i_0 - 1] = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
                            var_19 |= ((/* implicit */int) var_2);
                        }
                        for (signed char i_10 = 1; i_10 < 9; i_10 += 4) 
                        {
                            arr_38 [1ULL] [i_0] [i_4 + 1] [i_5 + 1] [i_10] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)2050))));
                            arr_39 [i_0 + 1] [i_0] [i_0] = ((/* implicit */signed char) (-(var_8)));
                            var_20 = ((/* implicit */int) var_0);
                        }
                        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) -4221602650833457515LL)))))));
                    }
                }
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) >= (max((70368744177663ULL), (70368744177663ULL))))) ? (min((arr_8 [i_0] [i_1] [i_11] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_8))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21860))) : (var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32744))))) : (((/* implicit */int) (unsigned char)50)))))));
                    /* LoopSeq 3 */
                    for (signed char i_12 = 4; i_12 < 11; i_12 += 4) 
                    {
                        var_23 = ((/* implicit */short) min((((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_11] [i_11] [i_0])), (((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_12] [i_12] [i_11] [i_0])) ? (((/* implicit */int) arr_37 [i_0 - 3] [(_Bool)1] [i_0 - 3] [(_Bool)1] [i_12])) : (((/* implicit */int) arr_37 [i_12] [i_11] [i_1] [i_0] [i_0]))))));
                        arr_45 [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446673704965373967ULL))))) ? (((4086092753U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((((_Bool)0) || (((/* implicit */_Bool) (short)-29132)))) && ((!(((/* implicit */_Bool) arr_17 [i_0 - 1] [i_0] [i_1] [i_0] [i_11] [i_11] [i_12]))))))))));
                        var_24 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_12 - 4] [i_11] [(unsigned short)3] [(unsigned short)9])) || (((/* implicit */_Bool) (unsigned char)48)))))))) ? (((/* implicit */int) (short)6717)) : (((/* implicit */int) (signed char)126))));
                    }
                    for (signed char i_13 = 3; i_13 < 11; i_13 += 4) 
                    {
                        arr_50 [i_13] [i_11] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((var_5) + (arr_8 [i_0 - 3] [i_1] [(signed char)0] [i_13]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_0] [i_0] [i_11] [i_13])))))) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) var_1))));
                        var_25 = ((/* implicit */unsigned long long int) ((min(((!(((/* implicit */_Bool) (unsigned char)166)))), (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3)))))) && (((var_2) && (((/* implicit */_Bool) (short)-32744))))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned short)4092)))))))));
                        arr_51 [i_0] [i_0] [i_1] [i_11] [i_13] = ((/* implicit */_Bool) ((unsigned char) (((((_Bool)1) || ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0])) ^ (((/* implicit */int) arr_12 [i_0]))))) : (((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                    }
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        arr_55 [i_0] [i_0] [i_11] [i_11] [i_14] [i_14] = ((/* implicit */unsigned short) arr_0 [i_1] [i_0]);
                        arr_56 [i_0] [(short)11] [i_11] [i_14] = ((/* implicit */short) (-(((/* implicit */int) (short)-16294))));
                        var_27 = ((/* implicit */unsigned long long int) arr_37 [i_0] [i_0] [i_1] [(unsigned char)7] [i_0]);
                    }
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    arr_59 [i_0] [i_0] [i_15] [i_15] = ((/* implicit */long long int) (!(arr_49 [i_0] [i_0] [i_0] [(unsigned char)5] [i_1] [i_0])));
                    var_28 = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3))))));
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        arr_63 [i_0] [i_0] [i_15] [i_16] = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)125))) + (-7845089174616247760LL)))) - ((-(arr_44 [i_0]))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_16 + 1] [i_0 + 2])))))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)5)) >= (arr_7 [(short)5] [i_0] [i_15] [i_0])));
                    }
                }
                var_31 ^= ((/* implicit */short) max(((~(((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) arr_19 [i_0 + 2] [i_1] [i_0 + 2] [i_1] [(short)2] [i_1])))))), (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 2] [i_1] [i_0 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 3] [i_1] [i_0 - 2]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 4) 
    {
        arr_67 [i_17] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_66 [i_17] [i_17]))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (208874542U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27456)))))))) ? (((((/* implicit */_Bool) (short)-6510)) ? (((/* implicit */int) (unsigned short)20208)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) (short)504)) && (((/* implicit */_Bool) var_9))))), (arr_65 [i_17]))))));
        arr_68 [i_17] = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) arr_66 [i_17] [i_17])), (arr_64 [i_17]))), ((((_Bool)1) ? (arr_64 [i_17]) : (arr_64 [i_17])))));
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (~(((/* implicit */int) arr_66 [(unsigned short)1] [i_17])))))));
        var_33 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (274877906943ULL)))) ? (((/* implicit */int) max(((unsigned short)4), (((/* implicit */unsigned short) var_3))))) : (((/* implicit */int) var_3))))));
    }
    /* vectorizable */
    for (unsigned short i_18 = 3; i_18 < 17; i_18 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_19 = 0; i_19 < 20; i_19 += 4) 
        {
            arr_74 [i_19] [i_18 - 2] = ((/* implicit */signed char) (~(((/* implicit */int) (short)25368))));
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_71 [i_18 - 2] [i_18 + 3])) ? (((/* implicit */int) arr_71 [i_18 + 1] [i_18 - 1])) : (((/* implicit */int) arr_71 [i_18 + 1] [i_18 - 1]))));
        }
        arr_75 [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) 3495458653U))));
        arr_76 [i_18 - 2] = ((/* implicit */long long int) arr_73 [i_18] [i_18 - 3]);
        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) var_9))));
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        arr_80 [i_20] = ((/* implicit */signed char) (unsigned char)166);
        var_36 |= ((/* implicit */unsigned char) (~((+(max((arr_79 [i_20]), (((/* implicit */unsigned long long int) arr_78 [(unsigned char)12]))))))));
    }
}
