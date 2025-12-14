/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203375
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
    var_17 += ((/* implicit */signed char) var_4);
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
    var_19 = ((/* implicit */int) var_15);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [(unsigned char)15] [i_0] = ((/* implicit */int) (~(var_6)));
                    var_20 = ((/* implicit */unsigned short) var_1);
                    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)4980))));
                }
            } 
        } 
        arr_7 [(unsigned short)6] [(unsigned short)6] &= ((/* implicit */int) (+(var_16)));
        var_22 *= ((/* implicit */_Bool) (+((~(((((/* implicit */int) var_0)) & (((/* implicit */int) var_4))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 3; i_3 < 14; i_3 += 2) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)40494)) - (40492)))));
        arr_11 [i_3 + 3] &= (-((+(var_8))));
        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_13)) + (2147483647))) >> (((/* implicit */int) var_10))));
        var_24 = ((/* implicit */unsigned short) var_16);
    }
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_25 = ((/* implicit */int) (~(var_16)));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), ((((+(var_6))) - (((/* implicit */unsigned long long int) (-(var_8))))))));
        var_27 = ((/* implicit */int) (((+(var_16))) == (((/* implicit */unsigned long long int) ((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
    }
}
