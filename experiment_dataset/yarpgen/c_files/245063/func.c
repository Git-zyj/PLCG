/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245063
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
    var_13 = ((/* implicit */unsigned int) (signed char)-124);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)142))));
                arr_5 [i_1] [(_Bool)1] = ((/* implicit */_Bool) 2299980070U);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((unsigned char) (~(((2845349811U) & (3921965613U))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_6 [i_2 + 2])) : (((/* implicit */int) var_12))))) ? (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)248)))) : (((/* implicit */int) (signed char)23))));
            }
        } 
    } 
}
