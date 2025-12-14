/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40002
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-33)), (3442153524555811089ULL)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (unsigned char)246))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_13 = 6687479172519128413ULL;
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned long long int) (short)14347);
            var_14 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)10)), (((((/* implicit */_Bool) (unsigned short)39312)) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        }
        var_15 ^= ((/* implicit */unsigned long long int) var_6);
        var_16 = ((/* implicit */_Bool) min((((/* implicit */short) arr_3 [i_0] [i_0])), (((short) arr_3 [i_0] [i_0]))));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((int) arr_0 [i_2] [(unsigned short)17]));
        var_18 = (~(((((unsigned long long int) arr_5 [i_2])) ^ (((((/* implicit */_Bool) (signed char)108)) ? (14285390988031007619ULL) : (12916876580897647415ULL))))));
    }
    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
    {
        arr_9 [i_3] [i_3] = ((/* implicit */unsigned int) var_8);
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_7 [i_3]))));
        arr_10 [i_3] [i_3 + 1] = ((/* implicit */unsigned long long int) var_6);
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-14352)) == (max((((((/* implicit */_Bool) (short)-15364)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) var_0)))), ((+(((/* implicit */int) (unsigned short)39312))))))));
        arr_12 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((unsigned long long int) arr_6 [i_3] [i_3])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [16ULL])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3 + 2] [i_3]))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_2 [i_3] [i_3] [i_3])));
    }
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        arr_15 [(unsigned short)21] = ((/* implicit */short) 18446744073709551612ULL);
        var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 14176701069301097102ULL)))))) : (min((343422605U), (((/* implicit */unsigned int) arr_14 [i_4]))))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_4))));
    }
}
