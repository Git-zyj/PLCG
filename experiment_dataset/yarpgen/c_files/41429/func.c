/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41429
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))))));
    var_13 *= ((/* implicit */unsigned char) (unsigned short)14357);
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] |= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */signed char) arr_4 [i_0] [i_1] [i_1])))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_15 = (+(((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_2])));
                                var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)61234))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
