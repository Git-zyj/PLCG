/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2019
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((((/* implicit */int) var_2)) != (((/* implicit */int) arr_0 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (unsigned short)24273))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)189)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)40491);
    }
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) min(((signed char)-104), ((signed char)-127)))))) >> (((var_4) - (9848688546241259038ULL))))))));
}
