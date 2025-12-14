/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53512
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (((+(var_3))) < (((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) (signed char)-109)) + (119)))))))), (min((((/* implicit */long long int) ((var_8) >> (((((/* implicit */int) (signed char)60)) - (57)))))), (arr_6 [i_1])))));
                    var_11 = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_1 [i_0] [i_1])))) >> (((((((/* implicit */int) max(((unsigned short)29899), (((/* implicit */unsigned short) var_9))))) - (((/* implicit */int) arr_5 [i_1] [i_1 + 1])))) - (53154)))))) : (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_1 [i_0] [i_1])))) >> (((((((((/* implicit */int) max(((unsigned short)29899), (((/* implicit */unsigned short) var_9))))) - (((/* implicit */int) arr_5 [i_1] [i_1 + 1])))) - (53154))) + (28331))))));
                    arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) min((137438953471ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_9))));
    var_13 += ((/* implicit */long long int) (unsigned short)40239);
    var_14 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))) : (((((/* implicit */_Bool) 2147483647)) ? (var_4) : (var_4))))));
}
