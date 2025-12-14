/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227345
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
    var_14 = ((/* implicit */short) max((((/* implicit */signed char) max((var_7), ((((_Bool)0) && (((/* implicit */_Bool) var_2))))))), (var_12)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_2 [i_0])), (var_13)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_2 [i_0]))))) : ((-(((/* implicit */int) (_Bool)1))))));
                        var_15 = ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)24)), (((long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                        arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */short) ((max((((/* implicit */long long int) var_7)), (arr_0 [i_0]))) >= (((/* implicit */long long int) ((/* implicit */int) min((((((/* implicit */int) var_1)) >= (((/* implicit */int) var_8)))), (arr_2 [i_3])))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) max((((/* implicit */signed char) (!(arr_1 [i_0] [i_0])))), (min((((/* implicit */signed char) (_Bool)1)), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) max((var_12), (((/* implicit */signed char) arr_4 [i_0]))))) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) max((var_3), ((_Bool)1))))))));
    }
}
