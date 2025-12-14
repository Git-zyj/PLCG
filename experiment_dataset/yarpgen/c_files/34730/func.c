/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34730
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
    var_15 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)112)) ? (5824431132667844088ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112)))));
                var_17 = ((/* implicit */short) (~((+(((/* implicit */int) (signed char)35))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-21)) * (((/* implicit */int) (signed char)35))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_1 + 2] [i_1 + 2]), (arr_4 [i_1 + 1] [i_1 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1]))) | (2453888938867025733ULL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1 - 2]))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (arr_2 [i_0])))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -2833912066384782831LL))))) >= (((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (short)32767)) - (32737)))))))) | (((/* implicit */int) arr_1 [(short)5]))));
                var_20 = ((/* implicit */unsigned long long int) (unsigned char)83);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_12);
}
