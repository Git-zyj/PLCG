/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219304
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
    var_15 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_10))))) || (((/* implicit */_Bool) var_1)))))));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max(((+(((var_5) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 |= ((/* implicit */_Bool) ((max((min((((/* implicit */unsigned long long int) var_1)), (var_7))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))));
                var_18 ^= ((/* implicit */short) min((((/* implicit */long long int) min((var_5), (((144115188075855864LL) != (((/* implicit */long long int) ((/* implicit */int) var_12)))))))), ((-(((((/* implicit */_Bool) var_9)) ? (arr_1 [7ULL] [i_1]) : (arr_0 [i_0])))))));
                var_19 += ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_0]);
                arr_6 [i_0] = ((/* implicit */unsigned char) (-(max((((/* implicit */int) arr_4 [(unsigned char)9] [i_0] [i_1])), (min((-20), (((/* implicit */int) arr_3 [7] [i_1] [2LL]))))))));
            }
        } 
    } 
}
