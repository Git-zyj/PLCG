/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222060
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))))), (var_4)))) ? (min((((((/* implicit */_Bool) var_1)) ? (144115187002114048LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) var_3))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((-(max((((/* implicit */int) var_0)), (var_1)))))));
        var_14 &= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192)))))))));
    }
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_2)))))) ? (((/* implicit */int) (((+(var_10))) < (((/* implicit */unsigned int) ((int) var_10)))))) : (((int) min((var_6), (var_6))))));
}
