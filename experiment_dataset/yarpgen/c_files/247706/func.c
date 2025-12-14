/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247706
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) -2010839803);
                var_20 ^= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_9)))) ^ (((/* implicit */int) arr_4 [i_0] [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) var_10);
                arr_10 [i_2] [i_2] = min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_9)), (var_17)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_3]))) : (arr_0 [(unsigned char)19] [i_3]))))))), (((((/* implicit */_Bool) -2010839799)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_15))));
            }
        } 
    } 
}
