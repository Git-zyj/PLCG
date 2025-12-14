/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233056
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max((min((((/* implicit */unsigned long long int) min((var_2), (397231688U)))), (min((3417857760500017098ULL), (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_3 [i_0 - 1] [i_1])), (var_14))), (((/* implicit */long long int) min((((/* implicit */signed char) arr_4 [i_0] [6] [i_0])), (arr_2 [i_0] [i_1] [i_2]))))))))))));
                    var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) min((min((((/* implicit */int) arr_4 [0] [i_1] [i_0])), (arr_0 [i_0 - 1]))), (((/* implicit */int) max((arr_2 [i_0 - 2] [(_Bool)1] [i_0 - 2]), (((/* implicit */signed char) arr_4 [(short)10] [(_Bool)1] [(_Bool)1])))))))), (max((((/* implicit */unsigned int) min(((short)11944), (((/* implicit */short) arr_3 [i_0] [6LL]))))), (max((((/* implicit */unsigned int) var_1)), (var_8)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) max((max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (var_12)))), (min((((/* implicit */long long int) (short)-11944)), (var_14))))), (max((((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)1)), (var_3)))), (min((var_14), (((/* implicit */long long int) var_0))))))));
}
