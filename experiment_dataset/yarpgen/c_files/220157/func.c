/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220157
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned char)116))))) <= (min((260625001U), (((/* implicit */unsigned int) var_0)))))))) * (((var_1) / (((/* implicit */long long int) 4034342294U)))))))));
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_1 [i_0]))))) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) == (var_5)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((max((min((452163954103175002LL), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [3U]))) % (4034342294U)))))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) != (260625001U)))))));
    }
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) min((482080830), (((/* implicit */int) (unsigned short)65531))))) || (((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (var_6)))))) & (((/* implicit */int) ((max((36785879076106251LL), (((/* implicit */long long int) var_7)))) >= (max((var_2), (((/* implicit */long long int) 1087728594U)))))))));
}
