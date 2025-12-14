/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205044
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
        var_21 += ((/* implicit */short) ((int) ((((/* implicit */int) var_3)) / (((/* implicit */int) (_Bool)1)))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0] [i_0 - 1])));
        var_22 = ((/* implicit */unsigned char) (-(arr_1 [i_0] [i_0 - 1])));
    }
    var_23 = ((/* implicit */_Bool) var_7);
    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (1090740653) : (var_8))), (((int) var_10))))) ^ (min((((/* implicit */unsigned long long int) ((int) var_12))), (min((var_9), (((/* implicit */unsigned long long int) var_0))))))));
    var_25 = ((/* implicit */_Bool) var_1);
}
