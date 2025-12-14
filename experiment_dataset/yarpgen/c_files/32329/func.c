/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32329
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
    var_11 |= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_2));
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_8))));
    var_13 = ((/* implicit */unsigned char) 606272390);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_7))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_2] [i_4] = ((/* implicit */signed char) (!((_Bool)0)));
                                arr_17 [i_4] = ((/* implicit */int) ((unsigned short) min((var_6), (var_2))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
