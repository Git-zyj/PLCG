/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219393
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
    for (short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [1U] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((((1970017030) >> ((-(4294967294U))))) * (((/* implicit */int) ((((/* implicit */int) (short)19444)) != (501789590))))));
                    arr_9 [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)0)) ? (var_0) : (((/* implicit */unsigned int) 0)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)28971)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_3] [i_3] = ((unsigned short) (~(((/* implicit */int) (short)28971))));
                                arr_16 [15U] [i_1] [i_2] [i_4] [i_4 - 1] = ((/* implicit */unsigned short) ((unsigned int) 1U));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = (unsigned short)7341;
    var_13 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6395)))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) var_4)))) ? ((+(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) var_8))));
}
