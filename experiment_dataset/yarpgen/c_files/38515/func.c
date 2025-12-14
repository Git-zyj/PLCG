/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38515
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
    var_18 = ((/* implicit */long long int) var_9);
    var_19 = ((/* implicit */long long int) var_6);
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_13)))))) + (min((((/* implicit */unsigned int) var_13)), (max((var_16), (((/* implicit */unsigned int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = arr_0 [i_0];
                var_21 = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */int) var_4)), (((((/* implicit */int) var_9)) | (((/* implicit */int) var_13))))))), (arr_0 [i_0])));
                var_22 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((min((min((arr_4 [i_0 - 3] [i_0 - 3]), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(unsigned char)2] [i_0] [(unsigned char)2])) || (((/* implicit */_Bool) var_3))))))) >> (((arr_0 [i_0]) - (5757493822411919897LL)))))) : (((/* implicit */unsigned char) ((min((min((arr_4 [i_0 - 3] [i_0 - 3]), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(unsigned char)2] [i_0] [(unsigned char)2])) || (((/* implicit */_Bool) var_3))))))) >> (((((arr_0 [i_0]) - (5757493822411919897LL))) + (1615584335500471921LL))))));
                var_23 ^= var_17;
            }
        } 
    } 
}
