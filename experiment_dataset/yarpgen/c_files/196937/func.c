/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196937
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
    for (unsigned int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] &= ((/* implicit */short) (+((-9223372036854775807LL - 1LL))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_3)))) ? (((/* implicit */long long int) ((var_11) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3)))));
            var_13 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */int) var_6))))));
        }
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
        {
            arr_10 [i_0 - 3] [i_0] [i_0 - 3] |= ((/* implicit */int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9)))));
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) (~(((unsigned int) var_11))));
                    var_14 += ((/* implicit */short) (-(((/* implicit */int) (signed char)-45))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [(unsigned short)14] [(unsigned short)14] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (var_5)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */int) var_4))))) : (((unsigned int) var_3))));
                        var_15 -= ((/* implicit */int) var_2);
                        var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (((unsigned long long int) var_1))));
                    }
                }
                for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        var_17 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_5)) : (var_1)))) ? (((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (8463685498718020335ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        arr_27 [i_6] [i_2 + 4] [i_3 + 2] [i_6] [i_6] [i_3 + 2] |= var_8;
                        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((short) var_1))) : ((~(((/* implicit */int) var_7))))));
                        var_19 -= ((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))));
                    }
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        var_20 &= ((/* implicit */long long int) var_4);
                        var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3))) : (((/* implicit */long long int) var_10))));
                        var_22 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                        arr_32 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */int) var_2))))) : ((~(var_1)))));
                        arr_33 [i_0 + 1] [i_6] [i_3 + 1] [i_6] [i_8 + 1] &= ((/* implicit */int) ((signed char) var_7));
                    }
                    /* LoopSeq 4 */
                    for (int i_9 = 1; i_9 < 20; i_9 += 1) 
                    {
                        arr_37 [i_9 - 1] [i_9] [i_6] [i_3] [(signed char)1] [i_0 + 3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))));
                        arr_38 [i_0] [i_2] [i_6] [i_9] [i_6] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_10)));
                        arr_39 [i_0] [i_0] [i_6] [i_6] [i_9 + 1] &= ((/* implicit */unsigned short) var_1);
                        arr_40 [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
                    }
                    for (short i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        arr_44 [(unsigned short)11] [i_2] [(unsigned short)11] [i_3 + 1] [i_6] [i_10] [i_3] = ((/* implicit */unsigned char) ((_Bool) var_4));
                        var_23 = ((/* implicit */int) ((unsigned int) ((var_11) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_0))))));
                        arr_45 [i_2] [14] [i_6] [i_10] &= (!(((/* implicit */_Bool) var_5)));
                    }
                    for (signed char i_11 = 1; i_11 < 20; i_11 += 1) 
                    {
                        var_24 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                        arr_48 [i_2 + 4] [i_6] [i_11] &= ((/* implicit */signed char) (+(var_5)));
                        arr_49 [i_6] [0ULL] [i_3 - 1] [i_2] [i_0] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))));
                        var_25 |= ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        var_26 &= ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
                        arr_52 [i_6] [i_2 + 2] [i_2 + 2] [i_6] [i_12] &= ((_Bool) (!(((/* implicit */_Bool) var_2))));
                        arr_53 [i_6] [i_6] [i_2 - 2] [i_2 - 2] [i_6] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_7)) ? (var_3) : (var_9))) : (((/* implicit */long long int) ((int) var_9)))));
                        var_27 |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                    }
                    /* LoopSeq 3 */
                    for (int i_13 = 1; i_13 < 20; i_13 += 2) 
                    {
                        arr_56 [i_0] [i_2] [i_6] [i_6] [i_13] &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 9983058574991531281ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29979))) : (8495872213232777721ULL)))));
                        arr_57 [i_6] [i_2 - 2] [i_3] [i_6] [i_13 + 1] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))));
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (var_1)));
                    }
                    for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        var_29 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_10))) : (((/* implicit */unsigned int) var_5))));
                        arr_61 [i_6] [i_3 + 1] [i_6] &= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9));
                        arr_62 [i_0 - 4] [i_3] [i_3 + 1] [i_6] [i_6] [i_14] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) var_10)))));
                        var_30 -= (+(((/* implicit */int) var_6)));
                    }
                    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) : ((~(var_5)))));
                    }
                }
                for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    arr_68 [(unsigned short)8] [4LL] [4LL] [4LL] &= ((/* implicit */unsigned long long int) var_3);
                    arr_69 [(short)6] [(short)6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9))) : (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                    arr_70 [20ULL] [i_3 - 1] [i_2 + 2] [20ULL] &= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10)));
                }
                var_33 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6))))));
            }
            var_34 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_5)) : (var_1)));
            var_35 |= ((/* implicit */unsigned long long int) var_3);
        }
    }
    var_36 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */unsigned int) 8191)) : (255U)));
}
