/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203474
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
    var_15 = ((/* implicit */int) var_8);
    var_16 = ((/* implicit */long long int) var_7);
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) -1073741824);
                                var_19 *= ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_14))))));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */int) var_1);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_1)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                var_22 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) -1073741833)) ? (-4120068534164665721LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185))))));
            }
        } 
    } 
}
