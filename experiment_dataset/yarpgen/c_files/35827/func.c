/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35827
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1 - 1]))))), (var_9)))), (var_5)));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((min((-2147483632), (((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 1] [i_1 - 3])))) * (((/* implicit */int) min((min((((/* implicit */unsigned short) var_14)), ((unsigned short)23701))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (18446744073709551615ULL))))))))))));
            }
        } 
    } 
    var_18 = var_12;
}
