/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32976
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 *= ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned short)61205)) != (((((/* implicit */int) var_14)) - (((/* implicit */int) var_5))))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) max((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) var_13)))), (((/* implicit */int) ((unsigned short) var_16))))));
            }
        } 
    } 
    var_20 &= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_2)))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))));
    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && ((_Bool)1)))) : ((~(((/* implicit */int) var_9))))))));
}
