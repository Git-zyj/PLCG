/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44620
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
    var_16 = ((/* implicit */unsigned short) ((unsigned int) var_12));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                var_17 = ((/* implicit */short) min((((/* implicit */int) arr_0 [i_1])), (max((((/* implicit */int) arr_5 [i_0] [i_0])), (min((((/* implicit */int) (signed char)-5)), (var_15)))))));
            }
        } 
    } 
    var_18 += ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)105))) : (var_4));
    var_19 = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) min(((unsigned char)70), ((unsigned char)105)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) var_9)))))), ((~(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
}
