/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231838
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_12))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_1] [i_2 + 4])) ? (((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 1] [i_2 + 1])) : (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3 - 3] [i_1] [i_2 + 1])) || (((/* implicit */_Bool) arr_12 [i_3 - 3] [i_1] [i_2 + 2])))))) : (min((arr_12 [i_3 - 1] [i_1] [i_2 + 1]), (((/* implicit */unsigned int) var_7)))))))));
                                var_22 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1674674756)) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 - 3] [i_2 + 4] [i_4 - 1])))))));
                                arr_13 [i_0] [i_4 - 1] [i_0] [i_1] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 432939999U)) ? (14634931535357764158ULL) : (3811812538351787437ULL)));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) & (min((var_12), (((/* implicit */unsigned long long int) var_6))))))));
                var_23 = min((((unsigned long long int) arr_6 [i_0] [i_0])), (max((arr_7 [i_0] [i_1]), (arr_7 [(unsigned short)0] [i_1]))));
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_24 += ((/* implicit */short) ((2059203195U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */int) var_19)), (var_11))), (((/* implicit */int) arr_5 [i_7] [i_1] [i_5]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_5] [i_6]))) || ((!(((/* implicit */_Bool) 432939999U))))))) : (((/* implicit */int) var_17))));
                                arr_23 [i_0] [i_1] [i_0] [i_6] [i_1] &= ((/* implicit */unsigned char) (~((~(min((((/* implicit */unsigned long long int) arr_3 [i_5] [i_6])), (11943028253804579578ULL)))))));
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */int) var_9)), ((~(((/* implicit */int) var_13))))))), (((((var_15) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) >= (7853652421563138223ULL))))) : (arr_1 [i_0] [i_1]))))))));
                            }
                        } 
                    } 
                    var_27 = 7670291270267462654ULL;
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (14634931535357764149ULL))), (((/* implicit */unsigned long long int) min((((int) 15ULL)), (((/* implicit */int) var_13))))))))));
                    /* LoopSeq 2 */
                    for (short i_9 = 1; i_9 < 8; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3911906436U))))), (arr_25 [i_9] [i_9 + 1] [i_8] [i_9 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            arr_34 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_15 [3] [i_9 - 1] [i_1] [i_10])) : (((/* implicit */int) arr_15 [i_0] [i_9 + 1] [i_8] [i_8]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) : (((long long int) var_9))));
                            arr_35 [i_0] [(short)0] [(_Bool)1] [i_0] [i_0] [i_8] [i_0] = var_17;
                            var_30 = ((/* implicit */unsigned short) ((unsigned long long int) (-(2147483647))));
                            var_31 = ((/* implicit */_Bool) var_9);
                            arr_36 [i_8] [i_8] = ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) -63927448)) ? (3862027297U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (min((min((936750152U), (((/* implicit */unsigned int) 8160)))), (min((2059203195U), (((/* implicit */unsigned int) var_11))))))));
                        }
                    }
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (~(((/* implicit */int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_8])))))))))));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_12] [i_12] [i_12])) ? (arr_18 [i_12] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (3862027308U) : (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_2 [i_0])))), ((!(((/* implicit */_Bool) var_14))))))))));
                        }
                        arr_41 [i_8] [i_0] [i_0] [i_0] [11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_12)));
                        var_34 = ((/* implicit */int) var_3);
                    }
                    var_35 += ((((/* implicit */_Bool) ((0) - (1873995686)))) ? (((/* implicit */int) ((unsigned char) 1875482676))) : ((+(((int) var_4)))));
                }
            }
        } 
    } 
}
