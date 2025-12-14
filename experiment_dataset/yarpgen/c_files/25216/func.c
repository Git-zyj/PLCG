/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25216
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
    var_11 += ((/* implicit */short) (unsigned char)28);
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)34))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) && (((/* implicit */_Bool) var_6))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_13 += (_Bool)1;
                arr_5 [i_0] [(unsigned char)6] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_3)))))));
            }
        } 
    } 
}
