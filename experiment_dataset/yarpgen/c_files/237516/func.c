/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237516
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_14 -= ((/* implicit */unsigned int) ((6875961265097715347LL) | (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_6 [i_0] [i_1] [1LL] [i_2])) - (21353))))))))));
                    arr_7 [i_1] [i_1] = min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_8)))))) < (((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))))), (((((/* implicit */_Bool) arr_5 [(signed char)9] [i_1] [i_0])) ? (arr_5 [i_0] [i_1] [i_1]) : ((-(1642377354664600029ULL))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_12))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (long long int i_4 = 1; i_4 < 18; i_4 += 2) 
        {
            {
                arr_14 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (arr_9 [15LL]))))) / (1642377354664600043ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1] [(short)14]))) < (min((520121847U), (((/* implicit */unsigned int) var_6)))))))));
                var_16 -= ((/* implicit */signed char) ((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (arr_2 [(short)14]))) > (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (min((16804366719044951572ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
                arr_15 [i_3] [i_4] [i_3] = ((/* implicit */short) ((var_12) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (((var_13) ? (((/* implicit */int) arr_12 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_12 [(unsigned short)16] [(_Bool)1] [(_Bool)1]))))))) : (min((((/* implicit */unsigned long long int) -7189007806368322771LL)), (16804366719044951586ULL)))));
                var_17 -= ((/* implicit */long long int) var_7);
                arr_16 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4681680491835087869ULL)) ? (((var_8) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (min((((/* implicit */long long int) var_12)), (var_3)))))) || (((/* implicit */_Bool) (signed char)49))));
            }
        } 
    } 
}
