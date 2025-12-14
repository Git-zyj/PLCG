/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30409
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((var_1) ? (((((/* implicit */int) min((var_1), (var_1)))) & (((/* implicit */int) (!(var_4)))))) : (((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_2])) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_1 - 1])) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_6)))) >= (((/* implicit */int) ((_Bool) arr_1 [i_0]))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3438296289U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3438296289U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0]))))) : (((((/* implicit */_Bool) 2787027560U)) ? (856671007U) : (2424519583U))))))));
                        arr_12 [8LL] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_1 - 4] [i_2]) ? (((/* implicit */int) arr_7 [i_0] [i_3])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) (short)817)) : ((-(((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_1 + 2]), (((/* implicit */signed char) arr_0 [i_1 - 3])))))) : ((((+(1870447704U))) << (((((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 3])) - (71)))))));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) ((signed char) (short)23408))), (((short) arr_6 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(_Bool)1] [i_1]))) : (((max((((/* implicit */unsigned int) var_6)), (arr_2 [(short)4]))) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                    }
                }
            } 
        } 
    } 
}
