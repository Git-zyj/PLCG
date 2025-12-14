/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244890
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
    var_16 = ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_2)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)16694)) ? (var_0) : (((/* implicit */int) (_Bool)1))))) + (((((/* implicit */_Bool) 263511198)) ? (arr_0 [i_0 + 2]) : (var_3)))));
        /* LoopSeq 4 */
        for (short i_1 = 2; i_1 < 20; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) 2689902668U)), (((((/* implicit */unsigned long long int) 16383)) ^ (arr_4 [i_3] [22LL])))))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((arr_0 [i_0]), (((long long int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_9))))))))));
                    }
                } 
            } 
            arr_11 [i_0] [i_0] [i_0] |= ((/* implicit */short) ((min((((/* implicit */unsigned int) -16380)), (2754070130U))) <= (((arr_5 [i_0] [i_0]) & (arr_7 [i_0] [i_0 + 1] [i_0 + 3] [i_0 + 2])))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_6))));
            var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_6 [i_1] [i_1])) | (((/* implicit */int) var_14))))))) ? (((((arr_5 [i_0] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)17))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0])))));
        }
        for (short i_4 = 2; i_4 < 20; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
            {
                arr_17 [i_4] = ((((/* implicit */long long int) ((arr_16 [i_5 + 1] [i_5] [i_5 - 1]) - (arr_16 [i_5 - 1] [i_5] [i_5 - 1])))) - (arr_8 [i_0]));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
                {
                    arr_21 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)32767))));
                    var_22 &= ((/* implicit */short) ((int) ((((/* implicit */_Bool) (~(arr_12 [(short)4])))) ? ((-(((/* implicit */int) (signed char)-18)))) : (((/* implicit */int) (signed char)-10)))));
                }
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        arr_26 [(short)22] [i_0] [i_5 + 2] [(_Bool)1] [4] |= ((/* implicit */unsigned int) var_1);
                        arr_27 [i_0] |= ((/* implicit */int) (~(arr_12 [(unsigned short)16])));
                    }
                    arr_28 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(arr_25 [i_0 - 2] [i_0])));
                }
                var_23 = ((/* implicit */unsigned long long int) var_13);
            }
            for (int i_9 = 1; i_9 < 21; i_9 += 3) /* same iter space */
            {
                arr_31 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [(signed char)15] [i_4]))))) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 + 2] [i_0] [i_4]))) ^ (8500210041713250023ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                arr_32 [i_4] [i_4] [i_4] [i_4] = var_0;
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) (unsigned char)14))))))));
                            var_25 = ((/* implicit */_Bool) 2147483624);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_12 = 1; i_12 < 21; i_12 += 3) /* same iter space */
            {
                arr_41 [i_0] [i_0] &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -438917038)) ? (((/* implicit */int) arr_29 [i_0] [i_4])) : (-16385)))));
                arr_42 [(signed char)18] [i_4] [i_4] [7ULL] = ((/* implicit */long long int) (+(arr_37 [i_12] [i_12 + 2] [i_12] [i_12 + 2] [i_12 + 2] [i_4] [i_12 - 1])));
            }
            arr_43 [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_19 [(unsigned char)16] [i_4 - 1] [i_4] [(unsigned char)4]) | (((/* implicit */int) var_8))))) ? (min((arr_19 [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 2]), (arr_19 [i_4] [i_4 + 2] [i_4] [i_4 - 1]))) : (((arr_19 [(signed char)14] [i_4 - 1] [i_4] [i_4]) | (arr_19 [i_4] [i_4 + 2] [i_4] [i_4 + 2])))));
            var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0] [i_0 + 1] [i_0])) ? (var_3) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)31468)), (arr_7 [i_0] [10LL] [i_0] [i_0]))))))) ? (2627460134U) : (((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned char)11)))) % (((/* implicit */int) arr_9 [i_0 + 3] [i_0 + 3] [i_0 + 1] [(_Bool)1])))))));
        }
        for (short i_13 = 2; i_13 < 20; i_13 += 3) /* same iter space */
        {
            arr_47 [i_0] [(unsigned char)22] [i_0] = (short)7235;
            /* LoopSeq 3 */
            for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 3) /* same iter space */
            {
                var_27 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_15 [i_13 - 2] [i_0] [i_13 + 3])) ? (1220823022) : (arr_15 [i_13 - 2] [i_0] [i_13 + 2])))));
                var_28 = ((/* implicit */signed char) max((((arr_19 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 2]) - (arr_19 [i_0 + 1] [i_0] [i_0 - 2] [i_0 + 1]))), (((arr_19 [i_0 + 1] [0U] [i_0 + 2] [i_0 - 1]) + (2096640)))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 3) /* same iter space */
            {
                var_29 = arr_18 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0];
                var_30 *= ((/* implicit */signed char) min(((+(arr_45 [i_13 - 2] [i_13 + 1] [i_13 + 2]))), (((arr_45 [i_13 - 2] [i_13 + 1] [i_13 + 2]) + (arr_45 [i_13 - 2] [i_13 + 1] [i_13 + 2])))));
            }
            for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 3) /* same iter space */
            {
                arr_58 [(_Bool)1] [i_13] [i_13 - 2] [i_13] |= ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - ((~(arr_16 [(short)9] [(short)9] [i_13 + 1]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_44 [i_0])), (var_8)))) && (((/* implicit */_Bool) (unsigned short)65535))))))));
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) 
                {
                    for (short i_18 = 0; i_18 < 23; i_18 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) min((var_31), (((((((/* implicit */long long int) 1204132207)) % (-1LL))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_29 [i_0] [i_13 + 1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) 488694597U)))))))))))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (!(((_Bool) var_13)))))));
                        }
                    } 
                } 
                arr_63 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_0)))) & (((18348234382079361383ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11787))) / (-9223372036854775787LL))))))));
            }
            arr_64 [2ULL] [2ULL] |= ((/* implicit */signed char) ((int) max((((/* implicit */unsigned long long int) (short)3)), (var_10))));
            var_33 = ((/* implicit */unsigned short) 9018401586100358103ULL);
            arr_65 [i_13] = ((/* implicit */_Bool) min((max((arr_60 [i_0 - 1] [i_0 + 3]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_0 [i_0]))))))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_13] [i_13])) > (((/* implicit */int) (signed char)37))))), (max((((/* implicit */unsigned char) (signed char)-62)), (var_6))))))));
        }
        for (short i_19 = 2; i_19 < 20; i_19 += 3) /* same iter space */
        {
            arr_68 [i_0] [i_0] = ((/* implicit */short) arr_24 [i_19] [(unsigned char)5] [i_19] [0] [i_19]);
            arr_69 [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [8U])) ? ((+(((/* implicit */int) ((short) arr_24 [i_0] [i_0] [13LL] [i_0] [i_0]))))) : (min((((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) arr_57 [19ULL] [i_19] [i_19] [i_19])))), (((/* implicit */int) ((18446744073709551615ULL) > (17615062271892135781ULL))))))));
            arr_70 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_8)) | (((/* implicit */int) arr_56 [i_0] [i_0 + 1] [i_0 - 2]))))));
        }
        var_34 += ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))) ? ((-(((/* implicit */int) arr_56 [i_0 + 2] [i_0] [i_0 + 2])))) : (((/* implicit */int) var_5))));
    }
    /* vectorizable */
    for (unsigned long long int i_20 = 2; i_20 < 20; i_20 += 4) /* same iter space */
    {
        arr_74 [i_20] = ((_Bool) arr_52 [i_20] [i_20 + 2] [i_20] [i_20 + 2]);
        /* LoopSeq 1 */
        for (int i_21 = 0; i_21 < 23; i_21 += 4) 
        {
            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) ^ (18446744073709551615ULL)))))))));
            /* LoopNest 3 */
            for (unsigned char i_22 = 1; i_22 < 20; i_22 += 4) 
            {
                for (unsigned char i_23 = 3; i_23 < 21; i_23 += 4) 
                {
                    for (signed char i_24 = 0; i_24 < 23; i_24 += 3) 
                    {
                        {
                            arr_84 [i_20] &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)44)) * (((/* implicit */int) arr_49 [i_22 - 1] [i_22 - 1] [i_22 + 3] [i_22]))));
                            var_36 |= ((/* implicit */signed char) ((var_7) - (((/* implicit */int) arr_54 [i_21] [i_21]))));
                            var_37 += ((((/* implicit */_Bool) (unsigned short)4727)) ? (((((/* implicit */_Bool) (unsigned char)127)) ? (var_11) : (((/* implicit */unsigned long long int) arr_51 [i_23] [i_23] [i_23 + 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_20 - 1] [5] [5] [i_20])) ? (((/* implicit */int) var_1)) : (-16376)))));
                        }
                    } 
                } 
            } 
            arr_85 [i_20 - 1] [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) (short)22))) : (arr_0 [i_20 - 1])));
        }
        var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) arr_15 [i_20 + 2] [i_20] [i_20 + 3]))));
    }
}
