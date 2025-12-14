/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218322
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
    var_11 = ((/* implicit */unsigned short) var_7);
    var_12 -= (~(((/* implicit */int) var_4)));
    var_13 = ((/* implicit */long long int) 17907880828880771086ULL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)125)), (arr_1 [i_0] [i_1]))))));
                var_15 = ((/* implicit */_Bool) 784104368);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_2)))))));
                    var_17 = ((/* implicit */long long int) (short)-30691);
                }
            } 
        } 
    } 
}
