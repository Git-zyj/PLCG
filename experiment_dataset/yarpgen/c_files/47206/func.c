/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47206
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) (unsigned char)175))));
                arr_5 [(_Bool)1] [i_1] = ((/* implicit */unsigned int) (~(max((var_5), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)81)) >> (((/* implicit */int) var_8)))))))));
                arr_6 [i_1] [i_0] = ((/* implicit */signed char) var_11);
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned short) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)104), ((unsigned char)151)))))));
}
