/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214188
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-59)))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~(min((((/* implicit */unsigned long long int) (unsigned short)51766)), (13946800256540030934ULL))))) <= (arr_2 [i_0])));
    }
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(((/* implicit */int) min(((short)-13730), (((/* implicit */short) (signed char)-63))))))))));
}
