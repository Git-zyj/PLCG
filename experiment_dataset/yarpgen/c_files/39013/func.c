/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39013
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
    var_20 |= ((min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)157))) / (var_9))), (((/* implicit */long long int) var_1)))) * (((/* implicit */long long int) ((/* implicit */int) var_19))));
    var_21 = ((/* implicit */unsigned int) min(((short)255), ((short)-1)));
    var_22 |= ((/* implicit */unsigned int) (unsigned char)86);
    var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_13))) | (min((((/* implicit */long long int) max((var_15), (var_15)))), (max((var_16), (((/* implicit */long long int) var_19))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [15LL] &= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) * (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_4))))) * (arr_6 [(short)2] [3U] [i_2])));
                    arr_9 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)141)), (var_2)))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_2 + 1])) ? (arr_4 [19LL] [i_2 - 1]) : (arr_4 [(signed char)17] [i_2 - 3]))) : (((/* implicit */long long int) min((arr_2 [i_2 - 2]), (arr_2 [i_2 - 3]))))));
                    var_24 = ((/* implicit */signed char) ((((((long long int) (signed char)-35)) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (short)9)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (2070058989U))) : (2224908290U))) - (2070058928U)))));
                }
            } 
        } 
    } 
}
