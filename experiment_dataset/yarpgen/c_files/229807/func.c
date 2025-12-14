/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229807
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
    for (short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)18] [i_1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (short)18408)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [14LL] [i_1]))))))))))));
                var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_0 + 2] [i_0 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? ((+(((36169322U) >> (((((/* implicit */int) (unsigned short)40764)) - (40763))))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) (short)14121)) : (((/* implicit */int) arr_0 [i_0] [(_Bool)1])))), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0)))))))));
            }
        } 
    } 
    var_13 -= ((/* implicit */unsigned long long int) ((short) var_9));
    var_14 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) <= ((+(var_7))))))));
}
