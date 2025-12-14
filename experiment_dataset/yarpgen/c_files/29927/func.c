/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29927
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
    var_15 = ((/* implicit */unsigned int) ((short) ((((/* implicit */long long int) (~(((/* implicit */int) (short)-391))))) ^ (((((/* implicit */_Bool) (short)-378)) ? (((/* implicit */long long int) 3531923433U)) : (8890293378533143520LL))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((((/* implicit */_Bool) arr_3 [i_0])) ? (min((arr_3 [i_0]), (-1997540504))) : (((/* implicit */int) var_0)));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-384)))))) ? (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) arr_3 [21ULL])))) : (((unsigned long long int) 0LL)))))))));
        arr_4 [i_0] [i_0] |= ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) arr_0 [i_0])))));
    }
    var_18 = ((/* implicit */long long int) ((int) var_8));
}
