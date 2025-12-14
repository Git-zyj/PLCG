/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230942
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
    var_10 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (short)32743)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) var_0);
                var_12 = ((/* implicit */short) min((((((((/* implicit */int) (short)6144)) | (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_6))))))), (((/* implicit */int) max((arr_6 [i_0] [i_1]), (((/* implicit */short) arr_4 [i_0] [i_1] [i_0])))))));
                arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1])) ^ (((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1])))) : (((((/* implicit */int) arr_6 [i_0] [i_1])) >> (((((/* implicit */int) arr_6 [i_0] [i_1])) - (4492)))))));
                var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0]))))) && (((/* implicit */_Bool) max(((short)2), ((short)-6144)))))) || (((/* implicit */_Bool) var_9))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_3)), (var_4))), (((var_9) + (((/* implicit */int) var_2))))));
    var_15 = ((/* implicit */short) var_7);
}
