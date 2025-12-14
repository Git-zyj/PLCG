/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21740
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_1 + 2])))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((arr_1 [i_0] [i_1]) / (((/* implicit */unsigned long long int) var_4))))))) ? (arr_3 [i_0] [i_0] [i_0]) : (var_16)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((int) max((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (unsigned char)27)) : (arr_4 [i_2]))), (arr_4 [i_2]))));
                var_22 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_4 [i_2])) : (6ULL)))) ? ((~((-2147483647 - 1)))) : (arr_7 [i_2]))));
            }
        } 
    } 
}
