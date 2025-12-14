/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33216
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
    var_15 -= ((/* implicit */unsigned short) var_14);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] = var_12;
                                var_16 = ((/* implicit */_Bool) min((var_16), (((((var_10) & (var_12))) != (-2676026271296093648LL)))));
                                var_17 = ((/* implicit */unsigned int) -2676026271296093646LL);
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_8))));
                                var_19 = ((/* implicit */long long int) var_4);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)21547)) ? (-597196047881882187LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    arr_13 [i_0 + 2] [i_0 + 2] = 9223372036854775787LL;
                    arr_14 [i_2] = ((/* implicit */_Bool) var_6);
                }
            } 
        } 
    } 
    var_21 -= ((((/* implicit */long long int) ((/* implicit */int) ((var_13) != (-5575303824211257015LL))))) - (min((((/* implicit */long long int) var_1)), (var_10))));
    var_22 ^= -2676026271296093633LL;
}
