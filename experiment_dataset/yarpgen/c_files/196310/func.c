/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196310
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned short) ((min((min((((/* implicit */int) var_11)), (arr_3 [i_0]))), (max((var_2), (((/* implicit */int) var_8)))))) * (((/* implicit */int) var_1))));
                        var_13 -= ((/* implicit */signed char) max((min((arr_9 [i_2] [i_2] [i_0 - 2] [i_0 - 1] [i_0]), (arr_0 [i_1] [(short)8]))), (min((((/* implicit */unsigned long long int) 3142536387U)), (arr_0 [i_0 + 1] [i_0 - 2])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            arr_14 [i_0] [6U] [i_0] [i_0] [i_1] [6U] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_3]))));
                            var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_6 [i_4]) : (((/* implicit */unsigned long long int) var_9))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */unsigned long long int) 3142536389U)) : (arr_0 [i_0 - 1] [i_2])));
                            arr_15 [i_0] [i_2] [(unsigned char)2] [6U] [i_3] [i_4] = ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_2] [i_0 + 1] [i_0] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (var_4)))));
                            var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_3]))));
                        }
                        for (unsigned short i_5 = 2; i_5 < 10; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((arr_17 [i_0 - 2] [i_0] [i_2] [i_2] [i_5] [i_2] [i_0 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                            var_18 = ((/* implicit */unsigned char) ((short) min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_2])), (var_6))));
                            arr_20 [i_2] [i_2] [i_3] [i_2] [i_2] [i_2] [2U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (min((((((/* implicit */_Bool) var_5)) ? (arr_16 [i_2] [i_2] [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned char) arr_19 [i_1] [i_3] [(unsigned short)9] [i_1] [i_2] [5ULL])))))));
                        }
                    }
                    for (short i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) 4676416687027833398ULL);
                            var_20 &= ((/* implicit */short) max((min((((/* implicit */int) var_1)), (var_2))), (max((arr_2 [i_6 - 1] [i_6 + 2]), (arr_2 [i_6 - 1] [i_6 + 2])))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            var_21 -= ((/* implicit */unsigned long long int) (~(arr_23 [i_2] [i_2] [i_2] [i_0] [i_2])));
                            arr_31 [(unsigned short)10] [i_1] [i_2] [i_6 - 1] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))), ((+(var_9)))))));
                            arr_32 [(signed char)8] [i_1] &= ((/* implicit */short) max((max((1152430908U), (((/* implicit */unsigned int) 1769632963)))), (max((arr_22 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9]), (((/* implicit */unsigned int) arr_13 [i_8] [(unsigned char)0] [i_1] [i_0] [i_0] [i_1] [i_0]))))));
                        }
                        /* vectorizable */
                        for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            arr_36 [i_0] [i_2] [i_2] [(unsigned char)2] [i_0] [i_0] [4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_9] [10ULL]) : (((/* implicit */unsigned long long int) arr_11 [i_6] [i_6] [i_6] [i_6] [4ULL]))));
                            var_22 = ((/* implicit */short) ((unsigned short) 13770327386681718217ULL));
                            var_23 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_1] [i_6 - 1] [i_0 - 1]))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_2] [i_6 + 2] [i_9])) ? (arr_34 [i_0] [i_0] [i_2] [i_0] [i_2]) : (arr_0 [i_0] [i_0])))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1] [i_9] [i_9] [i_6 - 1] [i_2])))));
                        }
                        arr_37 [i_2] [i_2] = ((/* implicit */int) arr_25 [i_2] [i_2]);
                    }
                    for (unsigned short i_10 = 2; i_10 < 10; i_10 += 3) 
                    {
                        arr_40 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (~((((+(var_2))) % (((/* implicit */int) var_5))))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4676416687027833402ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (4676416687027833398ULL)))) ? (3142536389U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [(unsigned short)9])))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0 - 1] [i_0 + 1]) : (((/* implicit */int) ((short) 1152430908U)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        arr_44 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (short)-22);
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_0 - 2] [i_11] [i_0])) ? (((/* implicit */int) arr_29 [i_2] [(short)6] [i_0 - 2] [i_11] [i_0 - 2])) : (((/* implicit */int) arr_29 [i_0 - 1] [(unsigned char)0] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                        arr_45 [2ULL] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_2]))));
                    }
                    arr_46 [i_2] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 3142536387U)), (((unsigned long long int) arr_23 [i_2] [i_2] [i_1] [i_2] [i_0 - 1]))));
                    arr_47 [i_2] [10U] [i_2] = ((/* implicit */unsigned char) var_6);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (max((((/* implicit */unsigned long long int) var_9)), (var_12))) : (((/* implicit */unsigned long long int) var_2))))));
    var_28 = ((/* implicit */unsigned char) var_3);
    var_29 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */int) min((var_1), (((/* implicit */short) var_3))))) : (((/* implicit */int) ((unsigned short) ((unsigned char) var_0))))));
}
