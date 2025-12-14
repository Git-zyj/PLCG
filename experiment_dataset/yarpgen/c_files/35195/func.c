/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35195
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */unsigned int) arr_5 [8LL]);
                arr_6 [(unsigned short)9] [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (short i_3 = 2; i_3 < 8; i_3 += 2) 
        {
            {
                arr_12 [i_2] [i_2] [i_2] &= ((/* implicit */signed char) arr_5 [i_3]);
                var_18 ^= ((/* implicit */unsigned char) arr_3 [i_3] [i_3 + 2]);
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_14);
    var_20 = ((/* implicit */unsigned int) var_14);
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_5))));
}
