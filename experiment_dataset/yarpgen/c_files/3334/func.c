/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3334
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
    var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (unsigned char)180)), (826979293U))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-5)) & (((/* implicit */int) var_4)))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (min((var_2), (((/* implicit */unsigned int) (signed char)-65)))))))));
    var_16 = ((/* implicit */unsigned char) var_6);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (unsigned char)232)) ? (3561696841U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (2051346370087776704LL))), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (var_2)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_18 ^= ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) & (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))) : (((min((arr_3 [i_0] [i_0] [i_1]), (arr_3 [i_0] [i_1] [i_0]))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57))))));
                arr_5 [13ULL] [13ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (unsigned char)62)) >> (((((/* implicit */int) (unsigned char)114)) - (99))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_1))))), (min((arr_1 [2U] [(unsigned char)6]), (arr_4 [i_0] [i_0])))))) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
                arr_6 [(unsigned char)16] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (1133718339U))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))));
            }
        } 
    } 
}
