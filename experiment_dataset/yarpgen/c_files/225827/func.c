/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225827
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
    var_19 = ((/* implicit */unsigned long long int) ((8191LL) > (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)255)), (0))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_11)) : (var_3))))) : (min((((/* implicit */int) var_4)), (var_11)))));
    var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((-1) - (((/* implicit */int) (signed char)36))))))) ? (var_17) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (unsigned char)94)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_2 + 1] [i_1] [i_0 - 1] = ((/* implicit */short) (((~(((/* implicit */int) (signed char)29)))) + (max(((~(arr_5 [i_0]))), (((/* implicit */int) ((short) (signed char)0)))))));
                    var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2 + 1])) || (((/* implicit */_Bool) var_13)))), (((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_1 + 1] [i_1])) && (((/* implicit */_Bool) var_1))))));
                }
            } 
        } 
    } 
}
