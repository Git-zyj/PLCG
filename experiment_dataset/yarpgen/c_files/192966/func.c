/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192966
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
    var_18 += ((/* implicit */signed char) (short)32767);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((unsigned int) max((((int) (signed char)0)), (((((/* implicit */_Bool) -1262699981)) ? (2048576014) : (1262699980))))))));
        var_21 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((-2048576014) | (-1262699981)))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (8933344814678454541ULL))))));
    }
    var_22 = ((/* implicit */short) max(((-((-(870426699))))), (((/* implicit */int) var_13))));
}
