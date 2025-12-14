/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194953
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
    var_15 -= ((/* implicit */short) var_5);
    var_16 = ((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(signed char)13] [i_0] = ((/* implicit */long long int) ((((long long int) (unsigned short)65206)) == (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
                var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (signed char)-12))))) ? ((+(((/* implicit */int) (signed char)-12)))) : (((/* implicit */int) ((var_7) == (((/* implicit */long long int) ((/* implicit */int) (short)9150))))))))) ? ((~(((((/* implicit */_Bool) (short)9154)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */long long int) (~(((unsigned int) var_3)))))))));
            }
        } 
    } 
}
