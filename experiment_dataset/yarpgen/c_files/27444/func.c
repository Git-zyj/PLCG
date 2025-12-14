/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27444
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
    var_16 = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) 260046848U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)56)) < (2147483647)))))), (((/* implicit */int) var_12))));
    var_17 = ((/* implicit */short) var_1);
    var_18 = ((/* implicit */unsigned int) -2147483647);
    var_19 = ((/* implicit */long long int) var_8);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        var_20 ^= ((/* implicit */unsigned long long int) (signed char)16);
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) - (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (max((arr_0 [i_0]), (((/* implicit */long long int) (unsigned char)42)))) : (((/* implicit */long long int) 2147483647)))))))));
        var_22 = ((/* implicit */unsigned long long int) var_15);
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_6))))) ? (((((/* implicit */_Bool) (short)7)) ? (arr_0 [i_0 + 3]) : (arr_0 [i_0 + 2]))) : (((arr_0 [i_0 + 2]) ^ (arr_0 [i_0 + 3])))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_5 [i_1] = min((min((((/* implicit */unsigned short) (unsigned char)0)), (var_2))), (((/* implicit */unsigned short) (signed char)-109)));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 0U))) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) arr_3 [i_1])) : (max((((/* implicit */int) max((arr_3 [(signed char)5]), (((/* implicit */short) var_4))))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))))));
    }
}
