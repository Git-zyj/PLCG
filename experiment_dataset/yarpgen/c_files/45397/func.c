/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45397
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
    var_20 = ((/* implicit */unsigned char) var_16);
    var_21 = ((/* implicit */unsigned char) ((unsigned short) max((((short) var_9)), (((/* implicit */short) ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)95)))))))));
    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)0] [(unsigned short)0])))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_10);
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8173811107951622547ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (8173811107951622547ULL)))) ? (((/* implicit */int) (unsigned char)9)) : ((-(((/* implicit */int) (unsigned char)7))))));
            }
        } 
    } 
}
