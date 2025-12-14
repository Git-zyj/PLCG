/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200365
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))))) | (((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0])))))));
        var_17 = (!(((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))));
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (15063869578251652594ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) - (var_8)))))) ? (((/* implicit */long long int) max((((/* implicit */int) ((signed char) 7660651788904283215ULL))), ((+(((/* implicit */int) var_13))))))) : (((long long int) var_0))));
    var_19 = ((/* implicit */unsigned char) 1124273766U);
}
