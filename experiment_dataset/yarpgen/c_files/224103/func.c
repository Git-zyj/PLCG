/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224103
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
    var_18 = ((/* implicit */short) min((var_18), (var_17)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : (arr_1 [i_0])))) ? ((-(arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            var_19 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_3) : (arr_3 [i_1] [(_Bool)1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_6 [i_0])))))) : (min((arr_0 [i_1] [i_0]), (((/* implicit */unsigned int) arr_6 [i_1])))))));
            var_20 *= ((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0] [i_0]));
            var_21 = ((/* implicit */unsigned long long int) ((((unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (arr_4 [i_0] [i_0])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max(((unsigned short)56295), (((/* implicit */unsigned short) var_5)))))))));
            var_22 -= ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) var_0)))) ? (2ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [6U] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */unsigned long long int) -962408783))));
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) (~(((18446744073709551596ULL) << (((arr_3 [i_0] [i_0] [i_0]) - (8949328759229490083LL)))))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2 + 2]))) ^ (arr_9 [i_2] [i_0] [i_0]))))));
            arr_10 [i_0] = ((/* implicit */short) var_8);
        }
        var_25 = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) var_1)) ? (arr_9 [7ULL] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))), ((~(12274152527928805943ULL))))), (((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_0]), (((unsigned int) arr_7 [i_0] [i_0] [i_0])))))));
    }
    for (signed char i_3 = 1; i_3 < 17; i_3 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_26 = ((/* implicit */unsigned long long int) (signed char)39);
            /* LoopSeq 2 */
            for (signed char i_5 = 2; i_5 < 19; i_5 += 1) 
            {
                var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_5 - 2] [i_3 + 3] [i_3])) ? (((/* implicit */long long int) ((arr_4 [i_4] [i_3]) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_3]))))) : ((+(var_3))))) / (min((((/* implicit */long long int) ((signed char) arr_17 [i_3]))), (max((((/* implicit */long long int) arr_17 [i_3])), (arr_1 [i_5])))))));
                var_28 = ((/* implicit */int) (unsigned short)9252);
                arr_18 [i_5 - 2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned short) ((var_12) ^ (((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1])), (423810980)))))));
                arr_19 [i_3] [i_4] [i_3] = ((/* implicit */_Bool) arr_12 [i_3]);
                var_29 = ((/* implicit */signed char) arr_16 [i_5] [i_3] [i_3]);
            }
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                var_30 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_17)) ? (max((var_8), (((/* implicit */unsigned long long int) (unsigned char)220)))) : (3430701831179590020ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_3])))));
                arr_24 [5] [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) arr_17 [i_3])))));
                var_31 = ((/* implicit */signed char) ((unsigned int) (~(((((/* implicit */_Bool) arr_21 [i_3] [i_6])) ? (-1756185450) : (((/* implicit */int) var_13)))))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_7 = 3; i_7 < 18; i_7 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    arr_32 [i_3] [i_4] [(unsigned short)14] [i_8] = ((/* implicit */short) arr_20 [i_3] [i_4] [i_4]);
                    var_32 = ((/* implicit */_Bool) ((((_Bool) 1328402272)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 423810980)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7] [18U]))) : (arr_0 [i_3] [16ULL])))) : (arr_3 [i_8] [i_7] [i_4])));
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3]))))) != (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4] [i_8]))))))));
                }
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_3] [i_3] [i_3] [i_4])) ? (((/* implicit */int) arr_14 [i_3 - 1] [i_3 + 3])) : (((/* implicit */int) arr_31 [i_3] [i_3 + 3] [i_3] [i_3 - 1]))));
                var_35 = ((/* implicit */_Bool) ((signed char) 21));
                arr_33 [i_3] = ((/* implicit */int) (signed char)24);
            }
        }
        for (long long int i_9 = 3; i_9 < 18; i_9 += 3) 
        {
            arr_38 [i_3] [i_3] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_37 [i_3])) ? (18446744073709551589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3]))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_8))))) ? (max((arr_25 [i_9] [i_9 + 1] [i_9] [i_9 + 1]), (arr_25 [i_9] [i_9 + 1] [i_9] [i_9 + 1]))) : (((/* implicit */int) var_4))));
            /* LoopSeq 1 */
            for (long long int i_10 = 2; i_10 < 19; i_10 += 2) 
            {
                arr_41 [i_3] = ((/* implicit */int) var_3);
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_3]))))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_3)))))) ? (((((/* implicit */_Bool) arr_37 [i_3])) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_29 [i_3] [i_3] [i_3] [(_Bool)0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_10])) ? (((/* implicit */long long int) arr_40 [i_3])) : (arr_37 [i_3])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3]))) | (((((/* implicit */_Bool) arr_3 [i_3 + 3] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_3] [i_9] [i_3]))) : (1940753191U))))))));
            }
        }
        for (signed char i_11 = 2; i_11 < 18; i_11 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 2; i_12 < 17; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_37 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_25 [i_13] [i_12] [i_11 + 2] [(signed char)17])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_3 - 1]))))))) + (((/* implicit */int) max((((/* implicit */signed char) ((9223372036854775797LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_11] [i_3])))))), (arr_7 [i_3 - 1] [i_12] [i_13]))))));
                        arr_51 [i_3] [i_11] [i_11] [i_3] [i_12] [i_3] = ((/* implicit */signed char) 14735769725756776971ULL);
                        var_38 = ((/* implicit */unsigned char) 4273404160U);
                        arr_52 [i_3] [i_3] = ((/* implicit */_Bool) 626802304U);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_14 = 2; i_14 < 19; i_14 += 2) /* same iter space */
            {
                arr_55 [i_3] [i_11] [11ULL] [i_3] = ((signed char) max(((~(((/* implicit */int) arr_35 [i_11])))), (((/* implicit */int) max((var_5), (arr_34 [i_3] [i_11 - 2] [i_3]))))));
                arr_56 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_28 [i_3] [i_3] [i_3]);
                var_39 = ((/* implicit */short) max((((((/* implicit */_Bool) ((signed char) arr_45 [i_3] [i_11] [i_14]))) ? (((unsigned long long int) (signed char)-123)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_14] [i_11 - 2] [i_3])) ? (((/* implicit */int) arr_7 [i_3 + 3] [(short)14] [i_3])) : (((/* implicit */int) arr_7 [12LL] [i_11] [i_14]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-3544))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)13943)))) : (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) arr_31 [i_3] [i_3] [11LL] [i_14]))))))))));
            }
            for (signed char i_15 = 2; i_15 < 19; i_15 += 2) /* same iter space */
            {
                var_40 = ((/* implicit */signed char) ((short) (_Bool)1));
                arr_60 [i_3] = ((/* implicit */short) ((unsigned int) (short)3072));
            }
            /* vectorizable */
            for (unsigned char i_16 = 1; i_16 < 19; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    for (unsigned short i_18 = 2; i_18 < 18; i_18 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (short)-32748)))) ^ (((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3 + 3])) ? (1108270875) : (((/* implicit */int) arr_64 [i_18 + 1] [i_11] [i_3] [i_3] [i_11] [i_3]))))));
                            var_42 = ((/* implicit */_Bool) ((long long int) ((arr_70 [i_17] [i_17]) & (arr_26 [i_18] [i_3] [i_3] [i_3]))));
                        }
                    } 
                } 
                arr_72 [i_3] [i_3] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) 135797715))) ? (948700645U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240)))));
            }
            arr_73 [i_3] [i_11 - 2] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_3] [i_11] [i_11 + 1])) || (((/* implicit */_Bool) var_12))))), (max((arr_63 [i_3] [i_3] [i_3]), (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_5))))) ? ((~(3041227275U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_69 [i_3] [i_3 + 3] [i_11 - 1] [i_11] [i_3 + 3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_3] [i_3] [i_3]))))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [8U] [i_11] [i_11] [i_11])))));
            var_43 = ((((/* implicit */_Bool) arr_58 [i_3] [i_11] [i_3])) ? (arr_59 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((unsigned int) 437079811))))));
            arr_74 [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((((unsigned int) arr_12 [i_3])) < (max((626802304U), (((/* implicit */unsigned int) var_4))))))), (((unsigned short) 127U))));
        }
        for (signed char i_19 = 2; i_19 < 18; i_19 += 2) /* same iter space */
        {
            var_44 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((max((-2941474625860599912LL), (((/* implicit */long long int) (short)4483)))) * (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (arr_21 [i_19] [4LL]))))))), (((arr_47 [i_3] [i_3] [i_3] [i_3]) ? (arr_9 [i_3] [i_3] [i_3 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_71 [(signed char)12] [i_19] [i_19 - 1] [(unsigned short)0] [i_19])), ((short)32767)))))))));
            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) min((10385594638105511830ULL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8499322843394375420ULL)) ? (((/* implicit */int) arr_48 [i_3] [i_3] [i_3] [i_3])) : (arr_25 [i_3] [i_3] [i_3 + 1] [i_3])))) ? (((((/* implicit */_Bool) arr_26 [i_19] [i_19] [i_19] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))))))))));
        }
        var_46 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), ((-(((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_3] [i_3] [i_3] [i_3])))))))));
        var_47 = ((/* implicit */signed char) ((unsigned short) arr_70 [1U] [i_3]));
        var_48 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3])) ? ((-(max((((/* implicit */long long int) var_14)), (-4035976042089368982LL))))) : (((/* implicit */long long int) min((arr_45 [i_3 + 2] [i_3] [i_3]), (arr_45 [i_3 + 3] [i_3] [i_3]))))));
    }
}
