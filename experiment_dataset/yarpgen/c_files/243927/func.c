/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243927
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_9))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)28310)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (var_4)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) max((min((max((var_4), (((/* implicit */int) var_3)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)8256)))))), ((~(((/* implicit */int) ((unsigned short) (unsigned short)57279)))))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-88)), (var_11)))) ? (max((arr_3 [i_2] [i_1]), (((/* implicit */unsigned int) -1358770006)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) min((var_1), ((unsigned char)122))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */int) var_2))))) ? (412477728) : (var_6))) : (var_7)));
    var_16 = ((/* implicit */int) ((_Bool) (+(((((/* implicit */_Bool) 1335951034)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))))));
}
