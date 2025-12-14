/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218477
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 481036337152ULL)))));
                    var_14 = ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_8)))))) ? (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) var_10))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_2]))) : (var_7))) : (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned short) var_0))))) : (min((((/* implicit */int) arr_0 [(unsigned short)15])), (var_11)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_3) / (((/* implicit */long long int) max((((/* implicit */unsigned int) var_5)), (var_7))))))))))));
    var_16 = ((/* implicit */short) min((min((((/* implicit */long long int) (+(((/* implicit */int) var_8))))), (min((((/* implicit */long long int) var_11)), (var_9))))), (((/* implicit */long long int) var_12))));
}
