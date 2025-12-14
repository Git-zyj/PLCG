/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239501
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
    var_11 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8128LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((+(((/* implicit */int) var_4)))))), (((/* implicit */int) var_2))));
    var_12 = ((/* implicit */_Bool) min(((short)6766), (((/* implicit */short) (unsigned char)158))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)230)))))) : (var_0)))));
                var_13 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (_Bool)1))))), (var_8)))));
        var_14 *= max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), ((+(arr_3 [(unsigned char)0]))));
        arr_9 [i_2] = ((/* implicit */signed char) var_4);
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)246)))))));
    }
    for (long long int i_3 = 2; i_3 < 19; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> ((((-(((/* implicit */int) (signed char)-110)))) - (106)))));
        var_16 = ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 - 2] [i_3 + 1]))) | ((-(arr_3 [i_3]))));
        var_17 *= ((/* implicit */unsigned short) (~(arr_4 [i_3 - 1])));
    }
    for (int i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) (~(18446744073709551607ULL)));
                    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))) : (arr_4 [i_4 - 1])));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        arr_25 [i_4] [i_4] [i_6] [i_4] = (+(((((/* implicit */_Bool) arr_23 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 1])) ? (arr_23 [i_4 + 2] [i_4 + 1] [i_4] [i_4 + 1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4 + 2] [i_4 + 2] [i_4 - 1]))))));
                        var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) || (arr_10 [i_5])))), (var_3))))));
                    }
                    arr_26 [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) (-(arr_22 [i_4 + 1] [i_4] [i_4] [i_4])));
                }
            } 
        } 
        var_21 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4])) ? (var_5) : (((arr_24 [i_4] [i_4] [i_4] [i_4] [i_4]) ? (var_6) : (var_6)))))) ? ((~(((((/* implicit */int) arr_1 [i_4] [i_4])) >> (((arr_15 [i_4] [i_4]) + (1083008042))))))) : (((/* implicit */int) arr_14 [i_4]))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_4 + 1] [i_4 + 1]))))) ? ((~(max((((/* implicit */int) var_9)), (arr_15 [i_4] [i_4]))))) : (((/* implicit */int) var_4))));
    }
    var_23 = ((/* implicit */unsigned char) var_7);
}
