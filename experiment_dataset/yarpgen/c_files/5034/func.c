/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5034
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
    var_20 = ((/* implicit */long long int) var_14);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])));
        var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(unsigned short)2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-1))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_22 += (!((!(((/* implicit */_Bool) var_9)))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (_Bool)1))));
    }
    var_24 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))), ((unsigned char)218)));
}
