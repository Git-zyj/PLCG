/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230973
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_17 = ((/* implicit */signed char) (_Bool)1);
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    arr_14 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */signed char) var_6);
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2147483647) : (((/* implicit */int) (short)14336))))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4355)))))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_0] [i_3 + 1] [i_2] [i_3] [i_4])) - (((/* implicit */int) arr_10 [i_0] [i_3 + 1] [i_2] [i_3] [i_4]))));
                    }
                    arr_19 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (signed char)1);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_20 *= ((/* implicit */unsigned long long int) arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3]);
                        arr_22 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)117))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (signed char)-1)) ? (1423927913) : (((/* implicit */int) var_6))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_26 [i_6] [i_1] [i_2] [i_1] [i_0] &= ((/* implicit */_Bool) 18446744073709551612ULL);
                        arr_27 [i_0] [i_6] [i_3] [i_2] [i_1] [i_0] [i_0] &= (-(((/* implicit */int) var_8)));
                    }
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) (-(((/* implicit */int) (short)(-32767 - 1)))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3 + 1] [i_1] [i_3] [i_3 + 1] [i_3]))) : (((unsigned int) arr_0 [i_0] [i_0]))));
                        var_23 = ((/* implicit */int) var_7);
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(18446744073709551613ULL)))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) arr_1 [i_0]))));
                    }
                }
            }
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                arr_34 [i_0] [i_1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_2))));
                arr_35 [i_0] [i_1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_1 [i_0])) : (arr_31 [i_0] [i_0] [i_0])));
                arr_36 [i_1] [i_0] = ((/* implicit */int) ((unsigned short) var_8));
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 4) 
                {
                    var_25 = ((/* implicit */unsigned int) (signed char)16);
                    arr_40 [i_0] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 4ULL)))) ? ((~(((/* implicit */int) arr_16 [i_0] [i_1] [i_8] [i_9] [i_1])))) : ((-(((/* implicit */int) var_1))))));
                    var_26 = ((/* implicit */unsigned long long int) var_9);
                    var_27 = ((int) var_1);
                    arr_41 [i_1] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned short)0)) : (1494203384)));
                }
                for (short i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_11 = 2; i_11 < 17; i_11 += 2) 
                    {
                        arr_48 [i_11] [i_10] [i_8] [i_8] [i_1] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) (short)112));
                        var_28 |= ((var_2) ? (((/* implicit */unsigned long long int) 2147483621)) : (18446744073709551611ULL));
                        arr_49 [i_0] [i_1] [i_8] [i_1] [i_11 - 1] = ((/* implicit */int) ((signed char) arr_30 [i_11] [i_11] [i_11 - 1] [i_11 - 2] [i_11]));
                    }
                    for (signed char i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) 0ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((var_2) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((unsigned int) arr_32 [i_0])))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_54 [i_0] [i_1] [i_8] [i_10] [i_13] = ((/* implicit */unsigned short) ((var_2) ? (((((/* implicit */_Bool) 4070074768U)) ? (((/* implicit */int) arr_44 [i_10] [i_8] [i_1] [i_0])) : (((/* implicit */int) arr_53 [i_0] [i_1] [i_8] [i_10] [i_13])))) : (((/* implicit */int) arr_13 [i_8] [i_13]))));
                        arr_55 [i_8] [i_8] [i_8] = ((/* implicit */signed char) var_16);
                        var_31 = ((/* implicit */unsigned short) var_6);
                    }
                    /* LoopSeq 1 */
                    for (int i_14 = 1; i_14 < 17; i_14 += 1) 
                    {
                        var_32 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_14 - 1] [i_10] [i_10] [i_14] [i_0])) ? (((/* implicit */int) (signed char)7)) : (arr_18 [i_0] [i_14 + 1] [i_8] [i_10] [i_14])));
                        arr_59 [i_0] [i_1] [i_1] [i_1] [i_8] [i_10] [i_14] = ((/* implicit */unsigned long long int) ((int) var_1));
                        arr_60 [i_14] [i_10] [i_8] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_17 [i_10] [i_14 - 1] [i_0]));
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((unsigned short) (signed char)127))));
                    }
                }
                arr_61 [i_0] [i_1] [i_8] = ((/* implicit */int) ((signed char) arr_32 [i_0]));
            }
            arr_62 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (19ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        }
        arr_63 [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (2147483640) : (1149119211)));
        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))));
        var_35 = (~(((/* implicit */int) var_3)));
        var_36 = ((/* implicit */short) ((int) arr_31 [i_0] [i_0] [i_0]));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 17; i_15 += 1) 
    {
        var_37 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (3221225472U)));
        arr_66 [i_15] = ((/* implicit */signed char) ((arr_3 [i_15] [i_15]) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_67 [i_15] &= ((/* implicit */unsigned short) ((unsigned int) ((short) (unsigned char)38)));
        var_38 &= ((/* implicit */int) arr_39 [i_15] [i_15] [i_15] [i_15] [i_15]);
    }
    var_39 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) (_Bool)1)), (549755813887ULL)));
}
