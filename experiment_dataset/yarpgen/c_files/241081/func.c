/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241081
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */int) min((max((((var_6) ? (var_3) : (arr_3 [12U]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_11)), (arr_1 [12U])))))), ((+(((((/* implicit */_Bool) arr_2 [i_0] [1ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_3 [(signed char)1])))))));
                arr_5 [i_0] = ((/* implicit */short) arr_0 [i_0]);
                var_14 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((var_5), (((/* implicit */short) var_7))))) ? (((arr_3 [i_0]) << (((((/* implicit */int) arr_1 [i_0])) - (21881))))) : (((/* implicit */unsigned long long int) min((arr_2 [1ULL] [(unsigned char)6]), (((/* implicit */int) var_10)))))))));
                var_15 = min((min((((/* implicit */unsigned int) var_7)), (var_12))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0]))))));
            }
        } 
    } 
    var_16 = ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (((((/* implicit */_Bool) var_10)) ? (var_1) : (var_1))))) ? (max((var_8), (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))));
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) == (min((((/* implicit */unsigned int) var_5)), (var_1)))))), (max(((-(((/* implicit */int) var_7)))), (((((/* implicit */int) var_5)) / (((/* implicit */int) var_6))))))));
    var_18 += ((/* implicit */signed char) max((((/* implicit */unsigned int) max((((/* implicit */int) var_7)), (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_6))))))), (var_1)));
}
