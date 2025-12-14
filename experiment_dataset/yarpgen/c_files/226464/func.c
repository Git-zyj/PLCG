/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226464
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
    var_14 &= (+(((((((/* implicit */int) var_9)) >= (((/* implicit */int) var_8)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_1))) : ((~(0LL))))));
    var_15 &= ((/* implicit */int) ((((/* implicit */_Bool) 6346851077696913583ULL)) ? (6584211148168339544LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */long long int) var_3)) : (((long long int) var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                arr_5 [(unsigned char)2] &= ((/* implicit */signed char) min(((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) - (arr_1 [(_Bool)1]))))), ((~(0LL)))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((int) var_13)) >= (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [9LL]))))) ? ((+(((/* implicit */int) (unsigned short)45033)))) : (((/* implicit */int) var_11))))));
                var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (min((2785492386U), (((/* implicit */unsigned int) arr_4 [i_0])))) : (var_3)))) ? (min(((~(arr_1 [(short)2]))), (((/* implicit */long long int) var_6)))) : (min((((/* implicit */long long int) ((((/* implicit */int) (signed char)58)) & (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) (signed char)127)) ? (var_1) : (((/* implicit */long long int) -199939782))))))));
            }
        } 
    } 
}
