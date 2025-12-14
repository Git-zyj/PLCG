/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245256
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
    var_19 = ((/* implicit */int) min((((min((((/* implicit */unsigned long long int) var_11)), (var_17))) * (var_9))), (var_12)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 |= ((/* implicit */int) min((0U), (27U)));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((arr_3 [8ULL] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                arr_4 [i_1] [i_1] [i_1] = ((min((arr_3 [i_1] [i_0]), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) <= (arr_3 [i_1] [i_1])))))) << (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 63ULL)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) arr_1 [i_1]))))) : (2012944302398572018LL))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_4);
}
