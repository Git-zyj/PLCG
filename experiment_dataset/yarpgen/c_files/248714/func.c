/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248714
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(max((var_8), (((/* implicit */unsigned int) var_10))))))) ? (((var_17) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (10518677799330468604ULL))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_3)) : (4203360105U)))), (((806003470685334770ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_3 [(unsigned short)10] [(unsigned char)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((-2147483639) & (((/* implicit */int) (unsigned char)10))))))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (1152780767118491648LL)))), (min((((/* implicit */unsigned long long int) (short)-21333)), (arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) var_16)))))))))));
        var_19 -= ((((/* implicit */_Bool) min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (((/* implicit */long long int) max(((~(1326089156U))), (((/* implicit */unsigned int) min((arr_2 [12LL] [i_0]), ((unsigned char)3))))))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((4772490717808527024LL) / (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1042301296U)))) ? (min((arr_8 [i_0 - 1] [i_0 + 2]), (2147483639))) : (max((arr_8 [i_0 - 2] [i_0 + 2]), (arr_8 [i_0 + 1] [i_0 + 1])))));
                            arr_13 [i_0] [i_3] [i_0] [4U] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))), (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1])) ? (var_15) : (((/* implicit */unsigned long long int) -40317684))))));
                            arr_14 [i_0 + 2] [12LL] [i_3] [i_0] [11ULL] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((arr_5 [i_0]) ? (2147483638) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (12450586451667794919ULL) : (arr_9 [i_1] [i_3] [i_3] [i_3]))))));
                        }
                        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -225718520)))) % (max((arr_12 [i_0] [i_0 + 3] [i_2] [i_1 - 3] [i_1 - 3]), (((/* implicit */unsigned long long int) (short)2037))))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_0 + 2] [i_1 - 3])), (max((((/* implicit */unsigned int) 813186284)), (arr_10 [i_3] [i_0] [i_1] [i_0] [i_3])))))) ? ((+(((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (var_11) : (((/* implicit */int) var_0)))))) : (((max((((/* implicit */int) arr_0 [i_2])), (var_11))) / (var_11)))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)163))))))) ? (((((((/* implicit */int) (signed char)96)) < (((/* implicit */int) arr_2 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : ((-9223372036854775807LL - 1LL)))) : (((var_7) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
    }
    /* vectorizable */
    for (short i_5 = 2; i_5 < 9; i_5 += 3) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */signed char) ((-2147483639) == (var_1)));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)17007))) - (arr_11 [i_5 - 2] [i_5] [2ULL] [i_5] [i_5])));
    }
    var_24 = ((/* implicit */int) var_10);
}
