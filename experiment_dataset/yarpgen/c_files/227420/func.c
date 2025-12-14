/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227420
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
    var_15 = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) 4130528080U)) ? (((/* implicit */long long int) 2401536126U)) : (-8037046016514531694LL))), (((/* implicit */long long int) ((short) var_2)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_16 -= (+(((/* implicit */int) var_3)));
        var_17 = ((/* implicit */long long int) (unsigned char)199);
        arr_2 [i_0] = (_Bool)1;
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((unsigned int) max((((/* implicit */long long int) max(((unsigned char)165), ((unsigned char)138)))), ((~(var_1)))))))));
    }
}
