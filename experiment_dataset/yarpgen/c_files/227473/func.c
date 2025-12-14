/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227473
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
    var_12 = ((/* implicit */unsigned int) (((((+(var_9))) - (var_9))) * (((/* implicit */unsigned long long int) var_1))));
    var_13 = ((/* implicit */int) ((short) min(((-(var_9))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((((/* implicit */int) (short)5387)) - (5358)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_0] = ((/* implicit */int) (!(((((/* implicit */int) min(((signed char)-66), ((signed char)0)))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_0]))) <= (arr_5 [i_0] [(short)6] [i_2 + 2]))))))));
                    var_14 = ((/* implicit */short) 2673397612U);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2 - 2] [i_0] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 1])))) ? (((arr_7 [i_0] [i_0] [i_2] [i_3]) >> (((arr_13 [i_4] [(unsigned short)3]) - (1326508775U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_3])) && (((/* implicit */_Bool) var_8)))))))) == (8610097402508166820ULL)));
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((short) (~(((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_0 + 1])) == (((/* implicit */int) arr_2 [i_2])))))))))));
                                var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) < (((/* implicit */int) min(((signed char)0), ((signed char)13))))))), (min((((/* implicit */unsigned long long int) max((-962660589854670174LL), (((/* implicit */long long int) (unsigned short)25268))))), ((-(arr_12 [i_0])))))));
                                arr_16 [i_4] [i_0] [i_2] [i_0] [i_0 + 1] = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (_Bool)1))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) arr_2 [i_5])))) + (2147483647))) << (((((min((-962660589854670160LL), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_4 [i_6] [i_5] [i_0])), (var_11)))))) + (962660589854670168LL))) - (8LL))))))));
                    var_19 = ((/* implicit */unsigned char) ((((6394084386774509730ULL) - (((/* implicit */unsigned long long int) arr_18 [i_0 - 1])))) << (((((/* implicit */int) min((arr_3 [i_0 - 1] [i_5]), (arr_3 [i_0 - 1] [i_5])))) - (8115)))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_14 [(unsigned short)4] [i_0] [i_0] [6ULL] [i_0 - 1] [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_7 = 4; i_7 < 17; i_7 += 4) 
        {
            arr_23 [i_7] |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)108)) - (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1])))) <= (((/* implicit */int) min((arr_6 [i_0 + 1] [i_0 + 1]), (arr_6 [i_0 - 1] [i_0 - 1]))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (min((((/* implicit */unsigned long long int) min((arr_21 [i_0]), (((/* implicit */long long int) 2U))))), ((-(arr_5 [i_0] [i_0] [1ULL])))))));
            /* LoopSeq 1 */
            for (long long int i_8 = 1; i_8 < 15; i_8 += 3) 
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) -962660589854670174LL))))) << ((((~(((/* implicit */int) arr_20 [i_7 - 4] [i_7 - 4] [i_7 + 1] [i_7])))) + (28))))))));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        {
                            arr_32 [i_0] [i_0] = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) arr_21 [(signed char)4])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0 + 1] [i_0] [i_0] [i_0]))))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((arr_29 [i_0 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                            var_23 *= ((/* implicit */unsigned long long int) arr_0 [i_8 - 1] [i_7]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    for (signed char i_12 = 2; i_12 < 17; i_12 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) arr_29 [i_12])) ? (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_7]))) * (arr_29 [i_8 - 1]))), (((/* implicit */unsigned int) max((arr_11 [i_7] [i_7] [i_8 + 1]), (((/* implicit */short) arr_17 [i_7])))))))) : (max((min((arr_12 [i_12]), (((/* implicit */unsigned long long int) -962660589854670174LL)))), (((/* implicit */unsigned long long int) arr_8 [i_12]))))))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0]))) : (arr_7 [i_7 - 4] [i_7] [i_11] [i_12 - 2]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_12 + 1] [i_11] [i_12] [i_12] [i_0] [i_0])) & (((/* implicit */int) var_0)))))))) ? ((((-(15379243722532665255ULL))) << ((((-(((/* implicit */int) (unsigned short)26113)))) + (26156))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 856633555U))))))))))));
                            arr_38 [i_0] [i_0] [i_8] [i_11] [(signed char)2] [i_8] = ((((/* implicit */unsigned int) ((/* implicit */int) (((~(arr_5 [i_11] [i_7] [i_8]))) == (max((var_9), (((/* implicit */unsigned long long int) (_Bool)1)))))))) - (((((/* implicit */_Bool) min((((/* implicit */short) arr_6 [i_8 + 1] [6U])), (arr_22 [i_8] [i_7 - 4])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_0 + 1] [i_7] [i_8] [i_11] [i_12 - 2])) % (((/* implicit */int) (signed char)-18))))) : (arr_13 [(signed char)17] [i_0]))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_0]))));
            }
            /* LoopSeq 3 */
            for (short i_13 = 2; i_13 < 16; i_13 += 2) 
            {
                arr_42 [i_0] [i_7 - 4] = ((/* implicit */unsigned char) arr_10 [i_7 - 4] [i_7 - 1] [i_7 - 2] [i_0 + 1]);
                arr_43 [i_0 - 1] [i_7] &= ((/* implicit */unsigned char) (+(min((18446744073709551602ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))));
            }
            for (unsigned char i_14 = 0; i_14 < 18; i_14 += 4) 
            {
                arr_46 [i_7] |= ((/* implicit */unsigned int) (signed char)1);
                var_27 = (~(((/* implicit */int) var_7)));
                var_28 = ((/* implicit */unsigned int) ((((min((12052659686935041869ULL), (((/* implicit */unsigned long long int) 1177645382U)))) != (var_9))) ? (max((arr_25 [i_0] [i_7 + 1] [i_7 - 4]), (((/* implicit */unsigned long long int) arr_22 [i_7] [i_7])))) : (((/* implicit */unsigned long long int) (~(max((arr_34 [i_0 - 1] [i_7] [i_7] [i_14]), (((/* implicit */unsigned int) (_Bool)0)))))))));
            }
            for (unsigned char i_15 = 0; i_15 < 18; i_15 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_16 = 0; i_16 < 18; i_16 += 4) 
                {
                    arr_52 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned long long int) ((arr_8 [i_0]) + (((/* implicit */int) (signed char)18))))) == (max((17809319325773930833ULL), (((/* implicit */unsigned long long int) (signed char)11)))))));
                    var_29 = ((/* implicit */unsigned long long int) ((short) arr_45 [i_0] [i_15] [i_16]));
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_0 + 1] [i_7] [i_7] [(short)16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_0] [i_7] [(signed char)1] [(unsigned char)2] [i_16]))) : (arr_18 [i_15])))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_15] [i_0 - 1])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (arr_25 [i_0] [i_15] [i_0])))) ? (max((9257476523315512399ULL), (((/* implicit */unsigned long long int) arr_8 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -4194304)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0 + 1] [i_7 - 3] [i_15] [i_0] [i_7] [i_0 - 1])))));
                }
                var_31 |= (+(arr_5 [i_0] [i_7 - 4] [i_0]));
            }
        }
        for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 4) 
        {
            var_32 *= ((/* implicit */unsigned int) var_4);
            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */unsigned long long int) arr_39 [i_0] [i_0] [i_17] [i_17])) : ((~(max((2745915209706581388ULL), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_17] [i_17]))))))));
            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) arr_36 [i_0 - 1] [i_17] [i_0] [i_0 + 1] [i_17]))));
            var_35 -= 12052659686935041885ULL;
            var_36 = ((/* implicit */short) var_6);
        }
    }
}
