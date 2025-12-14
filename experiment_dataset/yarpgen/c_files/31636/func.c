/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31636
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) 2838019411U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129))) : (792255167U))) == (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) + (var_4)));
    var_19 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)10))))) >= (((/* implicit */int) var_16))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)7571))));
                    arr_8 [i_2] [i_1] [0ULL] = ((/* implicit */int) (short)13887);
                    var_21 -= ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0 + 1]);
                }
            } 
        } 
    } 
}
