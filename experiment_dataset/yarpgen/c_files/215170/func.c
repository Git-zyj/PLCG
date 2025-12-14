/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215170
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned long long int) var_1)), (var_15))))) ? ((((!(((/* implicit */_Bool) var_4)))) ? (min((((/* implicit */unsigned long long int) var_9)), (477556707128277033ULL))) : (((/* implicit */unsigned long long int) ((long long int) var_10))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1214357548)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)0)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (arr_0 [i_1 - 1]) : (arr_0 [i_0 + 1]))), (min((((/* implicit */unsigned long long int) var_10)), (arr_0 [i_0 - 2])))));
                arr_6 [i_0] [(signed char)15] = (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1])) ? (((/* implicit */long long int) arr_2 [i_1] [i_1 + 2])) : (arr_4 [i_0] [i_1 + 3]))) : (((((/* implicit */_Bool) var_17)) ? (arr_4 [i_1 + 3] [i_1 + 3]) : (arr_4 [i_0] [i_1 + 1]))));
                var_20 = ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-24281))))))) ? (((/* implicit */int) (unsigned char)255)) : (arr_2 [i_0] [i_1 + 1]));
            }
        } 
    } 
    var_21 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)20)), ((+(((/* implicit */int) var_16))))))) / (((max((1904272265U), (((/* implicit */unsigned int) (short)24276)))) | (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
}
