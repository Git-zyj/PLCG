/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43046
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
    var_16 = ((/* implicit */unsigned int) (short)16384);
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3)) ? (((/* implicit */long long int) ((/* implicit */int) max((min((((/* implicit */unsigned char) (_Bool)1)), (var_4))), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_0)) <= (var_15)))))))) : (max((((/* implicit */long long int) (((_Bool)1) ? (var_6) : (var_13)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_14)))))));
    var_18 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 1])) < (((/* implicit */int) arr_3 [i_1 + 3])))) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) min((max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1))), (((/* implicit */signed char) (_Bool)1))))))));
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_13)))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((((/* implicit */_Bool) arr_5 [2LL] [2LL] [4U])) ? (var_12) : (((/* implicit */int) arr_2 [(_Bool)1] [i_1]))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))) < (((((/* implicit */_Bool) var_9)) ? (arr_4 [i_0] [(unsigned char)8]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [2U])))))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (-7))) : (((/* implicit */int) var_1)))))))));
            }
        } 
    } 
}
