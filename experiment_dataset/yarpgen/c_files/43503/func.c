/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43503
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
    var_16 = max((((/* implicit */unsigned long long int) min((max((4446312902025161882LL), (var_14))), (((/* implicit */long long int) var_15))))), (13709727089012714661ULL));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) var_7);
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((4446312902025161884LL) ^ (-1LL))), (((/* implicit */long long int) arr_4 [i_0] [i_1]))))) ? (min((((/* implicit */int) max(((signed char)104), (((/* implicit */signed char) var_9))))), ((+(((/* implicit */int) var_9)))))) : (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_1 [(_Bool)1])))), (((/* implicit */int) var_15))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)123)), ((unsigned short)30590)))) ? (min((var_12), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) << (((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)124)), (arr_1 [i_0])))) - (59186))))) : (((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned short) var_15))))) ? (max((var_7), (((/* implicit */unsigned long long int) arr_3 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (3380726403U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 15343628934718339907ULL))))) >> (((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (var_5)))))) - (44681)))));
            }
        } 
    } 
}
