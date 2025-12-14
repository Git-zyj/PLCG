/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239204
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
    var_11 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)50740))));
    var_12 = min((((((/* implicit */_Bool) (unsigned short)61997)) ? (((((/* implicit */_Bool) 5082829255409582215ULL)) ? (13363914818299969401ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31815))))) : (((13363914818299969391ULL) / (5082829255409582239ULL))))), (((/* implicit */unsigned long long int) (+(min((var_7), (((/* implicit */int) var_8))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */short) (((+(((/* implicit */int) arr_3 [i_0 - 1])))) > (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [(short)3])), (arr_0 [i_0]))))));
                    arr_8 [i_0] [(_Bool)1] [(_Bool)1] |= ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_5), (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33720))))) : (min((13363914818299969386ULL), (((/* implicit */unsigned long long int) var_5)))))) | (min((((((/* implicit */_Bool) -871739035333832877LL)) ? (var_4) : (5082829255409582223ULL))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_0)) : (var_10)))))));
}
