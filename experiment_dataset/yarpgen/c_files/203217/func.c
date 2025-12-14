/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203217
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
    var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (var_13))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_10 [i_0] [i_1] [10U] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)31623))));
                    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5952735204427330849ULL))));
                    var_20 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned char)255))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 8; i_3 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) var_9);
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_1 - 3] [i_3 - 1])) >= (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)35683)) : (((/* implicit */int) var_12))))));
                }
            }
        } 
    } 
}
