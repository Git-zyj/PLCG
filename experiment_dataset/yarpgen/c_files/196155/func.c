/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196155
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_14 ^= ((/* implicit */signed char) (((+(((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)214)) / (var_1)))) ? (((var_1) >> (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_7)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (-557094570)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                                var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((~(-6588056903469943019LL))) - (((/* implicit */long long int) min((-115471670), (((/* implicit */int) (signed char)-95))))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)93))))))))));
                    var_17 = ((/* implicit */unsigned long long int) (~((((~(((/* implicit */int) var_9)))) ^ (((/* implicit */int) (unsigned short)29801))))));
                }
            } 
        } 
    } 
    var_18 = min((((/* implicit */long long int) ((((/* implicit */int) max(((unsigned char)4), (((/* implicit */unsigned char) var_2))))) >> ((((~(var_0))) - (1632774636676429257LL)))))), (max((5808991831335035308LL), (((/* implicit */long long int) 1668502661)))));
}
