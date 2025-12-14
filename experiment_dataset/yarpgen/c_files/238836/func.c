/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238836
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
    var_15 = max((((((/* implicit */unsigned long long int) 1059221177U)) ^ (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (min((9223372036854775807LL), (var_12)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((3926488603993719230ULL), (((/* implicit */unsigned long long int) 583054200)))))));
                    arr_10 [i_2] [i_1] [i_1] = ((/* implicit */int) arr_0 [i_0]);
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((9451982339571801392ULL) | (((/* implicit */unsigned long long int) -633814620))))) ? (((/* implicit */unsigned int) (~(1716934996)))) : (((unsigned int) arr_4 [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) max((((((/* implicit */long long int) -551230931)) % (var_0))), (((/* implicit */long long int) (short)8192)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            var_18 = arr_7 [i_0] [i_0];
            var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned short)52166)) ? (arr_5 [i_3] [i_3] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)52176)) : (((/* implicit */int) (unsigned short)511))))))), (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_0] [i_0] [i_0]))) | (max((arr_5 [i_3] [i_3] [i_0]), ((-9223372036854775807LL - 1LL))))))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (unsigned short)52181))));
        }
    }
}
