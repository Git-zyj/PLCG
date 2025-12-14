/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29925
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_1 + 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((arr_3 [i_0] [i_0]) - (1998093250318575602LL)))))))) ? (((((/* implicit */_Bool) ((long long int) (short)32754))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1 - 1])))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)122)) >= (((/* implicit */int) (short)32754))))) != (((/* implicit */int) min((arr_1 [i_0 - 1]), (arr_1 [i_0])))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */short) (~(((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) % (18446744073709551612ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) ? (max((((/* implicit */unsigned long long int) (short)-32755)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_3 + 3]))))))))) ? ((((_Bool)1) ? (((/* implicit */long long int) max((var_9), (var_9)))) : ((~(arr_9 [i_0] [3ULL] [i_0] [i_4]))))) : (((/* implicit */long long int) 1855112429U)));
                                arr_14 [i_0] [i_4] [(unsigned short)18] [i_3] [i_3] &= ((/* implicit */signed char) 9223372036854775807LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        for (long long int i_6 = 4; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_22 [i_0 - 1] [i_2] [i_2] [i_0] [(short)8] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)32763)) ? (var_6) : (((/* implicit */int) arr_16 [i_6] [i_5 + 2] [i_1] [i_1])))) : ((+(((/* implicit */int) arr_17 [i_1 + 1] [i_1 + 1] [(unsigned short)23] [(short)20])))))));
                                var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_2 - 1] [i_1] [i_0]))))), (min((((/* implicit */int) arr_7 [i_2 - 2])), (var_9)))))));
                }
                /* vectorizable */
                for (short i_7 = 1; i_7 < 22; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            {
                                var_13 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 - 1])) < (var_9)));
                                arr_29 [6ULL] [i_8] [i_7 - 1] [(signed char)18] [(signed char)18] &= arr_20 [i_7] [i_8] [i_0] [i_7] [i_7] [i_0] [i_0];
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        var_14 *= ((/* implicit */short) var_9);
                        var_15 = ((/* implicit */unsigned int) arr_23 [i_0 - 1]);
                        arr_32 [i_10] [i_10] [i_7] [i_10] [i_10] [i_7 + 2] = ((arr_4 [i_0] [i_0 - 1] [i_0 - 1]) / (((((/* implicit */int) (signed char)113)) | (((/* implicit */int) (unsigned char)149)))));
                    }
                    var_16 = arr_3 [i_0] [i_0 - 1];
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 23; i_11 += 3) 
                    {
                        for (signed char i_12 = 1; i_12 < 23; i_12 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                                var_18 = (~(arr_28 [i_0] [i_0] [10LL] [(unsigned char)0] [i_11 - 1] [i_0]));
                                var_19 = ((/* implicit */unsigned long long int) var_4);
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    for (short i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        for (short i_15 = 4; i_15 < 23; i_15 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_21 [(_Bool)1] [i_14] [i_13] [i_0] [i_0])) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) | (-1366158802)))))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_31 [i_0] [i_1] [i_15 + 1]))) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_13])))) : (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0 - 1] [i_1] [i_0 - 1])), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1])))) < (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (short)-32755))))))))));
                                arr_45 [i_0] [i_0] [i_13] [i_14] [i_15] &= ((/* implicit */unsigned char) ((min((var_4), ((!(((/* implicit */_Bool) 1855112429U)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [i_15] [i_14] [i_14] [i_13] [i_13] [i_1] [i_0])) == (((/* implicit */int) ((unsigned short) var_0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_37 [i_14] [i_13] [i_1])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (unsigned int i_16 = 0; i_16 < 17; i_16 += 3) 
    {
        for (long long int i_17 = 0; i_17 < 17; i_17 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) arr_23 [i_16]);
                arr_52 [i_16] [i_16] [(signed char)8] = ((/* implicit */signed char) min((((/* implicit */int) (!((!(arr_39 [i_17] [i_17] [i_16])))))), (arr_40 [i_17] [2ULL] [i_16] [i_16] [i_16])));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-24)), (((long long int) arr_44 [i_16] [i_16] [i_16] [i_16] [i_16]))))) ? (((long long int) 9223372036854775799LL)) : (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 8932515711214499838ULL))))) << (((((((/* implicit */_Bool) var_8)) ? (arr_50 [15LL]) : (((/* implicit */int) var_2)))) - (730870497))))))));
            }
        } 
    } 
}
