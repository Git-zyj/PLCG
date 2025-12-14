/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23164
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
    var_15 -= ((/* implicit */signed char) var_11);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 += ((/* implicit */signed char) ((((int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)15))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)26)), ((unsigned char)7)))))))));
                    var_17 += ((/* implicit */_Bool) ((signed char) arr_4 [i_0] [i_0] [i_0 + 4]));
                    var_18 *= ((/* implicit */long long int) arr_5 [i_1]);
                    var_19 ^= ((/* implicit */unsigned char) min((var_4), (((/* implicit */int) (_Bool)1))));
                    var_20 = max((((/* implicit */int) (_Bool)1)), (2020733659));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
}
