/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215636
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) ((unsigned char) 8849356927840064730ULL));
                        var_18 = ((/* implicit */short) (_Bool)1);
                    }
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) min((var_8), (((/* implicit */signed char) (_Bool)1)))))) || (((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
    var_21 = ((/* implicit */_Bool) var_5);
    var_22 |= ((/* implicit */unsigned long long int) var_16);
    var_23 = ((/* implicit */short) (((!(((/* implicit */_Bool) -4099946257870477110LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((long long int) var_16))));
}
