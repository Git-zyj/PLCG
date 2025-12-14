/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21452
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
    var_20 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned int) var_16))))) || (((/* implicit */_Bool) var_0))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */signed char) ((((/* implicit */long long int) arr_0 [i_0 - 2])) <= ((+(-3216231127694210961LL)))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((unsigned long long int) (_Bool)1)) << (((-479231494) + (479231554))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (~(arr_1 [i_0 + 2])));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        var_23 -= (!((!(((/* implicit */_Bool) arr_3 [i_1])))));
        arr_7 [i_1 - 1] |= (!(((/* implicit */_Bool) -471607844)));
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_6))));
        var_25 = ((/* implicit */signed char) ((int) max((((/* implicit */long long int) var_13)), (arr_8 [i_2 - 1] [i_2 - 1]))));
    }
}
