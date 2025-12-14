/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239933
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((max((((/* implicit */int) (short)-8536)), (((((/* implicit */int) var_6)) ^ (((/* implicit */int) (short)-31619)))))), (var_11))))));
    var_15 = ((/* implicit */short) var_8);
    var_16 = ((/* implicit */short) ((((((/* implicit */int) var_0)) <= (((/* implicit */int) (unsigned char)161)))) && (((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_2) & (((/* implicit */int) var_7)))), (((((/* implicit */int) var_5)) << (((arr_1 [(short)8]) - (8244792350815549822LL)))))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) 8907124069832879739LL)) ? (((/* implicit */int) arr_2 [(unsigned short)8])) : (((/* implicit */int) (unsigned char)246)))))) : (((/* implicit */int) min((arr_0 [(_Bool)1] [i_1 + 3]), (arr_0 [18] [i_1 + 3]))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) (((((~(arr_1 [i_0]))) ^ (((/* implicit */long long int) arr_4 [i_0] [i_0])))) & (((/* implicit */long long int) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_3)))))));
                var_18 ^= ((/* implicit */unsigned char) (((+(((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_5)))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [14] [i_1]))) : (arr_1 [(unsigned char)18])))) ? (((((/* implicit */int) var_7)) - (((/* implicit */int) arr_3 [i_0] [i_0] [10])))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned char)255)))))) - (183)))));
                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-945111715)))) ? (((((/* implicit */_Bool) arr_4 [i_1 - 2] [(unsigned short)12])) ? (arr_4 [i_1 - 2] [(unsigned short)16]) : (arr_4 [i_1 - 2] [(unsigned short)18]))) : ((+(arr_4 [i_1 - 2] [(_Bool)1])))));
            }
        } 
    } 
}
