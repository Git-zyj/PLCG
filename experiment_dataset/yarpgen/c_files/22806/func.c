/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22806
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
    var_15 = ((/* implicit */unsigned int) (unsigned short)35414);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_4)) | (var_3))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)62112)) | (((/* implicit */int) (signed char)(-127 - 1))))) % (468903601))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 0ULL)))) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)30622))))))))));
                                var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))))), ((~(1165427670U)))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_8))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)21739))) ? (((1165427669U) / (((/* implicit */unsigned int) -1)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_12)))));
            }
        } 
    } 
}
