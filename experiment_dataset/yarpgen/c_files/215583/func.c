/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215583
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_19 = var_5;
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])));
                arr_10 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) arr_7 [i_0 + 1]);
                arr_11 [i_0 - 1] [i_2] [i_2] [(short)7] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)248)) * (((/* implicit */int) (short)24016))));
            }
            for (unsigned short i_3 = 2; i_3 < 14; i_3 += 1) /* same iter space */
            {
                arr_15 [i_1] [i_3 - 2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))));
                var_21 = ((signed char) var_3);
                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))) : (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18))) : (var_9)))));
            }
            for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned char) ((_Bool) var_15));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_2 [i_1] [i_4]))))) : ((+(var_17)))));
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                    {
                        arr_24 [i_0] [(short)12] [i_4] [i_5] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)19))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [11] [i_1] [i_4 + 2] [i_5] [(signed char)12] [i_0 - 1])) == (((/* implicit */int) var_11))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
                    {
                        arr_27 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] = (short)-24017;
                        arr_28 [i_0 + 1] [i_1] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (91679226750844042LL)));
                    }
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        arr_32 [i_0 + 1] [i_1] = ((/* implicit */_Bool) (short)24016);
                        var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (short)24)) : (((/* implicit */int) (signed char)-1))));
                        var_27 = ((/* implicit */_Bool) (-(var_18)));
                    }
                    var_28 ^= ((/* implicit */unsigned short) arr_26 [i_4] [i_4 + 2] [i_4 - 1] [i_4] [i_4 + 2] [i_4 - 2] [3LL]);
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) arr_33 [i_0] [i_1] [i_4 - 2] [i_5]);
                        arr_37 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) (unsigned short)2)) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_4 + 1] [i_4 + 1] [i_9]))))));
                        var_30 = ((/* implicit */_Bool) (short)21988);
                        arr_38 [(unsigned short)3] [(unsigned short)3] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((/* implicit */long long int) 9U)) : (-5081356653699588290LL))) / (((((/* implicit */_Bool) (short)24032)) ? (-91679226750844028LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_39 [i_0] [i_0] [i_0] [(unsigned char)10] [i_0] = ((/* implicit */unsigned char) arr_1 [i_1]);
                    }
                    var_31 ^= ((/* implicit */unsigned int) -91679226750844042LL);
                    var_32 = ((/* implicit */unsigned char) var_0);
                }
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5352402267898814906ULL)) ? (((/* implicit */int) arr_19 [i_4 - 2] [i_4 + 2] [i_4] [i_0 + 1])) : (((/* implicit */int) arr_19 [i_0] [i_4 - 1] [i_4] [i_0 + 1]))));
                    arr_43 [2] [i_1] [i_10] = ((/* implicit */short) arr_21 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 - 1]);
                    var_34 ^= ((/* implicit */unsigned short) ((arr_26 [13ULL] [i_1] [(_Bool)0] [13ULL] [i_0 + 1] [i_0] [i_4 - 1]) * (arr_26 [i_0] [i_1] [i_4] [i_10] [i_0 - 1] [i_1] [i_4 - 1])));
                    var_35 = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))) : (arr_31 [i_4 - 1]));
                }
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_11] [i_11] [i_4] [i_1] [i_1] [i_0 - 1])))))));
                    var_37 = (-(arr_25 [i_0] [i_1] [i_1] [i_4] [i_11]));
                }
            }
            for (unsigned short i_12 = 2; i_12 < 14; i_12 += 1) /* same iter space */
            {
                arr_48 [i_12] [i_12] [i_12 - 1] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_12] [i_1] [i_12 + 2] [i_12 + 2])) ? (arr_6 [i_12] [i_12] [i_12 + 1] [i_12 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121)))));
                arr_49 [i_0] [i_12] [i_0] = ((/* implicit */short) var_16);
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))) : (4294967287U))) : (((/* implicit */unsigned int) ((int) 4294967286U)))));
            }
            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) -8718459975021426970LL)) ? (7529817594835657731LL) : (((/* implicit */long long int) ((/* implicit */int) (short)344))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)210)) & (((/* implicit */int) (unsigned short)65535))))))))));
            /* LoopSeq 1 */
            for (short i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                var_40 ^= ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((arr_6 [i_13] [i_1] [i_1] [i_13]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26)))))) : ((~(((/* implicit */int) (short)-22143)))));
                arr_52 [i_13] [(signed char)7] [(signed char)7] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            }
        }
        var_41 ^= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [(unsigned char)15] [i_0 + 1] [(unsigned char)15] [i_0] [i_0 - 1] [(_Bool)1] [i_0 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_35 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [(unsigned short)9] [i_0])) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1])))));
    }
    var_42 = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_11)), (var_18)))))));
}
