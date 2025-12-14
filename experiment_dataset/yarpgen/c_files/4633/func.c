/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4633
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) var_7)))))))), (var_3))))));
    var_13 = ((_Bool) ((((/* implicit */int) min(((unsigned short)18994), (((/* implicit */unsigned short) var_1))))) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) var_0)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) (unsigned short)18994)) : (((/* implicit */int) (unsigned char)255))))) ? (max((((/* implicit */int) ((signed char) 1023))), ((+(var_5))))) : (((/* implicit */int) (unsigned char)6))));
                    var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) arr_5 [i_0] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46551)) ? (((/* implicit */int) (unsigned short)65535)) : (855978152)))) ? (-855978153) : (-2031436571)))));
                }
            } 
        } 
    } 
}
