/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205504
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
    var_14 = var_0;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((min((((/* implicit */unsigned int) var_1)), ((~(1240461549U))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_8)))))))))));
        arr_2 [10LL] = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_7))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [20LL] [7] [i_0] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (867900148U)))))));
                    arr_9 [i_0] [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) var_4);
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */short) (signed char)-70)), ((short)-11571)))) & ((~(((/* implicit */int) arr_5 [i_0] [i_1]))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */short) (~(max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
    }
}
