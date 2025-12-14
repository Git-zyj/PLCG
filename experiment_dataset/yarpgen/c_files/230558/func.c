/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230558
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
    var_16 *= ((/* implicit */unsigned char) max((((long long int) (-(((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_5)))) / (((/* implicit */int) var_15)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [(signed char)12] [(signed char)0] [i_0] = ((((/* implicit */_Bool) -4625544802152240819LL)) ? (((1010445971848312694LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))));
                var_17 = ((/* implicit */int) (unsigned char)27);
            }
        } 
    } 
    var_18 = ((/* implicit */short) (~(((((/* implicit */int) var_2)) | (var_9)))));
}
