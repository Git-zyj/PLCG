/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242879
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (max((max((((/* implicit */long long int) (unsigned char)162)), ((-9223372036854775807LL - 1LL)))), (9223372036854775807LL)))));
    var_12 = 9223372036854775807LL;
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            arr_6 [i_1 - 3] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            var_13 = ((/* implicit */signed char) var_7);
        }
        for (short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_14 = ((/* implicit */signed char) arr_1 [i_2]);
            arr_9 [5U] [i_2] [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + ((-9223372036854775807LL - 1LL))))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_7 [i_2] [i_0 - 1]))));
        }
        arr_10 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) arr_8 [i_0 - 2])) ^ (9223372036854775807LL)))));
        arr_11 [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) ((9223372036854775807LL) >> (((arr_2 [4ULL] [i_0] [6LL]) - (305475468U))))))) ? (arr_1 [i_0 + 2]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned char)4] [(signed char)0]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6422))) | (arr_1 [i_0 - 2]))))));
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 3; i_4 < 9; i_4 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) ((((((/* implicit */int) var_0)) <= (((/* implicit */int) var_3)))) && (((/* implicit */_Bool) ((4294967295U) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))))))));
            var_16 = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 65520U))))))));
            var_17 &= ((/* implicit */unsigned char) -2517704165046199163LL);
        }
        for (unsigned int i_5 = 3; i_5 < 9; i_5 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) arr_19 [i_3] [4ULL] [i_3]);
            arr_20 [i_3] [i_5 - 2] [i_5 + 2] = ((/* implicit */short) max((var_9), (4271669494910148647LL)));
        }
        arr_21 [i_3] = ((/* implicit */unsigned long long int) ((4740812550640012161LL) > (((/* implicit */long long int) 4U))));
        arr_22 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_14 [i_3])))) || (arr_16 [(short)5] [i_3] [i_3])));
        var_19 |= ((/* implicit */_Bool) (-(max((((/* implicit */long long int) (short)22461)), (9223372036854775807LL)))));
    }
    for (unsigned long long int i_6 = 4; i_6 < 6; i_6 += 4) 
    {
        var_20 += (-(-5700982880045537394LL));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_0)) : ((+(arr_24 [i_6] [i_6])))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-12960))))));
        var_22 = ((/* implicit */unsigned int) 9223372036854775792LL);
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) 4294967295U))));
        arr_26 [i_6] [i_6 + 2] = ((/* implicit */unsigned long long int) ((_Bool) var_5));
    }
}
