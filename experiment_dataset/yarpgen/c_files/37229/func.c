/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37229
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
    var_18 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned short)32768)))), (((/* implicit */int) ((unsigned char) (unsigned char)0))))))));
    var_19 = min((((/* implicit */long long int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_14))))), (max((((/* implicit */long long int) var_13)), (min((1323896253486300517LL), (((/* implicit */long long int) (_Bool)0)))))));
    var_20 = ((/* implicit */int) ((unsigned long long int) (unsigned short)65535));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_5 [i_0] [i_0] [i_0] [i_0])))) ? ((+(((/* implicit */int) ((signed char) var_9))))) : (((/* implicit */int) arr_1 [i_0] [i_2]))));
                    var_22 *= ((/* implicit */long long int) 18446744073709551615ULL);
                }
            } 
        } 
    } 
}
