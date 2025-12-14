/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210877
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_0))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (((((((_Bool)1) || (((/* implicit */_Bool) 394937232U)))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) var_13)) : (8191)))))) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (3497987839U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -7772303407338197318LL)) ? (((/* implicit */int) (unsigned char)70)) : (-8191)))), (2269334268U)))));
            }
        } 
    } 
    var_19 = ((((((/* implicit */_Bool) 7772303407338197317LL)) ? (((((/* implicit */unsigned long long int) -8177)) / (11185788187613373828ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) * (((/* implicit */unsigned long long int) var_6)));
    var_20 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (max(((+(((/* implicit */int) (_Bool)1)))), ((~(1474422248))))));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((short) max((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */int) (_Bool)1))))), (12ULL)))))));
}
