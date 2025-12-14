/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44532
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
    var_16 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) 2147483647))))) ? ((~(2147398061))) : (((/* implicit */int) (unsigned char)230)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) (signed char)127);
        var_18 = ((/* implicit */unsigned long long int) ((long long int) 2333238102649751401LL));
        var_19 = ((/* implicit */short) (+((+((-2147483647 - 1))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)213)) && (((/* implicit */_Bool) (signed char)105))))) - (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)238))))));
                    arr_11 [i_0] = (+(((int) (short)-21931)));
                    var_20 = ((/* implicit */_Bool) var_7);
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) (short)-21959)))))));
                }
            } 
        } 
    }
    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)39)) + (((/* implicit */int) (short)21958)))) >> (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_0)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) : ((~(((long long int) var_0))))));
}
