/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206122
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (max((((var_15) >> (((((/* implicit */int) var_7)) + (16106))))), (((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)0)), ((short)32760))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1 - 1] [i_1 - 2])) ? (arr_1 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_1 - 3] [i_1 - 3] [i_1 - 1]) > (arr_2 [i_1 - 3] [i_1 + 1] [i_1 - 3]))))) : (min((arr_2 [i_1 - 1] [i_1 - 2] [i_1 - 3]), (arr_1 [i_1 + 1])))));
                arr_5 [i_0] [(signed char)8] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_1 - 3] [i_1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1])))), (((/* implicit */int) arr_0 [i_1 - 1]))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) min((var_9), (((/* implicit */unsigned char) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((-1LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_14)))))) || (((/* implicit */_Bool) (-2147483647 - 1))))))) : (((long long int) 1426014723)))))));
            }
        } 
    } 
}
