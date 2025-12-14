/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190195
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        var_11 |= ((/* implicit */_Bool) max((676206770286042915ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [3] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 + 1] [i_0 - 2])) ? (((((/* implicit */_Bool) arr_1 [i_1 - 3])) ? (arr_1 [i_1 + 3]) : (arr_1 [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2] [i_2 + 1] [i_0 + 2])) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (6085618429455242915LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_3] [i_2 - 2] [i_2])))))))))));
                        arr_13 [i_2] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_8 [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */int) arr_0 [6ULL] [i_1 - 3])) : (((/* implicit */int) arr_0 [i_0] [i_1 - 1])))), (var_6)));
                    }
                } 
            } 
        } 
        arr_14 [2LL] [i_0] |= ((((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) var_9))))))) ^ (((/* implicit */int) arr_0 [i_0] [i_0])));
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (_Bool)1))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                for (long long int i_7 = 4; i_7 < 21; i_7 += 4) 
                {
                    {
                        arr_27 [i_4] [i_5] [i_5] [i_4] [i_5] [(signed char)15] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_4 + 3] [i_5] [i_6] [i_7] [i_4 + 3] [i_7 - 1]))))), ((~(arr_22 [i_4] [i_5])))));
                        arr_28 [i_4] [i_5] |= ((/* implicit */signed char) arr_24 [i_4] [i_4] [i_6] [i_4] [i_7] [i_7]);
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((((((1125897759358976ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21443))))) >> (((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 + 2])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) max(((+(arr_15 [i_4]))), (((/* implicit */long long int) arr_18 [i_4] [(_Bool)1]))))))))));
        var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 6338366904367292142ULL)) ? (((/* implicit */unsigned long long int) -1110989024)) : (12604912416955040015ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4 + 3] [i_4 - 1])))));
    }
    for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned long long int) min(((~(((((/* implicit */_Bool) arr_31 [i_12])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_25 [i_8] [i_8] [i_8] [i_8])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_8 + 2])))))));
                                arr_42 [i_8 - 1] [i_8 - 1] [i_10] [i_11] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) arr_24 [i_8] [i_9] [i_8 + 2] [i_11] [i_8 + 2] [i_12])))) : (((/* implicit */int) arr_31 [i_8]))));
                                var_16 += ((/* implicit */long long int) var_7);
                                var_17 = ((/* implicit */unsigned long long int) ((arr_18 [(signed char)7] [i_11]) & (((/* implicit */int) arr_31 [i_12]))));
                            }
                        } 
                    } 
                    arr_43 [i_10] = ((/* implicit */int) (((~(arr_26 [i_8 - 1] [i_8 + 2] [i_8] [i_8 - 1]))) & (((/* implicit */unsigned long long int) var_0))));
                    var_18 += ((/* implicit */short) arr_35 [i_9] [i_8 + 1] [i_8 + 1] [i_10]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            for (short i_14 = 0; i_14 < 24; i_14 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        arr_51 [23] [i_14] = ((/* implicit */signed char) (~(52776558133248LL)));
                        arr_52 [i_14] [i_13] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((arr_30 [i_15]), (((/* implicit */unsigned long long int) arr_21 [i_8] [i_13] [i_14])))) & (((arr_19 [i_15]) % (((/* implicit */unsigned long long int) -1110989026))))))) ? (arr_36 [i_8] [i_13]) : (((/* implicit */unsigned long long int) ((long long int) (+(var_7)))))));
                    }
                    arr_53 [i_8] [i_13] [i_8] [i_8] |= ((/* implicit */_Bool) (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) -1110989024)) : (var_7)))), (var_0)))));
                }
            } 
        } 
        arr_54 [i_8 + 4] = ((/* implicit */short) arr_23 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 16; i_16 += 2) 
    {
        var_19 = ((/* implicit */int) ((short) -109860283));
        arr_57 [i_16] [i_16] = ((/* implicit */long long int) (signed char)74);
        arr_58 [i_16] &= ((((/* implicit */_Bool) var_7)) ? (arr_36 [i_16] [i_16]) : (arr_36 [i_16] [19ULL]));
    }
    /* vectorizable */
    for (signed char i_17 = 0; i_17 < 18; i_17 += 4) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (arr_36 [i_17] [i_17]) : (arr_20 [i_17] [i_17] [i_17]))))));
        /* LoopNest 3 */
        for (short i_18 = 0; i_18 < 18; i_18 += 2) 
        {
            for (short i_19 = 1; i_19 < 17; i_19 += 2) 
            {
                for (unsigned long long int i_20 = 1; i_20 < 17; i_20 += 2) 
                {
                    {
                        var_21 ^= ((((((/* implicit */_Bool) arr_61 [i_20])) ? (((/* implicit */unsigned int) arr_17 [i_17] [i_18])) : (var_4))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_17] [i_20 - 1] [i_20 - 1] [i_20 + 1]))));
                        var_22 = ((((/* implicit */_Bool) arr_49 [i_19 + 1] [i_20] [i_20] [i_19])) ? (arr_49 [i_19 - 1] [i_20] [i_20] [i_19]) : (1110989031));
                        arr_73 [i_19] = ((/* implicit */signed char) var_0);
                    }
                } 
            } 
        } 
    }
    var_23 = var_6;
    var_24 = max(((((-(var_8))) & (((/* implicit */unsigned long long int) min((var_4), (var_4)))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -770334521129207324LL)) ? (-1110989026) : (-1110989026)))))));
    var_25 = (+(max((((((/* implicit */_Bool) 76278891U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (52776558133248LL))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (var_8)))))));
}
