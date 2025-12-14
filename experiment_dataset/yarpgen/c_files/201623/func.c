/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201623
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_6))));
                var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)82))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_18 |= ((/* implicit */int) arr_3 [i_2] [12ULL]);
                            var_19 = max((((/* implicit */unsigned long long int) var_9)), (arr_8 [i_0] [i_2]));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_5);
}
