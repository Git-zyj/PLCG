/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196356
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
    var_20 = ((/* implicit */signed char) var_9);
    var_21 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))), (min((516026180U), (((/* implicit */unsigned int) arr_0 [i_0])))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))))));
        arr_2 [(_Bool)1] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 4; i_1 < 15; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) arr_0 [i_1])), (arr_5 [i_1])))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(arr_4 [i_1 + 2])))), (((unsigned long long int) 516026180U))));
    }
}
