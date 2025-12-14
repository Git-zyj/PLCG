/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215329
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
    var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) 13750147110280487872ULL)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 1977773882U)) ? (var_7) : (((/* implicit */unsigned long long int) var_11)))))) : (((/* implicit */unsigned long long int) var_11))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)201)))) - (var_7)));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_7 [i_3 + 1] [i_3 + 1] [(short)19]), (arr_7 [i_3 + 1] [i_3 + 1] [(signed char)16]))))) : (((arr_0 [i_3 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */short) ((signed char) var_10))), (arr_5 [i_0] [i_1])))), (min((arr_4 [6LL]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    arr_17 [14U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_7))) ? (arr_16 [i_0] [i_1] [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (short)12222)))));
                    arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 8843775738124927821ULL)) ? (((/* implicit */int) arr_5 [i_1] [i_4])) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned short)13])) : (((/* implicit */int) arr_7 [i_1] [i_4] [i_5]))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [(signed char)5] [i_0] [i_4])))))));
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        var_19 = ((/* implicit */_Bool) arr_2 [i_4] [i_4] [i_4]);
                        var_20 -= ((/* implicit */signed char) arr_6 [i_0] [i_0] [(short)3] [i_0]);
                        var_21 = ((/* implicit */short) (~(arr_6 [i_0] [i_0] [i_6] [i_7])));
                    }
                    for (unsigned char i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        var_22 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [0ULL] [(short)12] [i_4]))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (var_9)))));
                        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8 + 2] [(short)11])) * (((/* implicit */int) arr_22 [i_8 + 3] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 2] [i_4]))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_1] [12LL] [i_8 + 3] [i_8] [i_8 + 2] [i_8 + 3])) ? (((/* implicit */int) arr_22 [(short)14] [(unsigned char)16] [i_8 + 3] [(short)14] [i_8 + 1] [i_8 + 2])) : (((/* implicit */int) arr_22 [i_6] [i_6] [i_8 - 1] [i_8] [i_8 + 3] [i_8 + 3]))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65195)) ? (((var_7) << (((((/* implicit */int) arr_5 [13U] [i_9])) + (27239))))) : (((/* implicit */unsigned long long int) ((int) (_Bool)1)))));
                        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))));
                        arr_28 [i_0] [(short)4] [i_4] [i_4] [i_4] [i_9] = ((/* implicit */short) var_11);
                        var_27 = ((/* implicit */short) ((arr_27 [i_0] [13ULL] [i_4] [i_0] [(unsigned short)10]) % (arr_27 [i_0] [i_1] [i_4] [i_1] [i_9])));
                        var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
                    }
                    arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_8 [i_0] [(_Bool)1] [(_Bool)1]);
                }
                /* LoopSeq 2 */
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_4])) && (((/* implicit */_Bool) arr_3 [i_1]))));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_4] [i_1] [i_11])))))));
                    }
                    var_31 = ((((/* implicit */int) arr_1 [i_10])) >= (arr_4 [i_0]));
                }
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    var_32 -= ((/* implicit */_Bool) var_5);
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (arr_13 [i_0] [(short)8] [i_0])));
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        var_34 = ((/* implicit */short) (-((-(arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        var_35 ^= ((/* implicit */unsigned char) ((arr_25 [(signed char)17] [i_1] [i_4] [(signed char)17] [i_1]) ? (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_25 [i_0] [i_1] [(signed char)0] [i_0] [i_13]))));
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), ((-(arr_13 [i_0] [i_0] [i_0])))));
                        arr_42 [i_0] [i_1] [i_13] = ((/* implicit */unsigned int) arr_13 [i_0] [i_12] [i_13]);
                    }
                    for (short i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        arr_45 [i_0] [i_1] [i_4] [5U] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((signed char) (signed char)63))) & (((/* implicit */int) arr_38 [i_4] [i_12]))));
                        var_37 ^= arr_41 [i_0] [(_Bool)1] [i_4] [i_12] [i_1] [i_4] [i_0];
                        var_38 ^= ((/* implicit */unsigned int) arr_1 [i_0]);
                    }
                }
                var_39 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) -9200001593533816192LL)) ? (((/* implicit */int) (short)-1)) : (((((/* implicit */_Bool) 608124290960534690ULL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_4]))))));
                arr_46 [i_0] [i_1] [i_4] = var_13;
            }
            /* vectorizable */
            for (short i_15 = 2; i_15 < 19; i_15 += 1) 
            {
                arr_51 [(_Bool)1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_24 [i_0] [i_15 - 2] [i_15 - 1] [i_15 + 1] [i_15 - 2] [i_15] [i_15 - 1]))));
                var_40 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_15 - 2])) : (((/* implicit */int) arr_5 [i_0] [i_0]))));
            }
            var_41 = min((((/* implicit */unsigned long long int) var_12)), (min((arr_23 [i_0] [(short)18] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_1])))));
        }
        for (short i_16 = 1; i_16 < 18; i_16 += 3) 
        {
            arr_56 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_16] [i_16] [i_16])))) == ((~(((/* implicit */int) (short)-2))))))) != ((-(((/* implicit */int) max((var_4), (((/* implicit */signed char) var_8)))))))));
            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775781LL)) ? (((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)0] [i_0])) : (((/* implicit */int) ((short) arr_44 [i_0] [i_0] [i_0] [i_16 + 1]))))))));
        }
        var_43 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (long long int i_17 = 0; i_17 < 23; i_17 += 4) 
    {
        var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) arr_57 [i_17]))));
        /* LoopNest 2 */
        for (short i_18 = 0; i_18 < 23; i_18 += 3) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        var_45 ^= ((/* implicit */_Bool) (~(((((/* implicit */int) var_10)) | (((/* implicit */int) arr_62 [(short)0] [(short)0] [i_20]))))));
                        var_46 -= ((/* implicit */short) ((signed char) ((((/* implicit */int) (short)1)) >= (((/* implicit */int) arr_61 [i_18] [i_19] [i_20 - 1])))));
                        var_47 = ((/* implicit */short) (-(((/* implicit */int) arr_63 [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 - 1]))));
                    }
                    arr_66 [i_17] [i_18] [i_17] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_61 [i_19] [i_18] [i_17])) % (((/* implicit */int) arr_61 [(signed char)22] [(signed char)22] [i_19]))))));
                    var_48 = ((/* implicit */short) (signed char)-99);
                }
            } 
        } 
        var_49 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */int) arr_61 [(unsigned short)17] [i_17] [(short)10])) : (((/* implicit */int) arr_60 [i_17] [i_17]))))) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) arr_60 [i_17] [i_17])))) & (((/* implicit */int) var_12))));
        var_50 = arr_58 [i_17];
        /* LoopSeq 1 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_22 = 0; i_22 < 23; i_22 += 4) /* same iter space */
            {
                var_51 = ((/* implicit */unsigned int) arr_60 [(unsigned char)10] [(unsigned char)10]);
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_52 ^= ((/* implicit */unsigned short) max(((-(((/* implicit */int) ((signed char) var_3))))), (((/* implicit */int) var_5))));
                            var_53 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_74 [i_17] [i_17] [i_22] [i_23] [i_23] [i_24])))));
                            var_54 = ((/* implicit */unsigned long long int) max((var_54), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(arr_78 [12] [i_22] [i_22]))), (((/* implicit */unsigned int) arr_61 [i_17] [i_22] [i_24]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [(unsigned char)7] [(short)19] [i_22] [i_24])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)58019))))) ? (9223372036854775782LL) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)169))))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_58 [i_17])) + (((/* implicit */int) min((((/* implicit */short) arr_61 [i_17] [(signed char)2] [i_17])), (arr_77 [i_17] [i_21] [i_22] [i_23] [i_24]))))))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_25 = 0; i_25 < 23; i_25 += 4) /* same iter space */
            {
                var_55 = ((/* implicit */unsigned long long int) ((2060420557U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_17] [i_21] [i_21])))));
                var_56 = ((/* implicit */_Bool) var_11);
            }
            var_57 ^= ((/* implicit */unsigned short) ((min((((((/* implicit */int) (short)-2700)) / (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_1)))))) < (((/* implicit */int) var_0))));
            arr_82 [i_21] [i_21] = ((((/* implicit */_Bool) arr_74 [i_17] [(_Bool)0] [i_17] [i_17] [i_17] [i_17])) && (((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */short) arr_76 [i_21] [i_21] [i_21] [i_21] [i_21])), (arr_70 [i_21] [i_21] [i_21] [i_21])))), ((~(((/* implicit */int) arr_63 [i_17] [i_17] [i_21] [i_21]))))))));
        }
    }
}
