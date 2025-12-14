/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51843
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) var_2);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) max(((((-(arr_1 [i_0] [i_0]))) ^ (arr_1 [i_0] [i_1]))), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0]))));
                var_12 = ((/* implicit */unsigned char) ((signed char) min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_0]))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0] [(short)0] [i_1]), (arr_3 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [7U] [7U]))) : (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */signed char) arr_8 [i_2] [i_2]);
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_9))));
    }
    for (int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            for (long long int i_5 = 2; i_5 < 21; i_5 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62758))) : ((-9223372036854775807LL - 1LL))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) (((((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 2]))))) ? (((((/* implicit */_Bool) arr_21 [i_5 - 1] [i_5] [i_5 + 2] [i_5 - 1] [i_5 - 1] [i_5 + 1])) ? (arr_18 [i_5 + 1] [i_5] [i_5 - 2] [i_5]) : (arr_18 [i_5 - 2] [i_5] [i_5 - 2] [i_5]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25840))) : (var_3)))));
                                arr_22 [i_3] [(signed char)4] [i_4] [i_6] [i_3] [i_3] [9LL] = ((/* implicit */signed char) ((9223372036854775800LL) >> (((min((((/* implicit */long long int) -544749754)), (((((/* implicit */_Bool) arr_16 [i_3] [i_6] [i_7] [(signed char)14])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)74))) : (9223372036854775806LL))))) + (544749766LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) min((var_16), (arr_18 [i_3] [i_3] [i_3] [14LL])));
        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_3] [i_3]))));
    }
    /* LoopNest 3 */
    for (short i_8 = 1; i_8 < 20; i_8 += 2) 
    {
        for (int i_9 = 1; i_9 < 19; i_9 += 2) 
        {
            for (signed char i_10 = 1; i_10 < 20; i_10 += 2) 
            {
                {
                    arr_33 [i_10] [i_8] [i_8] [i_8] = max((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_23 [i_8 + 1] [i_9])) ? (arr_14 [i_8 - 1] [i_10 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_8] [i_8])) ? (-414420897) : (arr_17 [i_8] [i_8 + 1] [i_9] [i_10 + 1])))))), (((/* implicit */long long int) arr_10 [i_8] [i_8])));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8 + 1] [i_8] [i_8] [i_8])) ? (arr_8 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) || (((/* implicit */_Bool) arr_7 [i_9]))))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_25 [i_8]))));
                    var_19 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)32746)), (-3295509934254681773LL)));
                    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_16 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 1]) >= (arr_16 [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 1]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) arr_24 [i_8 + 1] [i_8 + 1]);
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) arr_15 [i_11] [i_10])))))));
                        arr_36 [i_8] [i_8 - 1] [i_8 - 1] [14ULL] [i_8 - 1] [i_8] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) arr_32 [i_9 + 2] [i_8])) >= (((/* implicit */int) (short)-5))))), ((-(((/* implicit */int) max((((/* implicit */signed char) arr_12 [i_8] [(unsigned char)12] [12LL])), ((signed char)65))))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_10] [i_10] [i_10] [i_10 - 1] [i_10 + 1] [i_10 - 1])) ? (((((/* implicit */_Bool) arr_21 [i_10] [(unsigned char)12] [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1])) ? (((/* implicit */int) arr_21 [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1])) : (((/* implicit */int) arr_21 [0] [i_10] [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1])))) : (((/* implicit */int) arr_21 [i_10] [(signed char)19] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10]))));
                        arr_37 [i_9] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */unsigned long long int) 1140287691)) : (5280501238548158650ULL)));
                    }
                    for (short i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
                    {
                        arr_40 [i_8 - 1] [i_9 + 1] [i_10] [17ULL] [i_10] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)508)), ((unsigned short)62758)))) ? (arr_39 [i_8 + 1] [i_8 + 1] [i_8] [i_12]) : (((arr_26 [(unsigned char)16] [(unsigned char)16]) >> (((arr_30 [i_8] [i_8 - 1] [i_8] [i_8]) - (1139111378U)))))));
                        var_24 = ((/* implicit */short) min((var_24), (arr_32 [i_8 - 1] [i_8 - 1])));
                        arr_41 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)71))));
                    }
                    for (short i_13 = 0; i_13 < 21; i_13 += 2) /* same iter space */
                    {
                        var_25 ^= ((/* implicit */long long int) ((((arr_26 [i_9] [i_13]) >> (((1378538892) - (1378538831))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_25 [i_13]), (((/* implicit */signed char) arr_38 [i_8] [i_8] [i_8 - 1] [i_8 - 1]))))))));
                        arr_44 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(-544749754)))), (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((/* implicit */int) (_Bool)1))))) ? (arr_13 [i_8] [5]) : (((/* implicit */long long int) min((arr_16 [(short)13] [i_9] [i_9] [i_9]), (arr_16 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1]))))))));
                        /* LoopSeq 3 */
                        for (long long int i_14 = 2; i_14 < 20; i_14 += 4) /* same iter space */
                        {
                            arr_47 [i_14] [i_14] [i_8] [i_13] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((max(((+(4880066564205908180ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)25840))) - (arr_14 [i_8] [i_13])))))) * (min((4526964519006608460ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                            var_26 = ((/* implicit */unsigned long long int) max((3295509934254681773LL), (((/* implicit */long long int) (unsigned char)54))));
                            arr_48 [(signed char)18] [(signed char)5] [i_14 + 1] [i_8] [(signed char)18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_24 [i_8 + 1] [i_8 - 1]))) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) arr_7 [i_8]))));
                        }
                        for (long long int i_15 = 2; i_15 < 20; i_15 += 4) /* same iter space */
                        {
                            var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [(unsigned char)12] [i_9] [(unsigned char)12] [(unsigned char)12])) ? (((/* implicit */unsigned long long int) arr_8 [i_8 - 1] [i_8])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 983040)) ? (((/* implicit */int) arr_32 [i_9] [i_8 - 1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_13] [i_10 - 1] [i_9 - 1] [i_8])))))) : (((arr_20 [i_13] [i_13] [i_13] [i_13] [i_13]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_15] [(short)16] [i_10 - 1] [(short)16])))))))));
                            arr_51 [i_8] [i_8] [i_8 - 1] [(unsigned short)15] [i_8] = ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (arr_46 [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8 - 1])))) % (arr_11 [i_9 + 1]));
                        }
                        for (long long int i_16 = 2; i_16 < 20; i_16 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((signed char) 3295509934254681773LL))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_8] [11] [i_10] [11] [16ULL] [i_8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)58250), (((/* implicit */unsigned short) (short)-30857)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0)))))));
                            arr_54 [i_8 + 1] [i_8 - 1] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)129)) ? (3295509934254681793LL) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8])))))) ? (((/* implicit */int) max((arr_25 [i_8]), (arr_25 [i_8])))) : (((/* implicit */int) min((arr_25 [i_8]), (arr_25 [i_8]))))));
                        }
                    }
                }
            } 
        } 
    } 
}
