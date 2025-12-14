/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231704
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
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6))) | (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (var_1)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (arr_7 [i_2] [i_2 - 1] [i_2 + 2] [i_2 + 2])))) ? ((+(((/* implicit */int) min(((unsigned char)233), (((/* implicit */unsigned char) (signed char)42))))))) : (((/* implicit */int) (short)(-32767 - 1))))))));
                    arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((arr_6 [i_0] [(unsigned char)8] [i_2]), (var_7))))))) && (((/* implicit */_Bool) arr_8 [i_2] [i_2]))));
                    arr_11 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (unsigned short)18702);
                }
            } 
        } 
    } 
    var_17 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */unsigned long long int) var_8)) * (18096781554896458992ULL))));
}
