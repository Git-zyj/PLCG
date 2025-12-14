/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192150
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
    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_0))))), (((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */long long int) var_8)), (var_3)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [9U] [9U] [i_1] = ((/* implicit */signed char) min((var_3), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (signed char)41)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) arr_13 [(_Bool)1] [i_1] [2ULL] [2ULL] [(unsigned char)8]);
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0] [i_0] [16ULL]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
