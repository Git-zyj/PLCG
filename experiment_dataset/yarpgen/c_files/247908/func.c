/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247908
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173)))))) ? ((~(var_5))) : (var_5))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (var_4)))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_4 [i_2 + 2]) : (arr_4 [i_2 - 1])));
                        var_22 += ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_3] [i_3] [i_2 + 2]))));
                        var_23 *= ((/* implicit */unsigned char) var_18);
                        var_24 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned char)57)) * (((/* implicit */int) ((-135841256) != (((/* implicit */int) (signed char)-99)))))));
                        var_25 = ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_0] [i_0]);
                    }
                }
            } 
        } 
        arr_14 [i_0] [i_0 + 2] = ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) (unsigned char)232)))));
    }
}
