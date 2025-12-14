/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39161
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
    var_17 ^= ((/* implicit */_Bool) var_16);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (var_16)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)56)))), ((~(((/* implicit */int) var_7))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) ((arr_4 [i_2] [i_1]) ? (0LL) : (min((((/* implicit */long long int) (unsigned char)77)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237)))))))));
                    var_20 *= ((/* implicit */unsigned int) var_0);
                }
            }
        } 
    } 
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_15)), (var_4)))) ? (((/* implicit */int) ((_Bool) (short)16383))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) var_10)))))))));
    var_22 = ((/* implicit */unsigned char) max((min((524280U), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) (unsigned char)179))));
}
