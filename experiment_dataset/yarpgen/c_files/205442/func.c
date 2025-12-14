/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205442
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
    var_20 = ((/* implicit */unsigned char) (-(var_5)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((var_2) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)44))))))))))));
    }
    var_22 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((short) var_2)))))), (var_11)));
    var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)42708))));
}
