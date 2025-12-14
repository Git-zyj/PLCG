/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35738
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 |= min((((((/* implicit */int) var_5)) + (arr_1 [i_0]))), (arr_1 [i_0]));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)44)))))) / (arr_1 [i_1]))))));
            var_18 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)220)), (((((/* implicit */_Bool) ((signed char) arr_0 [3ULL] [i_1]))) ? (arr_5 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)44)))))))));
        }
        for (unsigned int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            var_19 = ((/* implicit */_Bool) ((unsigned long long int) ((110325124U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22161))))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32750)))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 24; i_3 += 4) 
            {
                var_21 += ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) var_8)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_7 [i_2] [i_3 - 1])))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)5)) || (((/* implicit */_Bool) 4184642171U))))))) : ((((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [(unsigned char)2] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)8191)) && (((/* implicit */_Bool) 1230792345U)))))))));
                var_22 = ((/* implicit */unsigned char) (~(3769185346388790129ULL)));
            }
            var_23 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) & (((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 3])))) & (((((((/* implicit */int) arr_8 [i_2 + 2] [i_2 - 1])) + (2147483647))) << (((1230792330U) - (1230792330U)))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            var_24 = ((/* implicit */unsigned int) (unsigned char)101);
            var_25 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0]);
        }
    }
    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((signed char) (signed char)44))) ? (max((((/* implicit */unsigned long long int) var_6)), (18014398509481983ULL))) : (((/* implicit */unsigned long long int) var_12)))));
        var_27 |= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) (signed char)127)) - (127))))))) * (((/* implicit */int) (signed char)-70))));
    }
    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_9))));
    var_29 ^= ((/* implicit */short) (~(((((((/* implicit */_Bool) (unsigned char)100)) ? (var_13) : (var_13))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (-1462488891) : (((/* implicit */int) (unsigned short)65535)))))))));
}
