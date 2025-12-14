/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/281
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)107)))) - (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (var_4))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_9)) + (13620)))));
    var_13 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)-104)) ^ (((/* implicit */int) (unsigned short)43438))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) (~(((int) arr_8 [i_0] [i_1] [i_2] [i_0 + 1]))));
                    arr_10 [i_0] |= ((/* implicit */unsigned short) arr_9 [i_1]);
                }
            } 
        } 
    } 
}
