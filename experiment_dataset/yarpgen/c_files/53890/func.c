/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53890
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((var_16), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) var_15)))))) : (var_5)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) var_7))), (((var_15) ? (var_4) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) ((long long int) var_8))) ? (((long long int) var_9)) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_2)))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_13) : (var_0)))) ? (max((var_16), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))))) ? ((((!(((/* implicit */_Bool) var_1)))) ? (min((var_16), (var_14))) : (((unsigned long long int) var_3)))) : (((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */int) var_11))))) : (((unsigned long long int) var_17))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) var_9);
                var_20 = ((/* implicit */short) ((_Bool) min((max((((/* implicit */long long int) var_7)), (var_10))), (((/* implicit */long long int) var_15)))));
                arr_8 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_17);
            }
        } 
    } 
}
