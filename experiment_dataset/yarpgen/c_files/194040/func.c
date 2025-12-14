/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194040
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
    for (int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) (signed char)-59)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((var_6) < (((/* implicit */int) var_13))))) != (((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) var_3))))))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27)))))))) <= ((+(((unsigned long long int) var_6))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_6 [i_1] = (+(var_5));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_2 [i_1])));
        var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) ^ (arr_5 [i_1])));
        arr_7 [i_1] = ((/* implicit */short) ((unsigned long long int) arr_4 [i_1]));
    }
    var_21 = ((/* implicit */short) ((signed char) (~(((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
}
