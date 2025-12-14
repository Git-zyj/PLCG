/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227330
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned char) (~(((max((((/* implicit */unsigned int) var_11)), (var_13))) | (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned char) (signed char)-17))))))))));
                    arr_10 [i_0] [i_0] [(signed char)6] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (unsigned char)191))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1])))) : (((/* implicit */int) arr_7 [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_7);
}
