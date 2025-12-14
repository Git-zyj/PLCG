/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29467
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
    var_18 = ((/* implicit */short) (~(var_7)));
    var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)140)) ? (((unsigned long long int) 1209079252)) : (((/* implicit */unsigned long long int) var_11))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) min((1209079252), (((/* implicit */int) var_14)))))))) ? (((/* implicit */int) ((short) ((unsigned short) var_1)))) : (((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) ((unsigned short) ((arr_3 [i_0 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_2)) >= (arr_3 [(unsigned short)20]))))))));
                var_22 = ((/* implicit */unsigned long long int) ((((int) (-(((/* implicit */int) arr_5 [i_1] [i_0] [i_0]))))) / (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (arr_2 [2LL])))) : (var_5)))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */long long int) var_17);
}
