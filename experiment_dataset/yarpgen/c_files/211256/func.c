/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211256
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
    var_20 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (short)-16884)) % (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) (short)-16876)) : (((/* implicit */int) var_0)))), (((/* implicit */int) max((((unsigned char) 4294967294U)), (((/* implicit */unsigned char) (signed char)(-127 - 1))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_21 += ((/* implicit */short) ((((/* implicit */int) (signed char)-110)) | (((/* implicit */int) (unsigned char)0))));
                    var_22 = ((/* implicit */int) (unsigned char)60);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) (signed char)(-127 - 1));
}
