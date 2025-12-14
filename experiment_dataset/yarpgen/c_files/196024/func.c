/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196024
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */int) var_1)) != (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((((/* implicit */int) (unsigned char)196)) << (((4294967295U) - (4294967293U)))))))))))));
    var_17 = ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))) : ((~(1013044866)))));
                var_19 = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                var_20 = ((/* implicit */int) 1812844126948243906ULL);
                arr_5 [i_1] = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (4294967290U)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)60)) ^ (((/* implicit */int) arr_1 [i_0]))))) : (max((((/* implicit */long long int) var_1)), (var_3)))))));
                var_21 = 1425822597;
            }
        } 
    } 
}
