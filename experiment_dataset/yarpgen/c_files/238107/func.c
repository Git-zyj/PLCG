/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238107
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_11 = (+(min((3393515280498939063LL), (((/* implicit */long long int) arr_2 [i_0] [i_0])))));
        var_12 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_1 [(unsigned char)12]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (min((((/* implicit */long long int) (short)-15672)), (-3393515280498939080LL)))));
        var_13 = ((/* implicit */signed char) var_1);
    }
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (11U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8U)))))) : ((+(-3393515280498939097LL))))) >> (((min((((/* implicit */long long int) var_7)), (-3393515280498939064LL))) + (3393515280498939110LL))))))));
}
