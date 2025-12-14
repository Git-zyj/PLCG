/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248688
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min(((-(((/* implicit */int) (_Bool)1)))), ((+(((((var_2) + (2147483647))) << (((((/* implicit */int) var_4)) - (10387))))))))))));
                var_15 *= ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        for (int i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                var_17 = ((/* implicit */long long int) (+(arr_6 [i_2 + 3])));
            }
        } 
    } 
}
