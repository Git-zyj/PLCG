/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228160
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((unsigned int) ((((/* implicit */int) (signed char)101)) + (((/* implicit */int) (unsigned short)16977)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_21 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : (528251380021395482LL))), (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_18)))));
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) ((signed char) (unsigned char)146)))))) <= (((int) (~(((/* implicit */int) (unsigned char)0)))))));
    }
    for (signed char i_1 = 3; i_1 < 16; i_1 += 2) 
    {
        arr_6 [(signed char)8] = ((/* implicit */unsigned short) arr_3 [i_1]);
        var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)-1)), (min((((/* implicit */int) (unsigned char)251)), (((((/* implicit */_Bool) 3779073905U)) ? (994278393) : (((/* implicit */int) var_19))))))));
    }
    var_24 |= var_3;
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (-1) : (((/* implicit */int) (unsigned short)52220))));
    var_26 = min((((/* implicit */unsigned short) min(((signed char)0), ((signed char)-57)))), (((unsigned short) ((((/* implicit */_Bool) 2975260519U)) ? (((/* implicit */int) (signed char)-122)) : (var_14)))));
}
