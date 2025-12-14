/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48003
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_1)), (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)23917))) & (var_9))))))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((long long int) (short)-31092)))))))));
                                var_17 = ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */_Bool) 17483483671563050157ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2))) : (963260402146501459ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 963260402146501459ULL)))))))));
                            }
                        } 
                    } 
                    var_18 = var_9;
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((((long long int) -1983204583)), (((/* implicit */long long int) (+(((((/* implicit */_Bool) -3770655684490463258LL)) ? (((/* implicit */int) (short)3847)) : (((/* implicit */int) (_Bool)1)))))))));
}
