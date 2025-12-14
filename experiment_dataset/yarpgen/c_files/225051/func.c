/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225051
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
    var_20 = (unsigned char)64;
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((var_1) ? (666634095) : (((/* implicit */int) max(((short)0), (((/* implicit */short) (_Bool)1))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)15))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((signed char) (!(arr_3 [i_0])))))));
                var_23 = (unsigned char)239;
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) min((((/* implicit */unsigned char) (_Bool)1)), (var_9))))), (max((((/* implicit */int) (signed char)116)), ((+(((/* implicit */int) (unsigned char)16))))))));
    var_25 = ((/* implicit */signed char) (unsigned char)101);
}
