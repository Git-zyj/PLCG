/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233660
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) : (((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44196)))))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((unsigned int) var_12)))))));
                    var_18 = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_3)) | (((/* implicit */int) var_9)))) : (((/* implicit */int) var_5)));
                    var_19 ^= ((/* implicit */long long int) var_13);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 1837853090U)) && (((/* implicit */_Bool) var_4))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-38)) + (((/* implicit */int) (signed char)-38))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 *= var_14;
}
