/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205956
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 6139123511903924034LL)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (unsigned char)233))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? ((-(((/* implicit */int) (unsigned char)32)))) : (((/* implicit */int) (unsigned char)46))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)106))));
                arr_10 [i_2] [i_2] [i_3] = max((((/* implicit */int) ((unsigned char) (unsigned char)23))), ((-(((/* implicit */int) (unsigned char)23)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_6);
}
