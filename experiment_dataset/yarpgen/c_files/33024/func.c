/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33024
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_20 -= ((/* implicit */unsigned char) (+(var_10)));
        var_21 += ((/* implicit */short) ((((/* implicit */int) (unsigned char)205)) >= (((/* implicit */int) var_16))));
        /* LoopNest 3 */
        for (signed char i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned char)94))))) ? (var_17) : (((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_3]))))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (_Bool)1)))))));
    }
    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_13))))));
    var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) ((var_15) || (((/* implicit */_Bool) var_13))))), (var_16))))));
    var_27 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) -875237578)) ? (((/* implicit */int) var_15)) : (var_6)))));
}
