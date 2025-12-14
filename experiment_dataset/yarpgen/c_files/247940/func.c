/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247940
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) max((var_2), (((/* implicit */long long int) var_11)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_12)) < (var_6)))), (max((5560704099509421157ULL), (8589672448ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((228122099U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned long long int) (short)16384);
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3840)))))) : (arr_2 [i_0 - 2])));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_3 = 3; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    arr_15 [i_0 - 2] [i_0 - 2] [i_0 + 1] [(signed char)0] |= ((/* implicit */signed char) arr_7 [i_2] [i_3]);
                    arr_16 [i_0] [i_1 - 1] [i_0] [i_2] [i_3 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0]) : (arr_10 [i_0] [i_1] [i_2])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) * (arr_10 [i_0] [(unsigned short)5] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36)))));
                }
                for (unsigned short i_4 = 3; i_4 < 17; i_4 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_5 = 2; i_5 < 15; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_3)))));
                        arr_22 [i_0] [i_0] [i_2] [i_4 - 3] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-57)) + (2147483647))) >> (((arr_20 [i_5 - 1] [i_2] [i_1 + 3] [i_0] [i_0 + 1]) - (806680764)))));
                        arr_23 [i_0 - 1] [i_0] [i_1] [i_2] [i_0] [i_5 - 1] = ((/* implicit */signed char) arr_17 [i_0] [i_4] [i_2] [i_1] [i_0]);
                    }
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_4] [i_4 - 1] [i_6] = ((/* implicit */_Bool) var_4);
                        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) arr_11 [i_0]))));
                        var_21 = ((/* implicit */unsigned long long int) ((int) ((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                    }
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (unsigned char)46)) >> (((((/* implicit */int) (unsigned short)511)) - (506))))));
                        arr_31 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((signed char) arr_14 [i_0] [i_1] [i_1 - 1] [i_4] [i_0] [i_2]));
                    }
                    /* LoopSeq 3 */
                    for (int i_8 = 2; i_8 < 17; i_8 += 1) 
                    {
                        arr_34 [i_0] [i_1] [i_2] [i_4] [i_8 - 1] [i_4] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_33 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4 - 1]) : (arr_33 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4])));
                        arr_35 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) ((short) 1011102270U));
                    }
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        arr_40 [i_0] [i_4] [i_0] [i_4 - 2] = ((/* implicit */long long int) var_10);
                        arr_41 [i_9] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_0] [i_4 - 1] [4U] [i_0 + 1] [i_9] [i_4])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_10 [i_0] [i_1 + 2] [i_4 - 3])));
                        arr_42 [i_0] [14] [i_0] [i_0] [(unsigned short)10] [i_9] |= ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30798))) / (var_1)));
                        var_23 ^= ((/* implicit */unsigned int) ((arr_32 [i_9]) ? (((/* implicit */int) arr_32 [i_9])) : (((/* implicit */int) arr_32 [i_9]))));
                    }
                    for (short i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((_Bool) var_12));
                        var_25 = ((/* implicit */_Bool) arr_19 [i_0]);
                    }
                    arr_45 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1]))) == (((((/* implicit */_Bool) arr_24 [i_0])) ? (((/* implicit */unsigned int) arr_24 [i_0])) : (var_4)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((18446744073709551595ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27902))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))))))));
                        var_27 = ((((/* implicit */int) (unsigned char)3)) * (((/* implicit */int) (_Bool)1)));
                    }
                }
                arr_48 [i_0 - 1] [i_0 - 1] [i_1] [(short)6] &= ((/* implicit */short) ((((unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_0 + 1])) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (arr_20 [i_0 - 2] [i_1] [i_2] [i_1 + 3] [i_2])))))));
                var_28 = ((unsigned char) ((var_2) % (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                arr_49 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (116024869U)));
            }
            for (short i_12 = 3; i_12 < 15; i_12 += 4) 
            {
                var_29 = ((/* implicit */int) ((-6202421987334799583LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37635)))));
                var_30 = ((/* implicit */short) var_4);
                arr_52 [i_0] [i_0] [i_12] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_0] [6LL] [i_0]))) + (var_16)));
            }
            /* LoopNest 3 */
            for (unsigned int i_13 = 1; i_13 < 14; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    for (signed char i_15 = 2; i_15 < 14; i_15 += 1) 
                    {
                        {
                            arr_63 [i_0] [i_1 + 1] [i_1] [i_13] [i_14] [i_15] [i_0] = ((/* implicit */int) ((unsigned int) var_8));
                            var_31 ^= ((/* implicit */signed char) arr_18 [i_1]);
                            var_32 ^= ((/* implicit */unsigned long long int) var_7);
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_15 + 2])) ? (((/* implicit */int) arr_29 [i_0] [i_14] [i_15 + 2])) : (((/* implicit */int) arr_29 [i_0] [i_1] [i_15 + 2]))));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_1 - 1] [i_1] [i_1] [i_0] [i_1])) ? (((/* implicit */int) arr_14 [i_0 + 1] [i_1 - 1] [i_0 + 1] [i_1] [i_0] [i_1])) : (((/* implicit */int) arr_44 [i_0 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1] [i_1] [i_1 + 3]))));
        }
        var_35 -= ((((/* implicit */int) arr_55 [(short)4] [i_0])) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)38567)) < (((/* implicit */int) (unsigned short)37633))))));
    }
    for (unsigned long long int i_16 = 3; i_16 < 21; i_16 += 1) 
    {
        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) arr_66 [(short)2]))));
        var_37 = ((/* implicit */unsigned short) ((var_13) ? (((((/* implicit */_Bool) arr_65 [i_16])) ? (((/* implicit */int) arr_65 [i_16])) : (((/* implicit */int) arr_65 [i_16])))) : (((/* implicit */int) ((arr_66 [i_16]) < (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_64 [i_16])) + (2147483647))) >> (((((/* implicit */int) arr_64 [i_16])) + (5587)))))))))));
        var_38 = ((/* implicit */unsigned short) arr_66 [22LL]);
    }
}
