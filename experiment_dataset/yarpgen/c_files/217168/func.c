/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217168
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(short)11] [(short)11] = ((/* implicit */unsigned char) max((((arr_1 [i_1 - 1]) ? (arr_2 [i_1] [i_0] [1ULL]) : (((((/* implicit */_Bool) -2092642765484540611LL)) ? (arr_2 [i_1 - 1] [(_Bool)1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) arr_0 [i_0]))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (-(arr_9 [i_1 + 1] [i_1 - 1] [i_0] [i_1 + 1]))))));
                            arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_1 [5U]) ? (arr_9 [12U] [i_1] [i_2] [20]) : (((/* implicit */int) arr_8 [i_0] [i_2]))))), (((arr_1 [i_3 - 1]) ? (arr_7 [i_0] [i_0] [i_2 - 1] [i_3 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) : (((((/* implicit */_Bool) arr_3 [i_1 + 1] [(unsigned char)12])) ? (((/* implicit */long long int) arr_9 [i_1 - 1] [i_1 - 1] [i_2] [i_3 - 2])) : (arr_2 [i_1 - 1] [i_3] [(signed char)18])))));
                            var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)191)) & (((/* implicit */int) (unsigned char)0))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    arr_13 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)45845), (((/* implicit */unsigned short) arr_3 [i_0] [(unsigned short)7]))))) ? (((unsigned long long int) 2600429566426201955ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_1 + 1])), (arr_0 [i_1 - 1])))))));
                    arr_14 [i_0] [i_0] [i_4] [(short)11] = ((/* implicit */short) (-((~(((/* implicit */int) arr_1 [i_4]))))));
                }
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((var_3), (((/* implicit */unsigned short) ((_Bool) (_Bool)0))))))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 1) 
    {
        for (int i_6 = 2; i_6 < 12; i_6 += 4) 
        {
            {
                arr_20 [i_5] [(unsigned char)4] [(unsigned short)5] = ((/* implicit */unsigned char) (+((+(max((-2092642765484540611LL), (((/* implicit */long long int) (unsigned short)42357))))))));
                /* LoopSeq 2 */
                for (unsigned int i_7 = 3; i_7 < 10; i_7 += 1) 
                {
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((((/* implicit */unsigned long long int) arr_21 [i_5] [i_5 + 2] [i_5 + 2] [i_7])), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)45835)), (0U)))) ? (((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7] [i_6]))) : (1490940800727599721ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                    arr_23 [i_5] [i_5] [(signed char)13] = ((/* implicit */signed char) arr_8 [i_5] [i_6]);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 1; i_8 < 12; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            {
                                arr_29 [i_5 + 2] [3ULL] = (+((-(min((4294967295U), (((/* implicit */unsigned int) -517188037)))))));
                                var_15 = ((/* implicit */int) (unsigned char)255);
                                var_16 = ((/* implicit */long long int) arr_18 [i_9] [9U]);
                                var_17 |= ((/* implicit */unsigned char) arr_21 [i_6 + 2] [i_6 - 1] [i_6 + 2] [i_6]);
                            }
                        } 
                    } 
                }
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned int) max((arr_31 [i_5] [i_6] [i_10]), (((/* implicit */unsigned int) max((arr_30 [i_5 - 1]), (((/* implicit */int) (short)15338)))))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 2; i_11 < 11; i_11 += 1) 
                    {
                        var_19 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(_Bool)1]))) - (min(((~(16955803272981951894ULL))), (((/* implicit */unsigned long long int) ((signed char) arr_3 [(unsigned char)19] [i_6])))))));
                        arr_35 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) (unsigned short)3855);
                        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((unsigned long long int) arr_25 [i_5] [i_5] [i_5])), (((/* implicit */unsigned long long int) arr_18 [i_5 + 2] [(unsigned char)3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5]))) & (arr_24 [i_5] [i_6] [10U] [i_11 - 1]))) >= (((/* implicit */unsigned int) max((arr_34 [12LL] [i_6] [i_6] [4U]), (((/* implicit */int) arr_4 [i_11 - 2]))))))))) : (max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [(unsigned short)4])), (arr_24 [0ULL] [i_6] [i_6 - 2] [i_6 + 2])))), (min((arr_15 [i_10]), (((/* implicit */long long int) (unsigned char)21))))))));
                        arr_36 [i_6 - 1] [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1706975623U)) ? (3492570265U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) arr_12 [i_11] [i_10])))))))))));
                    }
                    for (short i_12 = 2; i_12 < 12; i_12 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (unsigned char)175)), (min((((/* implicit */unsigned long long int) 354188580U)), (27ULL))))) < (((/* implicit */unsigned long long int) arr_2 [i_5 - 1] [i_6] [i_5 + 1]))));
                        var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(4294967295U)))) ? (max((16955803272981951894ULL), (((/* implicit */unsigned long long int) (signed char)15)))) : (((/* implicit */unsigned long long int) ((arr_1 [i_12 + 1]) ? (((/* implicit */int) arr_1 [i_12 + 2])) : (((/* implicit */int) arr_1 [i_12 + 1])))))));
                    }
                }
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_27 [i_5 - 1] [i_5 - 1] [i_5] [i_6 + 1] [(unsigned short)12])))) == (min((((/* implicit */unsigned long long int) arr_11 [i_5])), (arr_7 [i_6 + 2] [i_6 - 2] [i_5 - 2] [i_6 - 1]))))))));
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_22 [11ULL] [i_6 - 2]))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (unsigned char)21)))))) ? (((/* implicit */int) ((_Bool) min(((unsigned char)208), ((unsigned char)95))))) : (((/* implicit */int) var_9))));
}
