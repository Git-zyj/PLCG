/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230372
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((unsigned char) (~((-2147483647 - 1)))));
                var_13 = ((/* implicit */long long int) var_8);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 3; i_2 < 13; i_2 += 1) 
    {
        arr_7 [(unsigned char)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((arr_6 [i_2 + 1] [(_Bool)1]), (((/* implicit */unsigned short) var_7)))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)0)), (var_5))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (arr_3 [i_2])))) ? (((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)19)))) : (((/* implicit */int) arr_6 [i_2 + 2] [i_2 - 2])))) : (((/* implicit */int) (unsigned short)39059))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2)));
        var_15 = ((/* implicit */long long int) var_8);
        var_16 -= arr_0 [i_2] [i_2];
    }
    for (short i_3 = 3; i_3 < 11; i_3 += 3) 
    {
        var_17 = ((/* implicit */long long int) var_8);
        var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 + 1] [i_3])))))), (min((((/* implicit */unsigned long long int) ((arr_3 [i_3]) == (((/* implicit */int) (unsigned char)112))))), ((+(5747303923508865649ULL)))))));
    }
    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)99)) ? (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_4))))) ? (min((var_0), (((/* implicit */long long int) var_5)))) : (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (16591053682044613826ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_6)))));
}
