/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30588
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
    var_12 &= ((/* implicit */unsigned int) var_4);
    var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)6144))));
    var_14 = ((/* implicit */_Bool) ((unsigned long long int) (~(min((-645207724), (((/* implicit */int) (short)255)))))));
    var_15 = ((/* implicit */signed char) var_6);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) (short)-256)) + (2147483647))) << (((((((/* implicit */int) min((((/* implicit */short) (signed char)-64)), ((short)264)))) + (82))) - (18)))));
                    arr_9 [i_0] = ((/* implicit */signed char) ((((var_11) == (((/* implicit */unsigned long long int) 1356918264U)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126)))));
                }
            } 
        } 
    } 
}
