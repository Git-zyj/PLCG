/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212177
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
    var_17 *= ((/* implicit */unsigned int) var_13);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)7680))))) ? ((-(((/* implicit */int) arr_0 [i_0 - 3])))) : ((+(((/* implicit */int) var_8))))))) ? (((/* implicit */int) (unsigned short)7668)) : ((-(((/* implicit */int) (_Bool)1))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (signed char)-64)))))) && (arr_0 [i_0 - 4])));
        arr_2 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 5819968902606566062LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)11489))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) % (-5819968902606566062LL))) : (((/* implicit */long long int) (~(-1246510050)))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15374727798239407304ULL))))))));
        arr_3 [i_0] [i_0 - 3] = ((/* implicit */short) min((((((/* implicit */int) arr_1 [i_0 + 2])) % (((/* implicit */int) arr_0 [i_0 + 2])))), (((/* implicit */int) ((((/* implicit */_Bool) 3279561257U)) && (((/* implicit */_Bool) var_10)))))));
    }
    var_20 = (+(((/* implicit */int) (_Bool)1)));
    var_21 = ((/* implicit */unsigned long long int) var_9);
}
