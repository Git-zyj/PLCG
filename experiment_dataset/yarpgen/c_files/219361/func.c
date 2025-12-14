/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219361
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
    var_11 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */_Bool) 12244375734469550564ULL)) && (((/* implicit */_Bool) var_4))))) == (((/* implicit */int) var_3)))) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)97))) : (2167675460U))) << (((((((/* implicit */_Bool) var_1)) ? (2127291848U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96))))) - (2127291830U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_1 - 2])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-96))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 3])) ? (arr_4 [i_0]) : (arr_2 [i_1])))) ? (((/* implicit */unsigned long long int) (~(var_2)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [i_1]) : (var_10)))))));
                arr_6 [i_0] [i_1] = (+((-(min((arr_4 [i_0]), (((/* implicit */unsigned long long int) var_8)))))));
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) arr_1 [i_1]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_13 = ((/* implicit */signed char) var_5);
        arr_11 [i_2] = ((/* implicit */unsigned char) arr_8 [i_2]);
        var_14 = ((/* implicit */unsigned char) ((var_5) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_2]))));
        var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
        var_16 *= ((/* implicit */unsigned short) var_6);
    }
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned long long int) (unsigned char)15);
        arr_15 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)81)), (arr_10 [i_3]))))) : (arr_2 [i_3])));
        var_17 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_3]))) & (arr_4 [i_3]))), (((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)127))))));
    }
    /* LoopSeq 1 */
    for (int i_4 = 4; i_4 < 17; i_4 += 1) 
    {
        var_18 = min((15456861688020955076ULL), (((/* implicit */unsigned long long int) (unsigned char)2)));
        arr_18 [i_4] = ((/* implicit */int) arr_9 [i_4 + 1]);
    }
}
