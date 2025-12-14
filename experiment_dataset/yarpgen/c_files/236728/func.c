/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236728
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
    var_12 -= ((/* implicit */signed char) max((min((var_2), (((/* implicit */unsigned int) max((var_0), (((/* implicit */unsigned short) var_1))))))), (((/* implicit */unsigned int) var_8))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((_Bool) ((long long int) ((((/* implicit */_Bool) arr_1 [1LL])) ? (arr_3 [i_0 - 1] [17LL] [(_Bool)1]) : (((/* implicit */unsigned long long int) arr_5 [(short)2] [i_1])))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_14 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_0] [i_3])), ((+(((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                            arr_12 [i_1] [i_3] = ((/* implicit */unsigned short) ((4294901760ULL) - ((+(arr_3 [i_1] [i_2] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
