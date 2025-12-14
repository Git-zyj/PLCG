/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44281
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
    var_15 = ((((/* implicit */_Bool) 491620490U)) ? (-619319531) : ((+(((/* implicit */int) (unsigned short)13402)))));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (short)-32158)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) max((var_17), (max((((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-18104)), (305359328192882138LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1865519412))))) : (((/* implicit */int) arr_2 [i_0 - 2])))), ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0]))))))))));
        var_18 += max((arr_0 [i_0 - 1]), ((short)-15721));
    }
    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_10)))));
}
