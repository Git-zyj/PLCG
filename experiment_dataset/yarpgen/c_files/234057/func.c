/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234057
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
    var_11 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */int) var_6)) != (((/* implicit */int) var_8)))) ? (134005168U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (2586037480U)));
    var_12 = ((/* implicit */int) ((((_Bool) ((((/* implicit */_Bool) (short)-10313)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20216))) : (var_0)))) ? (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (signed char)-1))))))) : ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((unsigned long long int) var_1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) (-((+(arr_0 [i_0] [i_0])))));
        arr_2 [(unsigned short)5] [(short)11] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0]))));
        var_14 = ((((var_10) % (134005168U))) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 262143U)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(signed char)6])))));
        arr_6 [i_1] [(unsigned char)8] |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (short)-20217)) : (((/* implicit */int) (short)-20217))))));
        arr_7 [i_1] |= ((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_3 [19ULL]))));
        var_15 = ((/* implicit */int) 2586037493U);
    }
}
