/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249910
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)125)), (1754409619)))) ? (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_11))))) : (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_7)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((((/* implicit */unsigned short) (short)-22540)), ((unsigned short)143))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            var_14 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned char)123)), (-4246972431328513351LL)));
            var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_0] [i_1 + 1])), (var_8)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1])))))))) & (((((/* implicit */int) (signed char)88)) | (((/* implicit */int) (unsigned char)119))))));
            arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_9) : (var_10)))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) var_6)) % (arr_5 [i_1] [i_1] [i_1]))), (((/* implicit */long long int) (+(var_8)))))))));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) var_1)))))), (var_10))))));
        }
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_17 ^= ((/* implicit */unsigned long long int) var_2);
            var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_2)), (min((((/* implicit */long long int) (unsigned short)65393)), (5926546181558538659LL)))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))) + (min((((/* implicit */long long int) ((((/* implicit */_Bool) -7)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)97))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_5 [i_0] [i_2] [i_2])))))));
            var_20 -= ((/* implicit */unsigned int) var_11);
        }
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) var_3);
            arr_12 [16LL] [(short)14] [i_3] |= var_7;
        }
        arr_13 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_4)))) | (((/* implicit */int) arr_9 [6ULL] [i_0] [i_0]))))), (((unsigned int) max((var_8), (((/* implicit */int) arr_11 [i_0])))))));
    }
    /* LoopSeq 1 */
    for (signed char i_4 = 2; i_4 < 9; i_4 += 3) 
    {
        var_22 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_6)) & (((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_4] [i_4]))))) ? (((((/* implicit */_Bool) arr_3 [i_4] [0ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_10 [i_4 + 1]))) : (((/* implicit */unsigned long long int) ((var_2) ? (var_8) : (((/* implicit */int) arr_14 [i_4] [i_4 - 2])))))))));
        var_23 = ((/* implicit */_Bool) arr_8 [14LL]);
        arr_17 [i_4] = ((/* implicit */short) var_1);
    }
}
