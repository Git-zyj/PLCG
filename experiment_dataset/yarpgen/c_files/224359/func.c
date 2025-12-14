/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224359
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_1 - 1])), (var_9)))) : (arr_5 [i_0] [i_0 - 1] [i_0 - 1])))) || (((/* implicit */_Bool) var_4))));
                        var_11 *= ((/* implicit */long long int) min(((~(((/* implicit */int) arr_8 [i_0] [8LL] [i_0] [i_1 + 1])))), (((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_2] [i_3])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_1 - 2] [i_2] [i_3]))))));
                    }
                    for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 2) 
                    {
                        var_12 ^= ((/* implicit */unsigned char) min((var_4), (var_5)));
                        arr_13 [i_0] [i_1] [i_0] = max((((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18435)) ? (((/* implicit */long long int) 1559424619)) : (var_9)))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)20007)) + (((/* implicit */int) arr_0 [i_1])))))))), (var_0));
                    }
                    for (int i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        var_13 = ((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                        arr_17 [i_1] [i_1] [i_0] [i_1 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_5 + 1])) ? (min((((/* implicit */int) max((arr_10 [6ULL] [i_1] [i_2] [i_0]), (arr_2 [i_1 + 1])))), (((((/* implicit */_Bool) arr_16 [i_5 - 1] [i_2] [i_1] [i_1] [i_0] [i_0 - 1])) ? (arr_12 [i_0] [8] [i_0]) : (((/* implicit */int) (unsigned short)33869)))))) : (((/* implicit */int) arr_6 [i_5 - 1]))));
                    }
                    var_15 = ((/* implicit */short) (-(((((/* implicit */int) min((arr_9 [(short)7] [i_0] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */signed char) (_Bool)0))))) ^ (((((/* implicit */_Bool) arr_15 [8])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_15 [i_0 - 1]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) arr_1 [(signed char)18]);
        arr_20 [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((9724607698769454290ULL) << (((arr_12 [8ULL] [16] [(short)0]) + (1507532762))))))));
    }
    var_17 = ((/* implicit */int) (-((+(var_4)))));
    /* LoopNest 3 */
    for (unsigned char i_7 = 1; i_7 < 20; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned short i_9 = 1; i_9 < 18; i_9 += 1) 
            {
                {
                    arr_30 [i_9] [i_9] [i_7 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) 161973299U))));
                    arr_31 [i_9] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(var_2)))), ((+(arr_5 [i_9] [i_8] [i_7 + 1])))));
                }
            } 
        } 
    } 
}
