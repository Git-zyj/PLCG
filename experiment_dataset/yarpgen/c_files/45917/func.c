/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45917
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
    for (short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0 - 2] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))));
                var_12 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (short)25141))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) max(((unsigned short)32514), (((/* implicit */unsigned short) var_9)))))) ? (((((((/* implicit */int) var_10)) - (((/* implicit */int) var_5)))) / (((((/* implicit */_Bool) (unsigned short)4188)) ? (((/* implicit */int) (short)25141)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_4))))))))));
}
