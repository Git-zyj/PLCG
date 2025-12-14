/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225850
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) var_3);
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((((var_2) + (((/* implicit */long long int) var_5)))) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))) > (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1]))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (~(((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 13; i_2 += 3) 
    {
        for (long long int i_3 = 4; i_3 < 13; i_3 += 3) 
        {
            {
                arr_12 [i_3] [i_3 + 1] [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((arr_7 [i_2 - 1] [i_3]), (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0)))));
                var_18 ^= ((/* implicit */signed char) (+((-(((((/* implicit */int) var_12)) - (((/* implicit */int) var_1))))))));
            }
        } 
    } 
}
