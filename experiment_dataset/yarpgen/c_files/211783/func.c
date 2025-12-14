/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211783
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((2147450880U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))), (((((/* implicit */_Bool) (short)-25790)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0]))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_6)))), (min((8500893868793045048LL), (((/* implicit */long long int) var_0)))))) : (((/* implicit */long long int) ((unsigned int) ((unsigned int) 9223372036854775807LL)))))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_5 [i_0] [10LL] [i_0] &= ((/* implicit */unsigned int) max(((((+(((/* implicit */int) arr_0 [i_1])))) | (((/* implicit */int) (short)-25790)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (short)32587)) : (((/* implicit */int) var_1))))))));
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max((min((arr_4 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_1] [i_0]))))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 4; i_3 < 10; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_15 [i_3] [i_4] [i_3] [i_2] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_3] [i_0] [i_4] [i_4])) || (((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_4] [i_5])))) && (((((/* implicit */_Bool) arr_10 [i_5] [i_2] [(unsigned short)1] [i_4])) && (((/* implicit */_Bool) 2166004893444571165LL))))));
                            var_15 = ((((/* implicit */_Bool) arr_13 [i_3] [i_2] [8LL] [8LL] [i_5] [i_4] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (((unsigned int) var_0)));
                        }
                        for (short i_6 = 4; i_6 < 11; i_6 += 1) 
                        {
                            arr_18 [i_0] [(unsigned short)5] [i_3] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_0] [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_2] [i_3] [i_4] [i_4] [i_4] [i_6])) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (((/* implicit */int) arr_3 [i_2] [i_4])))))));
                            arr_19 [i_0] [i_0] [i_3 - 2] [i_4] [i_3] = 336057755U;
                        }
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            arr_22 [i_7] [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_3] [i_7] [i_0])) + (((/* implicit */int) arr_20 [i_7] [i_7] [i_7] [i_3] [i_7] [i_7]))));
                            var_16 |= ((arr_4 [i_0] [i_2] [i_3 - 4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 + 2] [i_0]))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32587)) ? (0LL) : (((((/* implicit */_Bool) (unsigned short)32973)) ? (arr_14 [i_0] [i_2] [(unsigned short)7] [i_4] [9LL] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32590)))))));
                            arr_26 [i_0] [i_2] [i_3] [i_4] [i_8] [i_3] [i_4] = arr_1 [i_3 + 1];
                        }
                        var_18 += ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (short)22873)) ? (arr_11 [i_0] [i_3] [i_3 - 1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))))));
                        arr_27 [i_3] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) ((short) (short)-29643));
                    }
                } 
            } 
            var_19 = ((/* implicit */short) (-((+(((/* implicit */int) (short)-13965))))));
        }
        var_20 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17466)) ? (((/* implicit */int) (short)14764)) : (((/* implicit */int) (unsigned short)65525))))))));
    }
    var_21 = ((/* implicit */unsigned short) 0LL);
    var_22 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) (-(70368744112128LL)))))));
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        for (unsigned short i_10 = 2; i_10 < 19; i_10 += 1) 
        {
            for (long long int i_11 = 1; i_11 < 19; i_11 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) max((max((288230367561777152LL), (((/* implicit */long long int) 4091142329U)))), (((long long int) var_12))));
                    var_24 -= min((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)6664)) ? (-70368744112116LL) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [14U]))))))), (((((/* implicit */_Bool) arr_34 [12LL])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 12LL)) ? (((/* implicit */int) (unsigned short)58881)) : (((/* implicit */int) (unsigned short)11244))))) : (max((((/* implicit */long long int) arr_28 [i_10] [6U])), (-1LL))))));
                    arr_36 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) ((max((((/* implicit */unsigned int) var_2)), (((unsigned int) var_12)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_35 [i_9] [i_9] [i_9])) ? (2345870702U) : (4294967295U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775806LL)) && (((/* implicit */_Bool) -1LL))))))))))));
                    var_25 *= ((min((((((/* implicit */_Bool) arr_31 [(unsigned short)10] [i_10])) ? (arr_35 [i_9] [i_9] [i_11 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_9] [(unsigned short)14]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11264))) >= (83460815U)))))) + (var_12));
                }
            } 
        } 
    } 
}
