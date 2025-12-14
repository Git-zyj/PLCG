/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191644
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) ((signed char) var_4))), (((((/* implicit */_Bool) (unsigned short)46902)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46355))))))))))));
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_7)))))))), (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)46363)))), (((/* implicit */int) max((var_7), (((/* implicit */signed char) var_12)))))))));
    var_16 = ((/* implicit */unsigned char) ((max(((~(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (!(((/* implicit */_Bool) 3314341967U))))))) == (((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_17 += ((/* implicit */unsigned short) 16498213908276984290ULL);
        arr_3 [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_13))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_18 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2 + 1] [i_1 + 2] [i_1] [i_1])) / (((/* implicit */int) var_8))))) / (((arr_9 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))));
                        arr_12 [i_3] [1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((unsigned int) arr_6 [i_0] [i_1] [i_0] [i_2]))) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) (unsigned char)255))))))));
                        arr_13 [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) (short)4094);
                        var_19 = var_10;
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 4; i_4 < 14; i_4 += 2) 
                        {
                            arr_16 [(signed char)11] [i_2] [(unsigned char)3] [i_3] [i_4 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_14 [i_2] [i_2] [i_2 + 2] [i_4 - 3] [i_4 - 2] [i_4]), (arr_14 [i_3] [i_2] [i_4 - 4] [i_4 - 1] [i_4 + 2] [i_4])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (arr_14 [i_1] [i_2] [2] [i_4 - 4] [i_4 - 4] [i_4 - 1])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_14 [i_3] [i_2] [i_3] [i_4 + 1] [i_4] [i_4])) : (4294967295U)))));
                            arr_17 [5] [5] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [(unsigned short)13] [i_3] [i_4]))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2])) ? (var_6) : (((/* implicit */unsigned long long int) arr_1 [i_1]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned long long int) 0LL)) : (arr_4 [i_4 - 2] [i_1 + 3] [i_0]))))));
                            arr_18 [(short)4] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) var_12);
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */int) max((var_20), (((int) var_4))));
                            var_21 += ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) var_8)))))) & (((/* implicit */int) var_9))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), ((~(((980625340U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19185)))))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            arr_24 [i_2] [i_1] [0ULL] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_2] [i_2 + 2] [i_2] [i_2] [i_2])) ? (3314341967U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) var_2)) : (((unsigned int) var_8))));
                            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                        }
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */int) var_9);
    }
    for (unsigned char i_7 = 1; i_7 < 20; i_7 += 3) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_27 [i_7]))))));
        var_25 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) arr_25 [i_7])))))))), (min((((((/* implicit */_Bool) arr_26 [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)18634)) : (((/* implicit */int) (unsigned short)46900)))), (((/* implicit */int) arr_25 [i_7]))))));
        var_26 = ((/* implicit */unsigned int) min((var_26), (5U)));
    }
    for (short i_8 = 0; i_8 < 12; i_8 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_9 = 1; i_9 < 9; i_9 += 2) 
        {
            arr_34 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [4LL] [i_9]))) : (((((/* implicit */_Bool) var_1)) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (long long int i_11 = 1; i_11 < 11; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        {
                            arr_44 [i_8] [i_9] [i_10] [i_11] [i_10] [i_12] = ((/* implicit */int) var_4);
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (var_11)))));
                            var_28 = ((((/* implicit */_Bool) 980625315U)) ? (var_6) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_8] [i_9] [i_10]))))));
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 18446744073709551605ULL)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 1; i_13 < 11; i_13 += 2) 
        {
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_6 [i_8] [i_13] [i_8] [10ULL]))));
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_13] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13]))) : (((((/* implicit */_Bool) 615497136U)) ? (((/* implicit */unsigned int) var_10)) : (arr_29 [i_13])))));
            var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) var_11)))));
            arr_48 [i_8] [i_13] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)54357))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_14 = 4; i_14 < 11; i_14 += 3) 
        {
            var_33 = ((/* implicit */unsigned short) var_1);
            arr_52 [i_14] = max((var_2), (((/* implicit */int) (unsigned short)11)));
            arr_53 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (((~(((unsigned int) arr_23 [(short)12] [i_8] [i_8] [i_8] [(short)12])))) * (((unsigned int) (!(((/* implicit */_Bool) var_13)))))));
            var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_8] [i_14] [i_8] [i_8])) ? (((/* implicit */int) (unsigned short)46897)) : (((/* implicit */int) (unsigned char)90)))))));
        }
    }
}
