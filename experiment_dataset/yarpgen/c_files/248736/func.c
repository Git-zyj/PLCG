/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248736
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) (_Bool)0)), (var_0))) | (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_4 [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((long long int) var_4)), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                arr_6 [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_8)) + (((/* implicit */int) arr_1 [i_0 + 2])))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) < (((/* implicit */int) (signed char)64)))))))) ? (((/* implicit */unsigned long long int) max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)19332))) : (arr_2 [i_0] [i_0]))), (((/* implicit */long long int) min((arr_3 [(unsigned short)8]), (((/* implicit */unsigned char) arr_4 [i_0 - 1])))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) ^ (0ULL)))));
                var_10 = ((/* implicit */signed char) arr_1 [i_0 - 1]);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) (+(-1LL)));
}
