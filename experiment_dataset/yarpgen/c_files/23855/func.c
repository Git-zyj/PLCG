/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23855
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_11))))), (min((((/* implicit */unsigned int) (unsigned short)52615)), (var_3)))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) var_10))));
                var_14 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)12921))))) : (((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) : (219993377U)))))));
            }
        } 
    } 
    var_15 = var_6;
}
