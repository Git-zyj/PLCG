/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214274
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((var_10) ? (((((/* implicit */_Bool) 7733662505804936337LL)) ? (((/* implicit */int) var_7)) : (-68294484))) : ((-(((/* implicit */int) var_2)))))))));
    var_14 = ((/* implicit */unsigned char) ((short) max((((/* implicit */int) min(((unsigned char)177), (var_9)))), (((int) (_Bool)1)))));
    var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */_Bool) ((long long int) var_12))) && ((_Bool)1)))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_1 - 3] [i_2]);
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0] [i_1 - 2] [i_2])) ? (3371847445953892329LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_1 - 1])), (arr_7 [i_0 + 2] [i_0 + 2] [i_0] [i_1 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31684))))))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((((/* implicit */long long int) arr_1 [i_2] [i_2])) > (((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) ? (min((-182862137051582031LL), (((/* implicit */long long int) arr_5 [i_0] [5] [5] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)11435))))))))));
                }
            } 
        } 
    } 
}
