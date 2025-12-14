/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33042
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-60)), ((unsigned char)13)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((_Bool) arr_2 [i_1] [i_1] [i_0]))))) : (arr_0 [i_0]));
                arr_4 [(unsigned char)14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_9), (var_5)))) % ((-(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)-43)), ((short)26482))))) : (max((min((((/* implicit */unsigned int) var_8)), (arr_0 [i_1]))), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0]))))));
                var_16 = (+(arr_0 [i_0]));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_2)))) / (((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
}
