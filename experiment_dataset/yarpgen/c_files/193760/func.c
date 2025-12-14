/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193760
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) ((unsigned short) var_6)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18328180905975262030ULL)) ? (var_2) : (var_6)))) : (((((/* implicit */_Bool) (short)-2)) ? (2555064243U) : (((/* implicit */unsigned int) var_9))))));
        arr_3 [i_0 + 2] = ((/* implicit */signed char) arr_1 [i_0] [(unsigned char)1]);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [3ULL] = ((/* implicit */unsigned char) (-(arr_6 [3ULL])));
            var_11 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 1])));
            var_12 -= ((((((/* implicit */unsigned long long int) 1739903052U)) * (var_4))) & (((/* implicit */unsigned long long int) ((int) arr_4 [i_0] [(short)0] [i_0]))));
            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [2LL] [2LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))) : (2555064237U)))) ? (((/* implicit */long long int) var_5)) : (var_3))))));
        }
        var_14 &= ((/* implicit */unsigned long long int) ((((var_8) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) (unsigned short)46840);
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 7; i_3 += 4) 
        {
            var_16 = ((/* implicit */short) (~((~(var_6)))));
            var_17 |= ((/* implicit */signed char) ((unsigned int) var_5));
        }
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2 + 1] [0LL])) & (var_6)));
        var_18 = ((/* implicit */_Bool) arr_5 [i_2] [i_2]);
        arr_14 [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_2 - 1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_4 + 2])) ? (((/* implicit */unsigned long long int) var_5)) : ((~(18446744073709551615ULL)))));
        arr_17 [i_4 + 1] [i_4 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4 + 3]))) : (var_4)));
    }
    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        var_20 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_19 [i_5])) ? (arr_19 [13]) : (arr_19 [i_5]))) ^ ((-(((((/* implicit */int) (signed char)127)) << (((((/* implicit */int) arr_18 [i_5])) - (34168)))))))));
        /* LoopSeq 4 */
        for (short i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            arr_23 [i_5] [(signed char)8] [i_6] = ((/* implicit */long long int) ((short) (+(((/* implicit */int) ((_Bool) (_Bool)1))))));
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned int) arr_20 [i_5] [i_6])) : (0U)))))));
            var_22 &= ((/* implicit */short) var_1);
            var_23 = ((/* implicit */int) max((var_23), ((~(((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                var_24 *= ((/* implicit */short) (((+(((/* implicit */int) max((arr_18 [i_7]), (((/* implicit */unsigned short) (_Bool)1))))))) / (((/* implicit */int) (short)32767))));
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_18 [i_6]))));
                arr_26 [i_7] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((arr_19 [i_5]) % (((/* implicit */int) max((arr_18 [i_6]), (((/* implicit */unsigned short) (_Bool)1)))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 3; i_9 < 16; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) min((var_26), ((unsigned short)26816)));
                        arr_31 [i_7] [i_6] [6ULL] [i_6] [i_6] = arr_27 [16] [13LL] [16LL] [i_9 - 2];
                    }
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                    {
                        arr_34 [i_5] [i_7] [i_7] [i_5] [i_10] [i_7] [i_5] = ((/* implicit */unsigned long long int) ((0ULL) != (((/* implicit */unsigned long long int) var_1))));
                        arr_35 [i_7] [i_10] [i_10] [i_10] [i_7] [i_10] = ((/* implicit */unsigned long long int) arr_33 [14U] [i_6] [i_7] [14U] [i_6]);
                        var_27 = ((/* implicit */long long int) ((1656433027U) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) (_Bool)1)))))));
                        var_28 += ((/* implicit */signed char) (-(18446744073709551598ULL)));
                        arr_36 [(_Bool)1] [(_Bool)1] [i_7] [i_7] [i_7] = ((/* implicit */short) ((var_3) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241)))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */int) ((unsigned char) 534773760));
                        var_30 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)101))));
                    }
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (9LL)))) ? (arr_24 [(short)11] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_29 [i_5] [i_6] [i_7] [(short)8] [i_5]))))));
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (~(((var_1) & (var_1))))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    arr_41 [i_5] [i_7] [i_5] = ((/* implicit */unsigned int) var_0);
                    var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_6))))));
                }
                for (unsigned char i_13 = 1; i_13 < 17; i_13 += 1) 
                {
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_7))) / (arr_33 [i_7] [(unsigned short)16] [i_5] [i_13 + 1] [i_13])))), (max((arr_24 [i_13 - 1] [i_13 + 1]), (((/* implicit */long long int) (unsigned char)167)))))))));
                    arr_44 [i_5] [i_5] &= ((/* implicit */signed char) (unsigned short)34075);
                    var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) ^ (max((((/* implicit */unsigned long long int) (_Bool)1)), (12524721249774943578ULL)))));
                    arr_45 [i_5] [i_6] [i_6] [i_7] [i_13] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_7] [i_6] [i_5] [i_6])) ? (((/* implicit */long long int) 1000086474U)) : (var_1)));
                }
            }
            for (unsigned char i_14 = 2; i_14 < 17; i_14 += 1) 
            {
                var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_19 [i_14 + 1]), (((/* implicit */int) arr_38 [i_5] [i_14 - 2] [i_14 - 1] [i_14])))))));
                var_37 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_5])) + (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
            }
        }
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 18; i_15 += 1) /* same iter space */
        {
            arr_52 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)52401)) != (((/* implicit */int) ((4830319299917548766ULL) <= (((/* implicit */unsigned long long int) -461264933)))))));
            arr_53 [i_5] = ((/* implicit */signed char) (unsigned char)104);
            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) 461264937))));
            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-313)))))) : (18446744073709551615ULL)))));
            var_40 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) != (var_9))));
        }
        for (signed char i_16 = 0; i_16 < 18; i_16 += 1) /* same iter space */
        {
            var_41 = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)9)) & (((/* implicit */int) (short)-11080))))))));
            var_42 += ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (unsigned char)101))));
        }
        /* vectorizable */
        for (signed char i_17 = 1; i_17 < 17; i_17 += 4) 
        {
            arr_60 [i_17] [i_17] = ((/* implicit */short) (-(var_6)));
            var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)2047)) && (((/* implicit */_Bool) 1177486100U))))))))));
        }
    }
}
