/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244735
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
    var_17 = ((/* implicit */int) max((((long long int) var_4)), (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)32)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) 1848912364U);
                            var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-33))));
                            arr_15 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_9 [i_0 + 1] [13U] [i_1] [i_1 + 2]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)18832))));
                                var_21 = 2019717933;
                                var_22 = ((/* implicit */short) (unsigned char)8);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
