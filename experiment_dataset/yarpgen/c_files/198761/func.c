/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198761
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)63)) & ((~(((/* implicit */int) (unsigned short)3))))))) ? (((/* implicit */int) (signed char)-68)) : (((1103274486) / (((/* implicit */int) (unsigned short)15413))))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_1 [i_0] [10])))), (((((/* implicit */int) (short)5139)) * (((/* implicit */int) (unsigned short)15409)))))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)15414)), (((((/* implicit */int) arr_2 [i_0])) * (625466285)))))) ? (((/* implicit */int) (_Bool)1)) : (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [19U] [i_0])))) ? (((2147483647) - (((/* implicit */int) (unsigned short)15409)))) : (((/* implicit */int) arr_2 [i_0]))))));
        var_17 = ((/* implicit */unsigned int) ((signed char) ((arr_2 [i_0]) || (arr_2 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_18 += ((/* implicit */signed char) ((long long int) (unsigned short)50104));
        var_19 *= ((/* implicit */unsigned short) ((arr_2 [i_1]) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) (short)-32645)) != (((/* implicit */int) (unsigned char)63))))), (((unsigned char) (short)-19483)))))));
    }
    for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
    {
        arr_10 [(signed char)2] [i_2] |= ((/* implicit */signed char) ((((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned short)49152)))), (131648671)))) < (((((/* implicit */_Bool) (+(-625466285)))) ? (arr_9 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2]))))))))));
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)24)) != (625466280))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)81))) : (max((((((/* implicit */_Bool) 1389380925)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))) : (3742826423959485134LL))), (((/* implicit */long long int) (signed char)127))))));
    }
    var_21 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_11) ^ (((/* implicit */int) (unsigned char)81)))))));
    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)32644))))) || ((_Bool)1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -625466285)) ? (-1787122154) : (((/* implicit */int) (signed char)-76))))) : (((((-1956172759164800430LL) + (9223372036854775807LL))) << (((((/* implicit */int) (short)32635)) - (32635)))))));
    var_23 ^= ((/* implicit */unsigned char) 18446744073709551593ULL);
    var_24 = ((/* implicit */long long int) var_12);
}
