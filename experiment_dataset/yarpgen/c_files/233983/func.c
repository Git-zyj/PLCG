/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233983
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_19 = (~(9482996372948873012ULL));
        arr_3 [i_0 - 1] = ((/* implicit */long long int) (~(((/* implicit */int) (short)27445))));
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_17)) && (var_5)))));
            arr_10 [i_2] [i_2] = ((/* implicit */short) ((arr_7 [i_2]) >> (((max((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])), (12375137270716656264ULL))) - (12375137270716656236ULL)))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 4; i_3 < 21; i_3 += 3) 
        {
            var_20 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4239548695724465726LL))));
            arr_13 [i_3 - 4] [i_1 - 1] [i_3 - 4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [4LL])) ? (arr_4 [i_3 - 4]) : ((~(var_11)))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 3) 
        {
            arr_17 [18U] &= ((arr_12 [i_4 + 2] [i_1 - 1]) >> (((4294967295U) - (4294967234U))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                {
                    {
                        arr_23 [i_1] [i_1 + 1] [i_4 + 1] [i_5 - 2] [20ULL] |= ((18446744073709551612ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26602))));
                        var_21 = (!(((/* implicit */_Bool) -4239548695724465724LL)));
                        var_22 += ((((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1 - 1] [i_1]))) > (var_4))) && (((/* implicit */_Bool) (~(12846576568379853349ULL)))));
                        var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) 16087140914213378152ULL)) ? (((/* implicit */int) (short)4254)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        var_24 = 12239976159728636604ULL;
    }
    for (unsigned int i_7 = 1; i_7 < 21; i_7 += 3) /* same iter space */
    {
        var_25 ^= ((/* implicit */unsigned long long int) (!(((3583287797301477601ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7 - 1] [(short)0])))))));
        arr_27 [i_7] = var_1;
        var_26 = ((/* implicit */short) 3820404493U);
        /* LoopSeq 2 */
        for (long long int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */short) 808307685281351540ULL);
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((long long int) arr_24 [i_7])))));
            var_29 &= ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_18 [12ULL])) + (2147483647))) << (((((/* implicit */int) arr_28 [(short)18])) - (15165))))) == (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_7])) || (((/* implicit */_Bool) arr_5 [i_7])))) || (var_12))))));
        }
        for (long long int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_7 + 1]))))) || (((/* implicit */_Bool) (short)22397))));
            var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_24 [i_7 - 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_7]))))) : ((-(16828739080245632097ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_30 [i_7 - 1] [i_7])) != (((/* implicit */int) arr_30 [i_7] [i_7]))))))));
        }
    }
    for (unsigned int i_10 = 1; i_10 < 21; i_10 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            var_32 = ((/* implicit */long long int) (-(2792305550U)));
            arr_42 [i_10] [i_11] [i_10 - 1] = ((/* implicit */unsigned int) (short)-19575);
            var_33 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 11ULL)))) ? (((unsigned long long int) 2574339546U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-16557))))));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 3; i_12 < 20; i_12 += 2) 
        {
            var_34 = ((/* implicit */unsigned long long int) (short)-4253);
            var_35 += ((/* implicit */unsigned int) ((arr_41 [14ULL]) == (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_13 = 1; i_13 < 19; i_13 += 3) 
        {
            var_36 = 5922191585826552926ULL;
            var_37 = ((/* implicit */unsigned long long int) (short)4261);
            arr_49 [i_10] [(short)15] = ((/* implicit */unsigned int) arr_26 [i_10]);
            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) (+(6126220920174261471ULL))))));
        }
        var_39 += ((((/* implicit */_Bool) (short)19074)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17148))) : (16ULL));
    }
    var_40 = ((/* implicit */unsigned long long int) ((((var_7) & (((unsigned long long int) var_4)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    var_41 = ((/* implicit */short) 0ULL);
    var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (short)4252)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (1022526295696825506LL)))) : (((unsigned long long int) (short)4266))))) ? (((/* implicit */int) (short)-32753)) : (((/* implicit */int) ((_Bool) var_2)))));
}
