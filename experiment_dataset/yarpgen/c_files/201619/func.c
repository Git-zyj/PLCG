/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201619
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_0])))), (((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) var_4))))));
        arr_2 [16ULL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : ((~(-1916431894))))) ^ (((((/* implicit */_Bool) arr_1 [i_0] [21ULL])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((var_16) != (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))));
    }
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_7)))) ? (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) var_6))))) : (min((var_13), (((/* implicit */unsigned long long int) var_9))))))) ? (((((var_15) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned int) var_15)), (var_11)))))))))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (min((max((((/* implicit */unsigned long long int) var_10)), (var_13))), (((/* implicit */unsigned long long int) min((var_15), (var_6)))))))))));
    /* LoopNest 2 */
    for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            {
                arr_7 [i_1] [5LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) min((arr_6 [i_1] [i_2] [i_1]), (((/* implicit */long long int) var_1)))))) ? ((+(((/* implicit */int) ((unsigned char) var_16))))) : (((arr_0 [i_1 + 1] [i_1 - 2]) + (((/* implicit */int) var_12))))));
                var_21 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (arr_6 [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (arr_4 [i_1 - 2])))) : (max((var_0), (((/* implicit */unsigned long long int) var_16)))))));
            }
        } 
    } 
}
