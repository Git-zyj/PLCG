/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236495
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_19 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? ((~(((/* implicit */int) (signed char)10)))) : (((/* implicit */int) max((var_3), (var_16))))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((short) var_18))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_11 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) var_2);
                                arr_12 [i_0] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((unsigned long long int) var_8)))))));
                            }
                        } 
                    } 
                } 
                var_20 = var_15;
            }
        } 
    } 
    var_21 = ((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))));
    var_22 = ((/* implicit */unsigned long long int) var_4);
}
