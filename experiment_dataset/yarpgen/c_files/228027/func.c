/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228027
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) min((620465583419963422LL), (((/* implicit */long long int) (unsigned char)78)))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) (~(arr_0 [i_0])));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned short) (unsigned char)78);
            var_12 &= var_5;
        }
        for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_8 [i_2] = ((((/* implicit */_Bool) arr_0 [7ULL])) ? ((-(((((/* implicit */_Bool) 9594524417058578227ULL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0]))))) ? (var_8) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)197))) / (arr_3 [i_2])))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                arr_13 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */long long int) var_0);
                arr_14 [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) arr_0 [i_0]);
                arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(var_4)));
                arr_16 [i_0] [i_3] = ((/* implicit */unsigned long long int) arr_0 [i_3]);
                var_13 |= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_3] [i_3]))) : (2184520780653416577ULL))));
            }
            arr_17 [i_0] [i_2] [(short)13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (min((7971012352730519862ULL), (((/* implicit */unsigned long long int) (unsigned short)60854)))))))));
        }
        for (unsigned short i_4 = 2; i_4 < 12; i_4 += 4) 
        {
            arr_20 [i_0] = ((/* implicit */unsigned char) var_5);
            arr_21 [i_0] [i_4] = (((!(((/* implicit */_Bool) (short)23069)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4 + 2] [i_4 + 2] [i_4 - 2] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) var_7)))))) : (((((/* implicit */_Bool) var_5)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_4])))))))) : ((~(var_4))));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            arr_26 [i_0] = arr_25 [i_0] [i_5];
            arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8475181070604303522ULL)) ? ((-(((/* implicit */int) arr_18 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)42)) || (((/* implicit */_Bool) var_7)))))));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            var_14 = ((((unsigned long long int) arr_30 [(unsigned short)18])) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_7])))))));
            var_15 &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_28 [i_6]))));
        }
        /* vectorizable */
        for (unsigned short i_8 = 1; i_8 < 22; i_8 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                arr_36 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)58)) && (((/* implicit */_Bool) arr_30 [i_8 - 1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 3; i_10 < 22; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 1) 
                    {
                        {
                            arr_41 [i_6] [i_8 - 1] [i_9] [i_10] [i_10] = ((/* implicit */long long int) arr_35 [i_6] [i_8 - 1]);
                            var_16 |= ((/* implicit */short) 15227034869600370356ULL);
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((((/* implicit */_Bool) (unsigned short)48680)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_39 [i_6] [i_8] [i_9] [i_10] [i_10]))));
                        }
                    } 
                } 
                var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)48680)) : (((/* implicit */int) arr_32 [i_6] [i_8] [i_8 + 1]))));
                var_19 &= ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_29 [i_6] [i_8 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775805LL)) || (((/* implicit */_Bool) (short)-1)))))));
            }
            var_20 &= (unsigned char)128;
            var_21 -= ((/* implicit */unsigned short) ((unsigned long long int) (~(9223372036854775807LL))));
            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
        }
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6]))) >= (arr_40 [i_6] [i_6] [i_6] [(short)22])))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_34 [i_6] [i_6] [i_6])) : (((/* implicit */int) (short)0))))))) % ((-(((/* implicit */int) arr_39 [i_6] [i_6] [i_6] [i_6] [(unsigned short)4]))))));
        var_24 = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) arr_40 [i_6] [i_6] [i_6] [4LL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_31 [i_6] [i_6]))))))));
    }
    for (unsigned short i_12 = 4; i_12 < 18; i_12 += 2) /* same iter space */
    {
        arr_44 [i_12] = ((/* implicit */long long int) arr_38 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12]);
        /* LoopSeq 3 */
        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 3) 
        {
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((short) ((short) var_1)))) ? (9706901106006687913ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_12 - 3]))))))));
            arr_47 [(unsigned short)10] [i_12 + 1] &= min((9594524417058578227ULL), (min((((var_0) / (((/* implicit */unsigned long long int) 8493937053334416909LL)))), (((unsigned long long int) var_3)))));
        }
        /* vectorizable */
        for (unsigned short i_14 = 2; i_14 < 18; i_14 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) arr_37 [i_14] [i_14] [i_14] [i_14] [i_12 + 1]);
            var_27 = arr_33 [i_12 - 4] [i_14 - 1];
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_42 [i_12] [i_12 - 3])) == (((/* implicit */int) arr_42 [i_12] [i_12 - 3]))));
        }
        for (unsigned short i_15 = 2; i_15 < 18; i_15 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned short) arr_49 [i_12 - 4] [i_12]);
            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-29705))) + (9223372036854775802LL)))), (((((/* implicit */_Bool) (unsigned char)128)) ? (arr_48 [i_12] [(unsigned char)2] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))))))))));
            arr_54 [i_12] [i_12] [i_15] = ((/* implicit */unsigned long long int) arr_38 [i_12] [i_15 + 1] [i_15 + 1] [i_12]);
        }
    }
    for (unsigned short i_16 = 4; i_16 < 18; i_16 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned long long int) (((+(min((1866125852109736523ULL), (var_0))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(var_9))) > (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_16] [i_16] [i_16] [i_16] [i_16])))))))));
        arr_58 [i_16] = (~((-(((8852219656650973389ULL) | (((/* implicit */unsigned long long int) -8491073096342780014LL)))))));
    }
}
