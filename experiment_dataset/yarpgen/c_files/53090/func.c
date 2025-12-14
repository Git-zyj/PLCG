/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53090
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */int) var_3)) + (((/* implicit */int) var_1)))) < (var_7)))) >= (((/* implicit */int) var_0)))))));
    var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) ((long long int) var_5))) ? (var_10) : (max((var_8), (((/* implicit */int) var_0)))))) < (var_7)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) max((var_9), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_6), (var_6)))) || (((/* implicit */_Bool) min((var_10), (((/* implicit */int) var_11))))))))));
                arr_5 [(short)21] = ((/* implicit */long long int) min((((var_12) % (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)237)) + (((/* implicit */int) (signed char)127))))))))));
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) min(((unsigned short)18766), (((/* implicit */unsigned short) arr_2 [i_1] [i_0]))))) >> (((((/* implicit */int) arr_0 [(unsigned char)14])) - (82))))) > (((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), (((short) var_6)))))));
            }
        } 
    } 
}
