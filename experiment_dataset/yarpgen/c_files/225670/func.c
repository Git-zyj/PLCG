/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225670
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
    var_14 = ((/* implicit */int) 15357170181297437222ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_0 [i_0 - 3]))));
                var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))) + (((long long int) arr_2 [i_0 - 3] [i_0 - 3] [i_1]))));
                var_17 = ((/* implicit */unsigned int) (_Bool)0);
                arr_5 [i_0 + 1] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 15769641590186527303ULL)) ? (((arr_3 [i_1]) ? (((/* implicit */int) arr_2 [(short)0] [(short)0] [i_0])) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) (unsigned char)31)) | (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)224))))))))));
}
