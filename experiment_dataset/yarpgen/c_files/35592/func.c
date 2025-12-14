/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35592
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (var_6)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 *= 0U;
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (4294967295U)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0 - 1]))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 7; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 0U)), (12825104120168698624ULL)));
                                arr_14 [(signed char)1] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_8))) <= (((/* implicit */int) (!(var_3))))))), (var_7)));
                                var_14 &= ((/* implicit */long long int) var_2);
                                arr_15 [i_0] [(_Bool)1] [i_2] [i_2 + 2] [i_2] [i_2 + 2] [i_2] = ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) << (((min((((/* implicit */unsigned long long int) var_8)), (var_1))) - (13631286140366410575ULL)))))));
    var_16 = ((/* implicit */unsigned short) var_8);
    var_17 = ((/* implicit */signed char) var_9);
}
