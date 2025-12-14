/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2370
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) min((((var_7) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_4)) ? (arr_0 [(short)0]) : (6065743950418056604ULL)))))));
        arr_4 [10LL] [i_0] &= ((/* implicit */short) (!(((((/* implicit */int) var_9)) >= (((/* implicit */int) ((short) arr_3 [i_0] [(_Bool)1])))))));
        var_12 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)6976)) ? (-9223372036854775780LL) : (3307129104238222429LL)))), (((var_9) ? (((/* implicit */unsigned long long int) 6991955920012033766LL)) : (var_4))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)0])))));
        arr_5 [i_0] = ((/* implicit */long long int) var_5);
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            arr_12 [i_1] [i_2] [(unsigned short)7] = ((/* implicit */short) max((var_0), (((long long int) arr_6 [i_2] [i_1]))));
            var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((12057039463186986363ULL), (((/* implicit */unsigned long long int) (signed char)-32)))))));
            /* LoopNest 2 */
            for (short i_3 = 4; i_3 < 12; i_3 += 3) 
            {
                for (int i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    {
                        arr_19 [i_3] [10LL] [i_3 - 1] [i_3] = ((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [i_3 - 2]);
                        arr_20 [i_3] [i_3] = ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) arr_8 [i_3 + 2] [i_3] [i_3 - 4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3 - 2] [i_3] [i_3 - 4]))))) : ((-(((/* implicit */int) arr_8 [i_3] [0] [i_3 - 1])))));
                    }
                } 
            } 
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)19692), (((/* implicit */short) (unsigned char)231))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) 12057039463186986363ULL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_1]))))))))));
                        var_15 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                        var_16 = ((/* implicit */short) ((min((((/* implicit */unsigned int) ((arr_27 [i_1] [i_5] [i_1] [i_7]) ? (((/* implicit */int) arr_17 [i_7] [i_7])) : (((/* implicit */int) arr_14 [i_6]))))), (arr_7 [i_1] [i_5]))) >= (((/* implicit */unsigned int) arr_6 [i_1] [i_5]))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (short i_8 = 1; i_8 < 11; i_8 += 3) 
            {
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_3))))))));
                arr_30 [(_Bool)1] [i_5] [i_5] [i_1] |= ((/* implicit */unsigned long long int) max((max((arr_25 [i_1] [i_5]), (((/* implicit */long long int) var_6)))), ((~(max((arr_25 [i_1] [i_1]), (((/* implicit */long long int) (unsigned char)107))))))));
            }
            for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                arr_34 [i_1] &= ((/* implicit */long long int) (-(((((2305772640469516288ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((unsigned char)1), (((/* implicit */unsigned char) (signed char)60)))))))));
                var_18 = ((/* implicit */_Bool) ((((var_4) - (min((((/* implicit */unsigned long long int) (short)13941)), (16140971433240035328ULL))))) << (((((unsigned long long int) (short)15941)) - (15935ULL)))));
                var_19 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((/* implicit */int) arr_29 [i_1] [i_5] [i_9])) - (31028)))));
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_1] [i_5])) ? (((/* implicit */int) ((unsigned short) var_5))) : ((+(((/* implicit */int) arr_15 [i_5] [i_5]))))));
                            var_21 = ((/* implicit */int) min((((/* implicit */short) (signed char)-80)), (min((arr_14 [i_1]), (((/* implicit */short) (!((_Bool)1))))))));
                        }
                    } 
                } 
            }
            for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                var_22 = ((/* implicit */int) var_7);
                arr_43 [i_1] [(signed char)9] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) (unsigned short)14041)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(arr_35 [i_1] [i_5] [i_12] [9LL] [i_5] [i_1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_1])))))))) : (((((var_1) > (((/* implicit */unsigned long long int) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_26 [i_1] [i_1] [i_1]))))) : (max((((/* implicit */long long int) var_8)), (var_0)))))));
            }
            /* LoopSeq 4 */
            for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 2; i_14 < 13; i_14 += 2) 
                {
                    var_23 = ((((/* implicit */_Bool) ((arr_7 [i_1] [i_1]) % (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))))) ? (((((/* implicit */unsigned long long int) ((unsigned int) var_4))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 251658240LL)) : (arr_39 [i_1] [i_5] [i_5]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) arr_48 [(short)10] [(short)4] [(short)10] [i_1] [i_1] [(_Bool)1]))), (min((arr_48 [0LL] [i_5] [i_13] [i_1] [i_1] [(short)11]), (((/* implicit */int) arr_10 [i_1] [i_13]))))))));
                    arr_50 [8LL] [8LL] [8LL] [i_14 - 2] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_14 - 2] [i_5] [i_13] [i_14] [i_5] [i_5])) - (((/* implicit */int) var_5))))), ((+(-251658241LL)))));
                    arr_51 [i_5] [i_5] [i_5] [(short)9] |= ((((arr_16 [i_14] [i_14] [i_14 - 1] [i_14] [i_14 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_14] [i_14 - 2] [i_14 + 1] [(short)3]))))) - (((arr_16 [i_14] [i_14] [i_14] [i_14] [i_14 - 2]) << (((var_4) - (158414969248018505ULL))))));
                }
                for (int i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    arr_55 [i_5] |= ((/* implicit */unsigned char) ((unsigned short) var_0));
                    arr_56 [(short)11] [(short)2] [i_1] [i_5] [i_13] [i_15] &= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_54 [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_15] [i_13] [i_5] [i_1]))) : (((unsigned long long int) (unsigned char)255))));
                }
                var_24 = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) arr_41 [(short)13] [i_1] [i_5] [i_13])))));
            }
            for (long long int i_16 = 2; i_16 < 13; i_16 += 3) 
            {
                var_25 = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_16 - 1] [i_5] [i_1]))) >= (var_7)))))) <= (((int) min((6389704610522565268ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                arr_59 [(short)1] [i_5] [4ULL] [7LL] = ((/* implicit */short) arr_49 [i_5] [i_1]);
            }
            /* vectorizable */
            for (unsigned short i_17 = 0; i_17 < 14; i_17 += 3) 
            {
                var_26 = (((_Bool)1) ? (((/* implicit */unsigned long long int) 1186979617)) : (2305843009213693944ULL));
                var_27 = ((/* implicit */short) ((-4214846735013915479LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-15941)) : (((/* implicit */int) arr_31 [(unsigned short)7] [i_5] [9ULL] [(unsigned short)7])))))));
            }
            for (short i_18 = 0; i_18 < 14; i_18 += 2) 
            {
                var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_18] [i_1])) & (((/* implicit */int) var_5)))) + ((+(((/* implicit */int) var_5))))));
                arr_66 [(short)9] [i_5] [(unsigned char)7] [i_5] &= ((/* implicit */short) ((unsigned short) 2305772640469516288ULL));
                var_29 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_42 [i_1] [i_1] [(unsigned char)4])), (var_1)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((var_10), (var_10))))))));
                var_30 = ((/* implicit */unsigned char) ((16140901064495857672ULL) + (36028797002186752ULL)));
                var_31 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (~(var_0))))))) / (((/* implicit */int) arr_40 [i_18] [(unsigned short)2] [i_18] [i_1] [i_5] [i_1] [i_1]))));
            }
            arr_67 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_58 [i_5] [7LL] [i_1] [i_1]);
        }
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16140901064495857684ULL)) ? (2305843009213693932ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1])))))) ? (((unsigned long long int) arr_18 [i_1] [(signed char)5] [i_1] [i_1])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1]))))))))));
        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) 2305772640469516283ULL)) ? (((/* implicit */unsigned long long int) 6441260690959762441LL)) : (16140971433240035328ULL)));
        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_58 [i_1] [i_1] [i_1] [i_1]) / (arr_58 [i_1] [i_1] [i_1] [i_1])))) ? (min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) 0U))))))) : (((/* implicit */int) (signed char)-37)))))));
    }
    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (-(17293822569102704640ULL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 16140901064495857673ULL))) ? (var_0) : (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))))) : (var_4)));
    var_36 *= ((/* implicit */signed char) min((2305843009213693915ULL), (((((/* implicit */_Bool) max((var_5), (var_8)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (2305843009213693923ULL))) : (var_1)))));
}
