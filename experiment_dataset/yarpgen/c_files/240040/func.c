/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240040
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
    var_13 &= ((/* implicit */_Bool) (signed char)-112);
    var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) (~(((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))) != (4294967295U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [(short)8]))) : (arr_6 [i_4 - 2] [i_3 + 3] [i_2 + 3] [i_0])))));
                                arr_11 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */signed char) var_9);
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) ((unsigned int) (~(arr_1 [i_0] [i_1 - 1]))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((short) var_7))) : (((/* implicit */int) ((signed char) (signed char)-113))))))));
}
