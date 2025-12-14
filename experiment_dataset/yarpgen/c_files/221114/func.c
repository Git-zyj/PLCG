/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221114
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
    var_10 = ((/* implicit */_Bool) var_5);
    var_11 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) var_9)) / (((((/* implicit */_Bool) (unsigned short)42446)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)0)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned short) (unsigned short)0))) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */int) ((((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned char)244)))) != (var_8)))) : (((/* implicit */int) (unsigned short)65529))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)29))));
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_13 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((arr_3 [6ULL]), (min((arr_3 [(unsigned short)6]), (((/* implicit */unsigned int) arr_1 [5ULL]))))))) % (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)28364)) : (((/* implicit */int) (unsigned short)65535))))), (3658260036724724878ULL)))));
        var_14 *= ((/* implicit */unsigned char) var_1);
        var_15 -= ((/* implicit */int) arr_0 [i_1]);
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_7 [i_2] |= ((/* implicit */unsigned long long int) arr_5 [i_2] [(signed char)9]);
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                for (unsigned char i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)65518)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21208))) + (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [11U] [i_4] [i_5] [i_2]))))), (((/* implicit */unsigned long long int) (unsigned short)65535))));
                        var_17 = ((/* implicit */signed char) (-2147483647 - 1));
                        var_18 = ((/* implicit */int) arr_8 [i_5]);
                    }
                } 
            } 
        } 
    }
}
