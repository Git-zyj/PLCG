/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20971
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
    var_13 ^= ((/* implicit */long long int) ((var_6) < (((((/* implicit */unsigned long long int) var_4)) | (var_7)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 7; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    {
                        var_14 -= ((/* implicit */signed char) arr_4 [i_1 + 1] [i_2 + 4] [(_Bool)1]);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [(_Bool)1] [(unsigned char)2] |= ((/* implicit */unsigned long long int) arr_10 [(unsigned char)3] [i_1] [i_2 + 3] [i_3 - 1] [i_4]);
                            var_15 = (-(((/* implicit */int) (short)26982)));
                        }
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (short)21)) : (((/* implicit */int) (unsigned short)27430))));
        arr_14 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)57)), (10108903152754359041ULL)));
    }
    for (signed char i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] = ((/* implicit */unsigned int) min((min((arr_4 [3U] [(short)4] [i_5]), (arr_4 [(_Bool)1] [i_5] [i_5]))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [i_5])), (0ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_5] [i_5])), (arr_12 [(_Bool)1] [i_5] [i_5] [(_Bool)1] [i_5] [i_5]))))) : (max((((/* implicit */long long int) arr_8 [i_5])), (arr_11 [i_5] [i_5] [2LL] [i_5] [i_5])))))));
        /* LoopNest 2 */
        for (short i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21)) ? (((/* implicit */long long int) arr_15 [i_5])) : (arr_3 [i_6] [i_7])))) ? (((arr_11 [i_5] [i_5] [i_6 + 1] [(_Bool)1] [i_7]) | (arr_3 [i_6] [i_5]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)163)) & (((/* implicit */int) (unsigned char)145)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-60)), (arr_12 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_9 - 1] [i_9] [i_9 - 1]))))));
                                arr_32 [i_5] [i_6] [i_7] [i_6] [i_5] = ((/* implicit */long long int) ((((((((/* implicit */int) (unsigned short)22238)) & (((/* implicit */int) (unsigned short)9272)))) >> (((/* implicit */int) (unsigned short)3)))) & (((-465515977) | (((/* implicit */int) (unsigned short)41523))))));
                                var_19 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_29 [i_7] [i_7] [10U] [i_5] [i_7] [i_7] [i_7])))) ^ ((~(((/* implicit */int) arr_10 [i_5] [i_6] [i_7] [i_8] [i_9 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 2) 
        {
            for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) -1)) ? (((6711725859288084464ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24023))))) : (((/* implicit */unsigned long long int) 7574177072160836993LL)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_11])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 11; i_13 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned int) (((~(arr_7 [i_5] [i_10 + 1] [i_12] [i_12] [i_13]))) & (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((11) & (((/* implicit */int) (_Bool)1))))), (3467892352U))))));
                                var_22 = ((/* implicit */unsigned char) ((((_Bool) arr_3 [i_10] [i_10])) ? ((+(((/* implicit */int) arr_29 [i_5] [i_5] [i_10 + 1] [i_5] [i_12] [i_12] [(unsigned char)9])))) : (((/* implicit */int) (signed char)-71))));
                            }
                        } 
                    } 
                    arr_43 [i_5] [i_5] = (~((-(((/* implicit */int) (signed char)117)))));
                }
            } 
        } 
    }
    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)0), ((signed char)-118))))) * (((unsigned long long int) arr_46 [i_17]))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_53 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]), (arr_53 [i_14] [i_15] [(unsigned short)3] [(_Bool)1] [i_15] [i_17])))) >> (((max((((((/* implicit */_Bool) arr_49 [i_17] [i_16] [i_14])) ? (((/* implicit */unsigned long long int) -1587279727)) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_53 [i_14] [i_14] [14] [i_17] [i_14] [i_16])) ^ (((/* implicit */int) arr_53 [i_14] [(unsigned char)11] [i_15] [i_15] [i_15] [i_14]))))))) - (18446744072122271875ULL)))));
                    }
                    var_25 = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) arr_52 [i_14] [i_16] [i_15] [i_14])) : (((/* implicit */int) arr_52 [i_14] [i_15] [i_15] [i_14])))), (((((/* implicit */_Bool) arr_52 [i_16] [i_15] [i_16] [i_14])) ? (((/* implicit */int) arr_52 [i_14] [i_15] [i_15] [i_14])) : (((/* implicit */int) arr_52 [(_Bool)1] [i_15] [i_14] [i_14]))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) max(((-(12ULL))), (((/* implicit */unsigned long long int) ((617240559) < (((/* implicit */int) (unsigned short)1106)))))));
    }
    for (unsigned int i_18 = 2; i_18 < 14; i_18 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_19 = 4; i_19 < 14; i_19 += 4) 
        {
            for (unsigned int i_20 = 0; i_20 < 15; i_20 += 2) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_52 [i_19 - 3] [i_20] [i_20] [i_21]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)30)))) : (((unsigned int) ((((/* implicit */int) (unsigned short)64205)) & (((/* implicit */int) (unsigned short)1101)))))));
                        var_28 += (((!(((/* implicit */_Bool) arr_56 [i_18 - 2])))) ? (((((/* implicit */long long int) arr_58 [i_18 - 1])) ^ (arr_57 [i_18 - 2]))) : (((/* implicit */long long int) ((arr_58 [i_18 - 2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_18 - 2])))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) -2LL)) ? (23ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (short i_22 = 0; i_22 < 15; i_22 += 1) 
        {
            for (int i_23 = 0; i_23 < 15; i_23 += 4) 
            {
                {
                    var_30 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) 10108903152754359041ULL)) ? (((/* implicit */int) (short)31202)) : (((/* implicit */int) (unsigned char)189)))) : (((((/* implicit */int) (signed char)57)) / (((/* implicit */int) (short)5594))))))), (arr_63 [i_18] [i_18] [i_18]));
                    arr_71 [i_22] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)33040)) | (((/* implicit */int) (signed char)0)))))), (min((arr_69 [i_18 + 1] [i_18] [i_22] [i_18]), (((/* implicit */int) (unsigned char)193))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_24 = 0; i_24 < 15; i_24 += 3) 
        {
            for (unsigned long long int i_25 = 0; i_25 < 15; i_25 += 4) 
            {
                {
                    var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((unsigned char) ((unsigned long long int) (unsigned short)65533))))));
                    var_32 ^= ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) arr_46 [i_18])))))) % (arr_58 [i_18 + 1])))));
                }
            } 
        } 
        var_33 |= ((unsigned long long int) (unsigned short)11410);
    }
    var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) 9223372036854775807LL)))));
}
