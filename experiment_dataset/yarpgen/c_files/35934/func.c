/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35934
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */int) (!(((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1] [i_1])) != (arr_3 [i_1] [i_3])))) <= (((/* implicit */int) arr_2 [i_1 + 2] [i_3 + 1] [i_3 - 1]))))));
                            arr_11 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_8);
                            arr_12 [i_2] [i_2] [(short)13] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) - (((/* implicit */int) var_12))))) ? (var_7) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1 - 3] [i_2] [i_3])) ? (252LL) : (-253LL)))))) && (((/* implicit */_Bool) ((int) 252LL)))));
                            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (signed char)0))));
                        }
                    } 
                } 
                var_14 += ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_9 [i_1 + 2] [i_0] [i_0] [i_0]) + (((/* implicit */long long int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) var_1)))) <= (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))))))))));
                arr_13 [i_1] [i_1 - 3] = ((/* implicit */short) min((min((((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0] [i_0])), (var_5))), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 5630332685278796636LL)) ? (((/* implicit */long long int) arr_3 [i_0] [i_1])) : (var_7))) == (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))))))))));
                var_15 = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) (unsigned char)128)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))))) ? ((-(((((/* implicit */_Bool) arr_0 [(signed char)11])) ? (((/* implicit */int) (signed char)120)) : (arr_3 [(signed char)3] [(signed char)3]))))) : ((~(((/* implicit */int) (unsigned short)53289))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        for (short i_5 = 1; i_5 < 11; i_5 += 4) 
        {
            for (long long int i_6 = 4; i_6 < 12; i_6 += 4) 
            {
                {
                    arr_24 [i_6] [i_6 - 1] [(signed char)12] [i_5] = ((/* implicit */short) arr_17 [i_5]);
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                arr_32 [i_4] [i_5] [3LL] [i_5 + 2] [3LL] [i_8] = ((/* implicit */signed char) (((~(-253LL))) - ((-(arr_28 [i_6 - 2] [i_5] [i_6 - 2] [i_6 + 1] [i_5])))));
                                arr_33 [i_7] [i_5] [i_6 + 1] [i_6] [i_8] = ((/* implicit */signed char) (-(((9223372036854775807LL) % (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5 + 1] [i_5 + 2] [i_6 - 2] [i_6 - 2])))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_20 [i_6 + 1] [i_4]) != (var_11))))) < ((-9223372036854775807LL - 1LL)))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 2; i_9 < 11; i_9 += 1) 
                    {
                        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_4] [i_5] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) (signed char)-64)))))) : (((((/* implicit */_Bool) arr_6 [i_4] [(unsigned char)9] [i_6 + 1])) ? (252LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ? (((long long int) (short)984)) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
                        arr_37 [i_5] [i_5] [i_6] [i_5] [i_9] [i_9] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)127)) ? ((+(var_4))) : (((var_4) - (1311442333)))))));
                        arr_38 [i_4] [i_4] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1297780277)) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) arr_23 [i_6 + 1] [i_9 - 2] [(unsigned short)10])) % (((/* implicit */int) arr_23 [i_6 + 2] [i_9 + 2] [i_6 + 2]))))));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_19 [i_5] [i_6])) ? (arr_22 [i_4] [2LL] [2LL] [i_4]) : (((/* implicit */long long int) var_8)))))))));
                        var_19 = ((/* implicit */int) var_7);
                        var_20 = ((/* implicit */unsigned short) ((int) arr_40 [i_5 + 1] [i_5]));
                    }
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) arr_41 [i_4] [i_5] [i_6] [i_11] [i_11]);
                        arr_45 [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) 229LL)) ? (var_3) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        arr_46 [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((229LL) > (arr_19 [i_4] [i_5])))) : ((+(((/* implicit */int) (signed char)9))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */long long int) var_11)) != (var_6)))) : (((/* implicit */int) (unsigned char)202)))), (min((((/* implicit */int) var_9)), ((-(((/* implicit */int) (signed char)20))))))));
}
