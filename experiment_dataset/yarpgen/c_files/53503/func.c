/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53503
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (((~(3865602849749523460ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64320)) ? (-6102280864323323186LL) : (((/* implicit */long long int) 1025428184))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) var_5)))))))) : (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-116)), (var_6)))) < ((+(65408))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        var_11 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 2]))))) || (((/* implicit */_Bool) arr_2 [(short)3])))))));
        arr_4 [i_0] = ((/* implicit */short) ((unsigned int) (unsigned char)251));
        var_12 |= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned char)48))))) ? ((~(((/* implicit */int) (unsigned char)46)))) : (((/* implicit */int) arr_0 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(9070437865884498834LL)))))) ? (var_1) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) arr_7 [i_1] [i_1]))))))))))));
        var_14 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)65)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? ((-(arr_9 [i_2] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)57))))))));
            var_16 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_9 [i_2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)42)))));
        }
        for (signed char i_3 = 3; i_3 < 14; i_3 += 4) 
        {
            var_17 |= ((/* implicit */unsigned short) -511851400);
            var_18 = ((/* implicit */unsigned int) var_0);
            arr_14 [i_1] [i_3 + 2] [i_3] = -7707533914222621995LL;
            /* LoopSeq 4 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-((~(((/* implicit */int) min((arr_12 [(short)11]), (((/* implicit */short) (signed char)-58))))))))))));
                arr_18 [i_4] [i_3] [i_4] = ((((/* implicit */int) ((((/* implicit */int) (short)-2110)) >= (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-10)), (var_0))))))) % (((/* implicit */int) (unsigned char)210)));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    var_20 = ((unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) 3405398690U)) || (((/* implicit */_Bool) var_7)))))));
                    var_21 = ((long long int) (+(((/* implicit */int) ((short) (unsigned char)240)))));
                    var_22 = ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)37)));
                }
                for (int i_6 = 2; i_6 < 15; i_6 += 4) 
                {
                    arr_24 [i_1] [i_3] [i_4] [i_6] [i_4] &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_3 + 1] [2LL]))));
                    var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)198))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_7 = 3; i_7 < 13; i_7 += 1) 
                {
                    arr_27 [i_4] [i_7] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(arr_6 [i_1])))), (arr_20 [i_7] [(short)13] [i_7 - 2] [i_7] [i_7 + 2] [i_7])))) ? ((((+(((/* implicit */int) (unsigned char)30)))) - (arr_11 [i_3 - 3] [i_3 + 2]))) : ((-(((/* implicit */int) ((unsigned char) var_3))))));
                    var_24 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (!(((/* implicit */_Bool) 36026597995708416LL))))) != (arr_15 [i_1] [i_1] [i_3 - 2] [i_7 - 2])))));
                    var_25 = (-(((((/* implicit */_Bool) arr_26 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_7 + 1] [i_7 + 2])) ? (((/* implicit */int) arr_10 [i_3 - 3] [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 1] [i_3 - 2])))));
                    var_26 = (-(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (889568605U))))) ^ (min((((/* implicit */long long int) -1477878901)), (arr_9 [i_1] [(signed char)11]))))));
                    arr_28 [8] [i_3] [i_1] [i_7] |= ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != ((-(((((/* implicit */_Bool) arr_11 [i_1] [i_7])) ? (((/* implicit */int) arr_26 [i_1] [i_1] [(unsigned short)5] [i_4] [i_7])) : (975715752)))))));
                }
                /* vectorizable */
                for (unsigned short i_8 = 1; i_8 < 13; i_8 += 3) 
                {
                    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) 1519941065069690069LL))));
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (6877025317984457998LL)))) ? (arr_16 [i_4] [i_8 - 1] [i_8] [i_8 + 3]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))));
                }
            }
            for (short i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 36026597995708416LL)))))));
                arr_35 [i_1] [i_3] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)26911))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19719))) - (arr_5 [(signed char)14] [i_3])))));
            }
            /* vectorizable */
            for (unsigned char i_10 = 1; i_10 < 12; i_10 += 1) 
            {
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                var_31 = ((/* implicit */unsigned char) ((long long int) (unsigned char)188));
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */signed char) ((arr_16 [i_10] [i_3] [i_3 - 2] [i_10]) != (((/* implicit */unsigned int) (~(arr_41 [i_1] [i_1] [i_1] [i_1]))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 3; i_12 < 12; i_12 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)49))));
                        arr_47 [i_1] [i_10] [i_10] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (36026597995708416LL)))));
                        arr_48 [i_10] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */long long int) var_8);
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)209)) ? (((((/* implicit */_Bool) var_0)) ? (6877025317984457979LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68))))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1))))))));
                        var_35 = (-(((int) var_7)));
                        var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        arr_53 [i_1] [i_1] |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_36 [i_10 + 1] [(unsigned char)9] [i_3]))));
                        arr_54 [(short)8] [i_1] [i_1] [i_3 + 2] [i_10] [i_11] [i_13 - 1] |= ((/* implicit */int) (!(((/* implicit */_Bool) 631477695U))));
                    }
                    for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        var_37 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)19)) ^ (((/* implicit */int) (unsigned char)188))))) / (arr_9 [i_3 + 1] [i_3 - 2])));
                        arr_57 [8LL] [i_3 + 1] [i_10] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -36026597995708412LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_21 [i_10] [i_11] [i_10] [i_10]))))) : (((long long int) -2242986289753932759LL))));
                        arr_58 [i_1] [(unsigned short)8] [i_10] [i_10 + 3] [i_10] [i_11] [i_14] = ((/* implicit */short) (~((-(arr_17 [i_10] [i_10] [5] [i_11])))));
                        arr_59 [i_10] [(unsigned short)0] [i_10 + 4] = ((((/* implicit */_Bool) ((unsigned short) -50642189))) ? (((-9223372036854775784LL) / (((/* implicit */long long int) -1477878927)))) : (((/* implicit */long long int) ((int) (short)3707))));
                    }
                    var_38 = (+(((/* implicit */int) (unsigned short)35678)));
                }
                for (long long int i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
                {
                    var_39 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_46 [i_1] [i_10] [i_1] [i_15])) ? (2242986289753932762LL) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_1] [14])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 1; i_16 < 13; i_16 += 2) 
                    {
                        var_40 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_7))) || ((!(((/* implicit */_Bool) arr_15 [i_1] [i_3] [i_15] [(short)14]))))));
                        var_41 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)216))))) ? (((((/* implicit */_Bool) (unsigned short)47582)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7740210078081543512ULL))) : (((/* implicit */unsigned long long int) (+(889568608U))))));
                        var_42 = ((/* implicit */long long int) (_Bool)1);
                        var_43 = ((/* implicit */int) max((var_43), ((-(((/* implicit */int) arr_12 [i_10 + 2]))))));
                        var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((/* implicit */_Bool) (~(1987338168442943950LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [i_1] [i_3] [i_10] [i_10] [i_10])))))) : (((((/* implicit */_Bool) (unsigned short)39181)) ? (889568605U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    }
                    arr_66 [i_10] = ((/* implicit */short) (-(arr_22 [i_1] [(unsigned char)4] [i_1])));
                    /* LoopSeq 1 */
                    for (int i_17 = 2; i_17 < 15; i_17 += 4) 
                    {
                        var_45 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_62 [i_10 - 1] [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */unsigned int) arr_62 [i_10 + 3] [i_17] [i_17 + 1] [i_1] [i_17 - 2])) : (7250818U)));
                        arr_71 [i_1] [i_1] [i_10] [(short)14] [i_1] [15LL] [11LL] = ((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)209))))));
                        var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? ((+(((/* implicit */int) (unsigned char)46)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    }
                }
            }
            for (unsigned int i_18 = 3; i_18 < 15; i_18 += 2) 
            {
                var_47 = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 1447944225)))))) ^ (((-4898478197378767365LL) / (((/* implicit */long long int) 1021006914))))))));
                arr_74 [(unsigned char)8] [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) min(((unsigned char)228), (((/* implicit */unsigned char) arr_64 [i_18] [(unsigned char)1] [i_18 - 3] [i_18 - 1] [i_18 - 2])))))));
            }
        }
    }
}
