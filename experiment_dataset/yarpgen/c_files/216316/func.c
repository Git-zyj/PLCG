/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216316
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
    var_18 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((4127776496U), (((/* implicit */unsigned int) var_4))))) ? (1275291857480120677ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) + (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))))));
                var_20 |= ((/* implicit */_Bool) arr_1 [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_11);
    var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) var_2))), (4127776496U)))) ? (max((((/* implicit */int) var_9)), (((((/* implicit */int) var_9)) % (((/* implicit */int) var_0)))))) : ((+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))))));
}
