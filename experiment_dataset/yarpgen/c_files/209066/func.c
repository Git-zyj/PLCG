/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209066
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) % (((/* implicit */int) arr_1 [i_0])))) > (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_0 [i_1]), ((unsigned char)227)))))))));
                var_12 = ((/* implicit */_Bool) (unsigned char)122);
                var_13 = ((/* implicit */unsigned char) (~(1833762092U)));
            }
        } 
    } 
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1833762092U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)945))))))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned int) (unsigned short)41303)), (1833762092U)))))));
}
