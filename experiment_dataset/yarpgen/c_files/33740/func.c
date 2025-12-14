/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33740
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
    var_18 = ((/* implicit */short) min((((unsigned long long int) 705718305285418329ULL)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_9 [i_0 + 1] [i_0 + 1] [(short)23] [(short)23] = ((/* implicit */unsigned int) (_Bool)1);
                    var_19 = ((/* implicit */int) (short)16426);
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_1 [i_2] [(_Bool)1]) >> (((((/* implicit */_Bool) (short)16430)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_8)))))), (min((((((/* implicit */unsigned long long int) var_0)) & (var_7))), (((/* implicit */unsigned long long int) var_14))))));
                    var_20 ^= ((/* implicit */signed char) min((arr_6 [11LL] [i_1 + 1] [i_2]), (((/* implicit */unsigned long long int) var_9))));
                    var_21 = ((int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-69)));
                }
            } 
        } 
    } 
}
