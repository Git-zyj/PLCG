/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217893
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((var_1) / (((/* implicit */int) var_9)))) + (2147483647))) >> (((var_1) + (271226868)))));
                        var_13 *= ((/* implicit */unsigned char) ((((((var_5) + (2147483647))) >> (((((/* implicit */int) var_10)) + (87))))) > (((/* implicit */int) ((var_8) == (var_5))))));
                    }
                    arr_11 [i_2] [(_Bool)1] [(_Bool)1] [i_0] &= ((/* implicit */signed char) ((var_5) | (((var_3) | (((/* implicit */int) var_0))))));
                    var_14 = ((/* implicit */int) var_2);
                    arr_12 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) var_6);
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */unsigned int) var_10);
}
