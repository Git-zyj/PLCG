/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239464
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
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) var_13);
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20319)) ? (((/* implicit */unsigned long long int) -98652022)) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) : (((((/* implicit */_Bool) (short)20313)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18465))))))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((max((0ULL), (((/* implicit */unsigned long long int) 1546655401)))) < (((/* implicit */unsigned long long int) ((long long int) ((short) var_1)))))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */short) var_12);
}
