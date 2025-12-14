/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2609
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_11 = min((((((/* implicit */long long int) var_2)) | (arr_1 [(_Bool)1]))), (((/* implicit */long long int) arr_0 [i_0] [i_0 - 1])));
        arr_2 [i_0] = ((((/* implicit */_Bool) 2046161994)) ? (0U) : (((/* implicit */unsigned int) -2046162003)));
    }
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_12 |= ((/* implicit */int) ((3840959674769252017LL) >> (((((((/* implicit */_Bool) ((-2860095567227722186LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)873)))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_1 [i_1]) : (((/* implicit */long long int) 2046161994)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */int) var_3))))))) - (3283060922408263603LL)))));
        arr_6 [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned long long int) arr_0 [i_1 + 1] [i_1 + 1])) * (((/* implicit */unsigned long long int) 2046161994))))) ? (((/* implicit */long long int) (+(-413504750)))) : (((long long int) ((((/* implicit */_Bool) 7721437773428002042LL)) ? (var_5) : (var_5))))));
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1 - 2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [9U])) ? (((/* implicit */int) (unsigned short)40785)) : (arr_0 [(short)3] [i_1 + 2])))) ? (max((2860095567227722185LL), (((/* implicit */long long int) (unsigned short)856)))) : (((((/* implicit */_Bool) 2662158957020616442LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41350))) : (-6269519362641550037LL))))) : (((/* implicit */long long int) ((int) ((short) (unsigned short)64680)))))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 4294836224U)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */long long int) 3197393859U))))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0)))), (arr_1 [i_1])))));
    }
    var_15 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) ((var_4) + (((/* implicit */int) var_3))))))) <= (((/* implicit */unsigned int) var_7))));
}
