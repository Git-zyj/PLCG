/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208368
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) 1366732327U))));
                arr_7 [(_Bool)1] = ((/* implicit */unsigned short) (~(min((var_8), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3546458590U)) ? (10754376013073073749ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118)))));
                    arr_14 [i_2] = ((/* implicit */long long int) var_3);
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */unsigned char) var_6);
}
