/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238180
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!((_Bool)1)))), (max((((/* implicit */int) max(((signed char)(-127 - 1)), ((signed char)40)))), (var_17)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(0ULL))))));
            arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))) : (var_6)))) ? (min((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])), (var_15))) : (((/* implicit */int) ((unsigned char) var_0)))));
            var_19 = max(((-(((/* implicit */int) (unsigned short)36637)))), (((/* implicit */int) ((short) (signed char)117))));
            var_20 += ((/* implicit */unsigned char) var_6);
        }
    }
    var_21 = ((/* implicit */signed char) min((var_10), (((/* implicit */unsigned int) ((signed char) (unsigned char)252)))));
}
