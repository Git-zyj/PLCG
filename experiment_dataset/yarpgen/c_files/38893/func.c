/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38893
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_10 [6U] [i_1] [i_2] = ((/* implicit */short) ((signed char) max((var_7), (((/* implicit */unsigned long long int) var_1)))));
                    arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 3703909450488374504LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-12LL))))) ? (6LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) -33LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)22768)))))))));
                    arr_12 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (~(((((int) 14878997358150845524ULL)) ^ (((/* implicit */int) ((short) var_0)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_6);
}
