/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202482
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0]))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15806)))))) % (arr_2 [i_0]))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */short) (((-(((((/* implicit */_Bool) arr_2 [i_2])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) & (max((-21LL), (((/* implicit */long long int) arr_3 [i_0]))))));
                                var_14 = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) (short)-18878)), ((+(18446744073709551615ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)5680))));
}
