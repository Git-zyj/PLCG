/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19959
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
    for (long long int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_0 - 4] [i_0 - 4] [i_2] [i_2] = ((((/* implicit */_Bool) ((min((2121781487060118296LL), (((/* implicit */long long int) (unsigned short)24764)))) | (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 2])) >= (((/* implicit */int) arr_3 [i_0 + 2])))))) : (((unsigned int) arr_2 [i_0 + 1])));
                    var_19 = ((/* implicit */int) (((-(var_8))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)12))) < (-2121781487060118303LL))))));
                    arr_9 [i_1 + 1] [(unsigned char)14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 3] [i_1 + 1] [(unsigned char)16])) : (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_1 + 1] [i_1 + 1]))))) : (19U)));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 3; i_3 < 23; i_3 += 4) 
    {
        arr_14 [i_3] [(unsigned short)23] = ((/* implicit */unsigned int) (short)-7983);
        var_20 = ((/* implicit */unsigned long long int) ((-2121781487060118292LL) ^ (((/* implicit */long long int) 294577281))));
        var_21 = ((/* implicit */signed char) arr_11 [i_3]);
    }
}
