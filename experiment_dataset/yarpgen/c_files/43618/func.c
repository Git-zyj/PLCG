/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43618
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
    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((int) ((unsigned int) var_0))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [(unsigned char)5] [i_3] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) var_8);
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)127)), (3534041732U)))) ? ((-(((/* implicit */int) ((unsigned char) (signed char)-22))))) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_3] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) var_4)), ((-(((/* implicit */int) (signed char)12))))));
}
