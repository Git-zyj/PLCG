/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209395
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
    var_19 = ((/* implicit */signed char) (((+(((/* implicit */int) ((signed char) (signed char)-9))))) / (((/* implicit */int) (signed char)-34))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_20 = (-(((long long int) ((signed char) (signed char)-22))));
        var_21 = ((/* implicit */long long int) (signed char)-4);
        arr_2 [6LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-22)) / (((/* implicit */int) min(((signed char)21), ((signed char)9))))))) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (signed char)34))));
        var_22 ^= ((/* implicit */long long int) (signed char)-22);
        var_23 -= ((/* implicit */long long int) (signed char)7);
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-22)) == (((/* implicit */int) (signed char)-10))))) & (((/* implicit */int) (signed char)-4))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) ((signed char) (signed char)-9))) : (((((((/* implicit */int) (signed char)-16)) <= (((/* implicit */int) (signed char)-5)))) ? (((/* implicit */int) max(((signed char)-34), ((signed char)-10)))) : (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (signed char)-9))))))));
        arr_7 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) min(((signed char)7), ((signed char)-9)))))) ^ (((/* implicit */int) (signed char)4))));
    }
}
