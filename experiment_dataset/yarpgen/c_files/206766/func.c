/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206766
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
    var_10 = ((/* implicit */short) (~(((((/* implicit */int) var_1)) ^ (((/* implicit */int) min((var_9), (var_5))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned int) var_5);
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_11 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_1] [i_2 + 1])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (var_3)))))) : (var_7)));
                            var_12 = (+(arr_8 [i_0 - 1] [i_2 + 1] [i_3]));
                            var_13 = ((/* implicit */short) (~(((/* implicit */int) var_3))));
                            var_14 = ((/* implicit */long long int) min(((+(((/* implicit */int) max((((/* implicit */signed char) var_3)), (var_2)))))), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) var_3))))))));
                            var_15 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_11 [i_2 + 1] [i_0 - 1] [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
