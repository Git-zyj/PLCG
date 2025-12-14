/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243278
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
    var_20 = var_7;
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) max((((int) ((((/* implicit */_Bool) (signed char)44)) ? (2283539497U) : (2011427826U)))), (((int) arr_1 [i_0]))));
        var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)43869)) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])))) : (max((-427147392), (((/* implicit */int) (short)-20223))))))));
        var_23 = ((/* implicit */unsigned char) ((int) ((unsigned long long int) min((arr_1 [i_0]), (((/* implicit */short) (_Bool)1))))));
    }
}
