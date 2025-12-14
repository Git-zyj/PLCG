/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40699
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_15 -= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)231))));
                arr_4 [14U] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
                                var_16 = ((/* implicit */signed char) ((unsigned char) min((max((((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2] [i_0] [i_4])), (5649185756223389371LL))), (((/* implicit */long long int) (signed char)-102)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_2))))))))));
    var_18 = ((/* implicit */int) var_14);
}
