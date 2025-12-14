/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213012
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-68)) > (-1585843774)));
    var_14 = ((_Bool) ((((/* implicit */int) ((signed char) 1585843773))) | (((/* implicit */int) var_10))));
    var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */signed char) var_9))))), (((unsigned long long int) 1585843773))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [0ULL] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_0 [i_1])))) & (((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_2 [(signed char)20]))))))));
                arr_7 [i_0] |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned short) var_10))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (-1585843773)))) ? (max((var_11), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0]))))))));
            }
        } 
    } 
}
