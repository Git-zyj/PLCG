/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232339
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
    var_10 = ((/* implicit */int) min((var_10), (((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((signed char) (+(-26330335)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_11 |= ((/* implicit */unsigned char) min(((signed char)-58), (((/* implicit */signed char) var_8))));
                    arr_9 [i_0] [i_2] = ((/* implicit */int) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (-8506241926331765942LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-115)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (((arr_0 [i_0] [i_1]) >> (((((/* implicit */int) var_2)) - (141)))))))));
                    arr_10 [i_2] [3U] [3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58))) | (var_0)))) ? (((/* implicit */int) arr_3 [i_2])) : (((((/* implicit */_Bool) ((unsigned int) arr_8 [i_0] [i_0] [i_1 + 4] [i_2]))) ? (((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_4 [i_1])) + (94))))) : (((((/* implicit */int) (signed char)126)) >> (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_12 = var_8;
    var_13 = ((/* implicit */long long int) (~(var_0)));
}
