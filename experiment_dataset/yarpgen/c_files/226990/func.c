/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226990
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) 16777214);
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (signed char)0))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 &= ((/* implicit */short) (signed char)-88);
                                var_17 = ((/* implicit */unsigned short) var_10);
                                var_18 *= ((/* implicit */_Bool) (signed char)94);
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((long long int) (_Bool)0)), (((/* implicit */long long int) ((_Bool) var_3))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((long long int) (signed char)0));
                    var_21 &= ((/* implicit */unsigned long long int) ((long long int) (signed char)94));
                }
            } 
        } 
    } 
    var_22 = var_2;
}
