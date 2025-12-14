/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191876
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] |= ((/* implicit */unsigned char) 3544538981761757114LL);
                    var_17 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(3544538981761757130LL)))))))));
                    var_18 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) && (((/* implicit */_Bool) -3347927438766843266LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2]))) : (3544538981761757114LL)));
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1539989880U)))) ? (((((/* implicit */_Bool) 3347927438766843284LL)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((var_15) != (((/* implicit */long long int) var_1)))))))) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) var_16)));
}
