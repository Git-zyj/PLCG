/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224420
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
    var_13 = var_11;
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned int) var_0))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */int) (unsigned char)255))))) != (((var_3) % (((/* implicit */long long int) 857376883)))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned short)46780))))) : (max((arr_2 [i_0 - 2] [i_0]), (((/* implicit */int) var_12)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0 - 1]);
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 20; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */int) arr_5 [i_1]);
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)234)) % (-2)));
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] [i_2] = (-(max((((/* implicit */unsigned int) arr_10 [i_2])), (max((var_7), (((/* implicit */unsigned int) (unsigned char)17)))))));
        var_16 = ((/* implicit */unsigned int) (+(((arr_1 [i_2]) / (arr_1 [i_2])))));
        var_17 = ((/* implicit */short) (unsigned char)0);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_2]))))) ? (((/* implicit */int) arr_10 [i_2])) : ((-(((/* implicit */int) (signed char)4))))));
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) (+((-(min((((/* implicit */long long int) (unsigned char)58)), (4286578688LL)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        arr_16 [i_3] [i_3] = (-((+(arr_13 [i_3]))));
        arr_17 [i_3] = var_6;
        /* LoopSeq 3 */
        for (int i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            var_19 = max((((((/* implicit */_Bool) ((arr_8 [i_4] [i_3]) / (var_1)))) ? (max((4389438664849425272LL), (((/* implicit */long long int) (unsigned short)10752)))) : (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (arr_6 [i_3] [i_3]) : (arr_6 [i_3] [i_3])))));
            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_2 [i_3] [i_3]) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)243)) < (var_6)))))))));
            var_21 = ((((/* implicit */unsigned int) arr_2 [i_4 - 1] [i_4 - 1])) + (3532558172U));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_5 = 2; i_5 < 17; i_5 += 4) 
            {
                arr_25 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (+(4389438664849425258LL)));
                arr_26 [i_3] = ((/* implicit */unsigned char) ((unsigned int) (unsigned char)26));
                arr_27 [i_3] [i_3] [i_3] = (+(((((-1066928895) + (2147483647))) << (((((/* implicit */int) (unsigned char)48)) - (48))))));
                arr_28 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)7690)) ? (-4679013523627918836LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)197))))))));
                var_22 = ((/* implicit */unsigned short) (+(arr_23 [i_5] [i_5 - 1] [i_5 - 1] [i_5])));
            }
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                arr_32 [i_3] [i_3] [i_3] [i_3] = ((unsigned short) arr_31 [i_3]);
                arr_33 [i_4] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max(((+(1))), ((-(arr_13 [i_3])))))), ((-(((unsigned int) (unsigned char)0))))));
                arr_34 [i_3] [i_3] = (((((~(((/* implicit */int) ((unsigned char) (unsigned short)1792))))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_3] [i_3] [i_4] [i_6]))) <= (max((((/* implicit */unsigned int) (unsigned char)84)), (arr_31 [i_4])))))) - (1))));
            }
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)23)) >= (((/* implicit */int) (short)23))))) >> (((((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49126))) : (var_2))) - (49126U)))));
            arr_37 [i_3] = ((/* implicit */short) var_12);
            arr_38 [i_3] = ((/* implicit */long long int) arr_5 [i_3]);
            arr_39 [i_3] [i_7] [i_3] = ((/* implicit */long long int) var_12);
        }
        for (int i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    arr_51 [i_3] [i_9] = ((((/* implicit */int) arr_42 [i_8])) << (((((/* implicit */int) ((unsigned short) -4389438664849425266LL))) - (64642))));
                    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)200))));
                    arr_52 [i_3] [i_3] [i_9] [i_10] = ((((/* implicit */_Bool) 1173202474)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46))) : (arr_50 [i_10] [i_9] [i_8]));
                }
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        {
                            arr_60 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)25836)) << ((((~(arr_19 [i_9] [i_12]))) - (1459916412U)))));
                            var_25 = ((/* implicit */int) arr_8 [i_3] [i_3]);
                            arr_61 [i_3] [i_3] [i_3] [i_11] [i_12] [i_8] [i_3] = ((/* implicit */signed char) ((int) ((short) (unsigned char)27)));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    arr_65 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) arr_1 [i_9]);
                    arr_66 [i_3] = ((/* implicit */unsigned int) arr_20 [i_3]);
                    arr_67 [i_9] [i_8] [i_3] [i_13] = ((/* implicit */unsigned char) arr_64 [i_3] [i_8] [i_3] [i_13]);
                    arr_68 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_48 [i_3])) ^ (((/* implicit */int) arr_48 [i_9]))));
                }
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    arr_72 [i_3] [i_3] = ((/* implicit */long long int) ((arr_63 [i_3] [i_8] [i_8] [i_8] [i_9] [i_8]) >= (arr_63 [i_3] [i_8] [i_8] [i_8] [i_9] [i_14])));
                    var_26 = ((/* implicit */int) arr_14 [i_3]);
                }
                for (unsigned char i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    arr_77 [i_15] [i_15] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((long long int) (_Bool)1)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173)))));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((arr_1 [i_3]) & (((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */_Bool) arr_19 [i_3] [i_9])) ? (((/* implicit */unsigned int) var_6)) : (5U)))));
                    arr_78 [i_3] [i_3] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_76 [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) var_8))))));
                    arr_79 [i_8] [i_3] [i_15] = ((/* implicit */long long int) arr_47 [i_3] [i_15] [i_3] [i_15]);
                }
                for (signed char i_16 = 2; i_16 < 17; i_16 += 2) 
                {
                    arr_84 [i_3] [i_16 - 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_71 [i_3]))));
                    arr_85 [i_16] [i_3] [i_16 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                }
                var_28 = ((/* implicit */int) ((unsigned short) (-(var_1))));
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) / ((+(848486989U)))));
            }
            for (unsigned int i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                arr_88 [i_3] [i_3] = ((/* implicit */int) arr_82 [i_17] [i_17] [i_17] [i_17]);
                arr_89 [i_3] [i_8] = ((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned char)189)))), (((int) (unsigned char)200))));
                arr_90 [i_3] [i_3] [i_3] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned char)32)), (max((arr_14 [i_3]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) % (arr_35 [i_3]))))))));
                arr_91 [i_3] [i_3] [i_17] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_81 [i_3])) : (max(((-(198278854160982683LL))), (((/* implicit */long long int) ((int) (unsigned short)16383)))))));
            }
            /* vectorizable */
            for (signed char i_18 = 1; i_18 < 15; i_18 += 4) 
            {
                arr_94 [i_3] [i_8] [i_3] = ((/* implicit */unsigned char) (~(arr_73 [i_3] [i_18 + 3] [i_18 + 3] [i_18 + 3])));
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 18; i_19 += 3) 
                {
                    for (unsigned short i_20 = 2; i_20 < 14; i_20 += 4) 
                    {
                        {
                            arr_101 [i_3] [i_8] [i_18] [i_3] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_50 [i_3] [i_8] [i_18])) ? (arr_50 [i_3] [i_3] [i_19]) : (arr_50 [i_3] [i_19] [i_20 + 1])));
                            arr_102 [i_3] [i_8] [i_18] [i_3] [i_3] = ((/* implicit */unsigned short) ((var_1) ^ (22U)));
                            var_30 = ((/* implicit */int) arr_100 [i_3] [i_3] [i_18] [i_19] [i_20 + 3]);
                            arr_103 [i_3] [i_8] [i_18] = ((/* implicit */long long int) (unsigned short)24576);
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned short) arr_14 [i_3]);
                arr_104 [i_3] [i_3] [i_18 - 1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)172)) ? (4091425729U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25019))))))));
                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) 12U)) ? (arr_43 [i_18 + 1] [i_3] [i_18 - 1]) : (869323418)));
            }
            for (unsigned short i_21 = 4; i_21 < 15; i_21 += 1) 
            {
                arr_107 [i_3] [i_8] [i_8] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
                arr_108 [i_3] [i_8] [i_8] = ((/* implicit */int) arr_50 [i_3] [i_8] [i_21 - 3]);
            }
            arr_109 [i_3] [i_3] = ((/* implicit */unsigned int) -198278854160982676LL);
        }
        var_33 = ((/* implicit */int) max((max(((+(arr_6 [i_3] [i_3]))), (1996401337U))), ((+(arr_92 [i_3] [i_3] [i_3])))));
    }
    /* LoopNest 3 */
    for (unsigned char i_22 = 2; i_22 < 20; i_22 += 1) 
    {
        for (unsigned int i_23 = 2; i_23 < 19; i_23 += 4) 
        {
            for (long long int i_24 = 0; i_24 < 21; i_24 += 4) 
            {
                {
                    arr_118 [i_22 + 1] [i_23 + 1] [i_23] [i_23 + 1] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27605))))) + (((/* implicit */int) (unsigned short)25019))))));
                    /* LoopNest 2 */
                    for (long long int i_25 = 0; i_25 < 21; i_25 += 2) 
                    {
                        for (signed char i_26 = 2; i_26 < 19; i_26 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(((unsigned int) 22U))))), ((+(198278854160982708LL)))));
                                var_35 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_117 [i_23 - 2] [i_23 - 1])) && (((/* implicit */_Bool) arr_117 [i_23 - 1] [i_23])))))) + (((198278854160982700LL) >> (((-1503669043) + (1503669084)))))));
                            }
                        } 
                    } 
                    arr_124 [i_22] [i_23] [i_24] = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) arr_117 [i_22] [i_22 + 1])))));
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */int) var_2);
}
