/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50272
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (+(max((var_8), (((/* implicit */long long int) max((1413323584U), (var_5))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((short) min((-1580250373), (((/* implicit */int) arr_0 [i_0] [i_4 - 1])))));
                                arr_18 [i_0] [i_1] [i_1] [i_1] [3LL] [i_1 + 1] [i_1] = ((/* implicit */signed char) (((~(((var_2) & (((/* implicit */long long int) 2147483647)))))) & (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_9);
}
