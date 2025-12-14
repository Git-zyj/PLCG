/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231960
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_2 [i_0] [i_0]) : (max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))));
        var_14 = var_2;
        arr_4 [(short)6] |= ((/* implicit */unsigned long long int) -1);
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_15 = ((/* implicit */int) arr_8 [i_2]);
            var_16 |= ((/* implicit */unsigned long long int) arr_9 [(unsigned char)10] [i_2]);
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_2])) ? (((((/* implicit */int) (unsigned char)195)) >> (((((/* implicit */int) arr_8 [i_1])) - (24704))))) : (((((/* implicit */int) var_9)) / (((/* implicit */int) var_8))))));
            arr_10 [i_2] = ((/* implicit */unsigned char) var_4);
        }
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_14 [i_3] [i_3] = (unsigned char)249;
            arr_15 [i_3] [i_1] [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)195)) & (((/* implicit */int) (unsigned char)197))))));
            arr_16 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) & (arr_13 [i_3] [i_3] [i_3])))) ? (((((/* implicit */_Bool) var_11)) ? (457974217780398275LL) : (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_1]))))))) : (((/* implicit */long long int) arr_9 [i_3] [i_1]))));
            var_18 |= ((/* implicit */short) ((int) 457974217780398290LL));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((short) arr_18 [i_1]));
            var_20 = ((/* implicit */int) ((536862720ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_4]))))))));
        }
        var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (short)(-32767 - 1))), (var_3))) / (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_1] [i_1] [i_1]) != (((/* implicit */long long int) (-2147483647 - 1)))))))))) / (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_12 [i_1] [i_1]) : (arr_12 [i_1] [i_1])))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) 1089735533658105350LL)) ? (((/* implicit */int) (unsigned char)218)) : ((-2147483647 - 1)))))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 3) 
    {
        arr_22 [i_5] = ((/* implicit */int) ((min((arr_12 [i_5 - 1] [i_5 - 1]), (((/* implicit */unsigned long long int) arr_6 [i_5 + 1])))) >> (((((/* implicit */int) ((unsigned short) arr_6 [i_5 + 1]))) - (65448)))));
        arr_23 [i_5] [i_5 + 1] = ((/* implicit */long long int) ((unsigned char) (~(((((-457974217780398294LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)82)) - (34))))))));
        arr_24 [8ULL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_5 + 1])) : (((/* implicit */int) arr_18 [i_5 + 1]))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)18))) : (((int) arr_5 [i_5 + 1]))));
    }
    var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (var_4) : (var_5))) != (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_11)) / (18446744073172688881ULL)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)5295))))))));
    var_24 |= ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_2)) >> (((-457974217780398276LL) + (457974217780398301LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(-2147483633)))) || (((/* implicit */_Bool) ((var_7) & (((/* implicit */unsigned long long int) 2147483626))))))))) : (((((/* implicit */_Bool) ((short) var_0))) ? (var_6) : (((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    var_25 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_3) >> (((((/* implicit */int) var_12)) >> (((var_6) - (10679471437064785228ULL)))))))) & ((+(max((((/* implicit */unsigned long long int) var_3)), (536862718ULL)))))));
}
