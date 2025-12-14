/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221154
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
    var_18 = ((/* implicit */unsigned char) max((max(((+(var_13))), (((/* implicit */long long int) ((((/* implicit */_Bool) -8496284985493752122LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))), (var_13)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((-7964373098162284301LL), (-670363993217457436LL)));
        arr_4 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1419126353)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)221))) : (-3LL)))) ? (max((((/* implicit */int) (signed char)-13)), ((~(((/* implicit */int) var_3)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 561850441793536ULL)))))))));
    }
    var_19 &= ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) var_2))))))));
}
