/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202266
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
    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_18))) - (var_11)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)236)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) * (((((/* implicit */unsigned int) -1488070857)) / (arr_0 [i_0] [i_0]))))))));
        var_20 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))) <= ((+(((/* implicit */int) min(((unsigned short)8064), (((/* implicit */unsigned short) var_4)))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_21 = ((/* implicit */short) var_9);
        var_22 ^= ((/* implicit */unsigned int) var_3);
    }
    /* vectorizable */
    for (unsigned int i_2 = 3; i_2 < 16; i_2 += 3) 
    {
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    arr_15 [i_2] [i_2] [i_3] [i_2] = (+((~(2623860959U))));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) 2623860959U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)116)))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2623860950U)) ? (1671106346U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    }
    var_26 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((1671106337U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((-(2623860959U))) : (1671106346U)))));
    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)14296)))))))) ? (((/* implicit */unsigned long long int) var_16)) : ((~(10135122835173267649ULL))))))));
}
