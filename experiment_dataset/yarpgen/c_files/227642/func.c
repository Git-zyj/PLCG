/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227642
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) ((signed char) -291513514402056894LL)))) & ((~(((/* implicit */int) ((_Bool) 7915950342409726989LL)))))));
    var_18 |= ((/* implicit */short) ((_Bool) ((min((291513514402056914LL), (((/* implicit */long long int) var_2)))) + (min((((/* implicit */long long int) var_2)), (704456177365913874LL))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) -291513514402056915LL))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((short) ((long long int) (signed char)114))))));
        var_21 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) max(((short)-32739), (((/* implicit */short) (_Bool)1))))), (((long long int) 2286908056U))))));
        arr_2 [i_0] [i_0] &= ((/* implicit */signed char) (((+(max((-7191968258507955178LL), (((/* implicit */long long int) (unsigned char)3)))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((max((var_16), (9223372036854775792LL))) > (max((291513514402056930LL), (var_16)))))))));
    }
}
