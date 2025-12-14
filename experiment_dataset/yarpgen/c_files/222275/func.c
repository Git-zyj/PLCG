/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222275
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
    var_19 = ((((_Bool) max((1733734983U), (((/* implicit */unsigned int) var_5))))) ? (min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) var_3)))) : (((/* implicit */int) var_14)));
    var_20 = ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)115))))) >= (var_6)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_21 = max((((((/* implicit */unsigned long long int) ((2561232299U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) * (6434730713889125898ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-7460))))) ? ((+(1733734983U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_10 [i_3 - 2] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)255))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_9))))) ? ((-(-8748712137194867181LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 - 1] [i_3 + 1] [(unsigned short)16] [i_0 - 2])))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_2)) : (615709852U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2561232313U)))))));
                        var_23 = ((/* implicit */unsigned long long int) arr_9 [i_0] [15] [0] [i_3]);
                        var_24 = ((/* implicit */signed char) (+((-(((((((/* implicit */int) (signed char)-121)) + (2147483647))) << (((2561232299U) - (2561232299U)))))))));
                    }
                } 
            } 
        } 
        var_25 -= ((/* implicit */signed char) ((unsigned short) (signed char)119));
    }
    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        arr_14 [i_4] [5] = ((/* implicit */short) var_4);
        var_26 = ((/* implicit */unsigned long long int) var_5);
    }
    var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
}
