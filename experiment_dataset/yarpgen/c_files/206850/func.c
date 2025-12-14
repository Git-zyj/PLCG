/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206850
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 4047330698U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) : (7770651998906423584ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : ((+(arr_6 [i_0])))))));
                    var_20 -= ((((/* implicit */int) (signed char)90)) / (((/* implicit */int) (unsigned char)1)));
                }
            } 
        } 
    } 
    var_21 = ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15)));
}
