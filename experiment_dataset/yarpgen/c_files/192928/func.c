/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192928
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_10 = ((((/* implicit */_Bool) (signed char)-108)) && (((/* implicit */_Bool) arr_8 [i_2])));
                            arr_13 [(unsigned short)6] [12] [22] &= ((((/* implicit */int) (!(((/* implicit */_Bool) 3528731324U))))) < ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [18] [i_2 + 1] [i_2 + 1])) || ((_Bool)1)))))));
                        }
                    } 
                } 
                var_11 *= ((/* implicit */signed char) arr_7 [i_0] [i_1] [(unsigned short)2] [8]);
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 2758870055U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_7))))) : (var_5))));
}
