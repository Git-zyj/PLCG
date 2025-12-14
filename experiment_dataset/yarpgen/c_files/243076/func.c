/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243076
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
    var_16 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_14))))));
    var_17 = ((/* implicit */int) (+(min((((16624750710740582280ULL) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) min((max((arr_3 [19ULL] [16]), (((/* implicit */short) arr_0 [20ULL])))), (((/* implicit */short) arr_0 [i_0]))))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_14))))));
                arr_5 [i_0] [(_Bool)0] = ((/* implicit */unsigned char) var_1);
                var_18 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_11)))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(((unsigned long long int) arr_2 [i_0] [i_0] [10ULL])))))));
                arr_6 [i_0 + 1] = max((((((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 2])) / (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])))), (((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_0 + 1])) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 3])))));
            }
        } 
    } 
}
