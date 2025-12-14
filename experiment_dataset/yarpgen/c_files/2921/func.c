/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2921
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_12 = var_3;
                var_13 ^= ((/* implicit */unsigned long long int) ((2000795501) / (((/* implicit */int) (short)(-32767 - 1)))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_14 = ((((/* implicit */_Bool) -1576341216)) ? (-670219513) : (-670219518));
                                var_15 = ((/* implicit */unsigned char) (~(((int) ((2139095040U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)7))))))));
                                var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) 5975386088709621594LL)) ? (var_0) : (((/* implicit */unsigned long long int) var_11))))))));
                                var_17 = ((/* implicit */unsigned char) var_0);
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2139095040U) * (((/* implicit */unsigned int) 670219512))))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) var_10)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) (short)24527)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21))) : (2155872256U)))));
}
