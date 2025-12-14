/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208996
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_1 + 1])) - (((/* implicit */int) arr_1 [i_0] [i_1 + 1]))))) ? (((arr_1 [17ULL] [i_1 + 1]) ? (((/* implicit */int) arr_1 [i_0] [i_1 - 2])) : (((/* implicit */int) arr_1 [(unsigned char)11] [i_1 + 1])))) : (((/* implicit */int) (!((_Bool)1))))));
                var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)130)) << (10U)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((11U) < (7U)))))))) : (((/* implicit */int) var_11))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967285U)) ? (10U) : (4294967285U)))), (var_14)))) ? ((+(4294967285U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_11)))))))));
    var_18 = ((/* implicit */unsigned char) (((+((-(((/* implicit */int) var_5)))))) + ((-(((/* implicit */int) ((short) var_5)))))));
}
