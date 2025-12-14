/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19030
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
    var_18 ^= ((/* implicit */unsigned long long int) var_12);
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)12121)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-14380))))) : (((((/* implicit */_Bool) 2139095040)) ? (((/* implicit */unsigned long long int) var_8)) : (var_2))))), (((/* implicit */unsigned long long int) var_4)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))) ? (max((var_16), (((/* implicit */int) arr_1 [i_0 - 1] [i_0])))) : (((/* implicit */int) arr_0 [i_0 - 1]))));
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            var_20 = ((/* implicit */short) arr_5 [i_1] [i_0] [(unsigned char)4]);
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (short)-6048)) >= (((/* implicit */int) arr_0 [i_1])))))))) ? (((((/* implicit */_Bool) (short)14375)) ? (((/* implicit */int) (short)14379)) : (1431295706))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)19345)) - (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) arr_5 [(unsigned short)5] [i_0] [i_0])))) : ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
        }
        for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (short)14379);
            arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (unsigned char)31))));
            arr_11 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))))) ? (((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_2] [i_2])))))) : (((/* implicit */int) ((short) var_4))))), (((/* implicit */int) (short)6048))));
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0 - 1]);
            arr_13 [i_0] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 - 1]))) : (var_5)))));
        }
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_21 |= ((/* implicit */unsigned char) var_3);
            arr_16 [i_3] [i_3] [i_3] |= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_3]) ? (((/* implicit */int) arr_7 [14LL] [i_3] [i_0 - 1])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-6048))))) ? (((((/* implicit */_Bool) (signed char)-38)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6022))))) : (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0] [i_0])) ? (105553116266496ULL) : (((/* implicit */unsigned long long int) 2383349051U))))))));
        }
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4961376618826510286ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))))));
        var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_8 [i_0])))) << (((/* implicit */int) (signed char)0))))) || (((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (short)-12121))) - (0LL))))))));
        var_24 = ((/* implicit */unsigned char) -21LL);
    }
}
