/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217662
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_16))) ? (var_1) : (((/* implicit */unsigned long long int) ((long long int) arr_2 [10ULL] [10ULL] [i_1])))));
                arr_4 [i_1] [i_0] = ((/* implicit */int) var_14);
                arr_5 [8LL] [i_1] [(short)23] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 4093163036U)) || (((/* implicit */_Bool) 201804259U)))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned int) var_7);
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1515))))), (201804240U)));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
        {
            {
                arr_11 [i_3] = ((/* implicit */int) arr_8 [i_3 + 1] [i_3] [i_3 + 1]);
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (-(((long long int) (+(arr_1 [i_2])))))))));
            }
        } 
    } 
}
