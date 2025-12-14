/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238701
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
    var_10 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (((unsigned int) var_8))))), (((long long int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */short) min((((/* implicit */int) arr_2 [i_1] [i_1])), (1646983093)));
                            var_12 = ((/* implicit */unsigned int) ((int) (+(arr_7 [i_0] [i_1] [i_2]))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) | (4529889684972589716LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) / ((-(((/* implicit */int) var_8))))))) > (var_2))))));
}
