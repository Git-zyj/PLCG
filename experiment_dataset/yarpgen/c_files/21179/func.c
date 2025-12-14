/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21179
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (unsigned short)44845)) ? (((/* implicit */int) (unsigned short)17)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
        var_12 &= ((/* implicit */unsigned int) (+((-(((/* implicit */int) ((_Bool) var_10)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */long long int) arr_0 [i_1]);
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) (+(14267643443611647804ULL)))))))));
        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))), (70368743653376LL))))));
    }
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || ((((!(((/* implicit */_Bool) 2147483630)))) || (((/* implicit */_Bool) var_1)))))))));
    var_16 ^= ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) -1491663404)))));
    var_17 = ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_8), (7871096002210508718LL)))) || (((/* implicit */_Bool) var_3)))))));
}
