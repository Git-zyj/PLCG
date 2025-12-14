/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24041
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_1)))) ? ((-((-(var_14))))) : (var_13)));
    var_17 = var_2;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_15)), (arr_1 [i_0] [i_0])))) ? (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) : (((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1 + 1] [i_2 + 1] = ((/* implicit */int) 262143LL);
                    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) 262130LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_2 - 1]))) : (var_9))) & (((/* implicit */long long int) ((var_5) >> (((((/* implicit */int) var_15)) - (20552))))))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) arr_7 [i_2 + 1])), (262131LL)));
                    var_19 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0])) : (var_10)))) ? (max((-262141LL), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + ((+(var_12)))))));
    }
    var_21 = ((/* implicit */short) ((var_3) - ((-(min((var_3), (((/* implicit */unsigned int) var_11))))))));
}
