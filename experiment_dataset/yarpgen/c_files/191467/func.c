/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191467
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (var_7)))) : (var_3)))) - (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-18912))))) ? (max((((/* implicit */long long int) var_5)), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0 + 2] = ((/* implicit */signed char) ((unsigned char) var_0));
                arr_5 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 15; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                arr_12 [8LL] [i_2] [8LL] |= ((/* implicit */signed char) arr_9 [(unsigned char)8] [6U]);
                arr_13 [i_2] = ((/* implicit */short) var_7);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) var_8);
}
