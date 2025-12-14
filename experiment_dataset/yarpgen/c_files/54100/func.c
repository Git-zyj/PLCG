/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54100
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
    var_10 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (((((/* implicit */_Bool) var_6)) ? (var_7) : (var_4))))) & (((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 4294967283U))))) ? ((+(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_4)) < (var_0)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_11 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)30254)) * (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (var_6) : (((/* implicit */unsigned int) var_5))))))));
                    var_12 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_13 *= ((/* implicit */unsigned char) -9223372036854775783LL);
}
