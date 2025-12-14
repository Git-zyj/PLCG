/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40842
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))));
                                arr_16 [i_0] [i_1] [17ULL] [i_3] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) 1073741824U)), (var_14)))))) ? (((/* implicit */long long int) -3)) : (0LL)));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) 21);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_13);
    var_20 = ((/* implicit */unsigned char) max((10), (((/* implicit */int) (unsigned short)58090))));
}
