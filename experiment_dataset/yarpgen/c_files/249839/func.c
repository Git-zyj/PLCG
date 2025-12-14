/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249839
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            var_18 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (63U)))));
            arr_4 [2] &= ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) var_16)))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [4U] [i_2]))));
            var_20 |= ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) arr_2 [i_0] [i_2] [i_2])))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                arr_10 [i_0] [i_2] [(unsigned short)6] = ((/* implicit */int) min((((/* implicit */unsigned int) (signed char)64)), (63U)));
                var_21 = ((/* implicit */unsigned short) max((-1), (-1)));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((short) arr_5 [i_0] [2U] [i_3])))));
            }
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                arr_13 [6ULL] [i_2] [2U] [i_4] = ((/* implicit */short) ((((((55U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_2] [(unsigned char)7]))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_4]))))) || (((/* implicit */_Bool) var_0))));
                var_23 = ((/* implicit */unsigned short) max((4294967240U), (((/* implicit */unsigned int) (unsigned char)45))));
                var_24 = ((/* implicit */unsigned short) min((max((max((var_13), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) % (600977337)))))), (((/* implicit */unsigned long long int) arr_2 [i_0] [9LL] [i_4]))));
                arr_14 [i_4] &= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_4])))) || ((!((!(((/* implicit */_Bool) var_7))))))));
                var_25 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_4])) ? (((/* implicit */int) (unsigned short)3840)) : (((/* implicit */int) arr_8 [i_0] [(unsigned short)4] [(_Bool)1]))))) && (((((/* implicit */_Bool) 9223372036854775807ULL)) && (((/* implicit */_Bool) (unsigned char)6))))));
            }
            var_26 &= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)233)) || (((/* implicit */_Bool) var_6)))))) * (min((var_13), (((/* implicit */unsigned long long int) var_11)))))));
            var_27 *= ((/* implicit */long long int) ((((/* implicit */int) max((var_14), (((/* implicit */unsigned short) arr_1 [i_0]))))) > ((~(((/* implicit */int) arr_5 [0ULL] [i_2] [i_0]))))));
        }
        for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            var_28 = var_12;
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(var_5))) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */long long int) 4294967226U)) : (((((/* implicit */_Bool) (~(var_13)))) ? (((274877382656LL) << (((((((/* implicit */int) (short)-15986)) + (16039))) - (30))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_20 [(short)9] [i_5] [4ULL] [4ULL])) <= (((/* implicit */int) (short)6232)))))))))))));
                            var_30 = min((((/* implicit */unsigned long long int) 4294967231U)), (((((/* implicit */unsigned long long int) (-(71U)))) * (var_17))));
                        }
                    } 
                } 
            } 
        }
        var_31 = ((/* implicit */unsigned long long int) arr_17 [i_0] [(_Bool)1] [i_0]);
        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))) * (var_10))))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (var_15)))) + (var_0)))))))));
        arr_26 [(unsigned char)0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_18 [(unsigned char)0] [(unsigned char)0] [i_0] [(unsigned char)2])))))) : (2614534080U))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23)))));
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 16; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    arr_35 [12ULL] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_1))));
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [i_9])) ^ (var_9)));
                    arr_36 [12U] [4LL] [i_11] &= ((/* implicit */int) (-(((unsigned int) (unsigned char)11))));
                }
                var_34 += ((/* implicit */unsigned long long int) arr_33 [7LL] [10LL] [10LL]);
                var_35 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) 6583606686295225070LL)))));
                /* LoopNest 3 */
                for (long long int i_12 = 2; i_12 < 15; i_12 += 2) 
                {
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        for (int i_14 = 2; i_14 < 12; i_14 += 1) 
                        {
                            {
                                arr_44 [(short)2] [i_9] [i_12] [i_10] [i_9] [i_9] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_33 [i_9] [i_10] [7])) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) arr_33 [i_9] [i_9] [i_9])))), ((-(((/* implicit */int) arr_33 [(short)5] [i_13] [i_14 - 1]))))));
                                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) / (18446744073709551596ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)1)) == (var_15)))) & (((((/* implicit */_Bool) (short)112)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
