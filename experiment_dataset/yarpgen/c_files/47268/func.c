/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47268
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
    var_20 = ((/* implicit */unsigned int) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-3436)), (max((var_3), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]))))))) ? (((/* implicit */int) arr_4 [i_1] [i_0] [i_1])) : (min((((/* implicit */int) ((short) 2LL))), (((1290018270) + (((/* implicit */int) (short)-32754))))))));
                var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_19)) + (3218)))))), (((((/* implicit */_Bool) (short)32753)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
                arr_6 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) & (((arr_1 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9980))) : (8104128101634076736ULL))))));
                arr_7 [i_0] [i_0] = ((/* implicit */int) var_15);
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) max((5981282113720209272ULL), (268435424ULL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            {
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_0 [i_2] [i_3]))) ? (((/* implicit */unsigned long long int) (-(((var_13) ? (((/* implicit */int) arr_10 [i_3] [i_2])) : (((/* implicit */int) arr_9 [i_3]))))))) : (((((/* implicit */_Bool) max((((/* implicit */short) arr_9 [i_3])), ((short)-32754)))) ? (min((((/* implicit */unsigned long long int) 3014590992U)), (var_11))) : (((/* implicit */unsigned long long int) ((arr_1 [i_2]) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_10 [i_2] [i_3])))))))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_15)))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) (~(var_1))))));
            }
        } 
    } 
}
