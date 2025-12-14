/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197256
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    arr_10 [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) arr_4 [i_0] [i_1] [(unsigned char)10]);
                    arr_11 [i_2] [i_1] [i_2] = ((((/* implicit */int) ((((/* implicit */_Bool) -320988319)) || (((/* implicit */_Bool) arr_7 [(unsigned char)13] [i_1] [i_2]))))) <= (((/* implicit */int) (short)32758)));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (signed char)106))));
                        var_13 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_3]))) + (1762181286U));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned char) 4107423347U);
                            arr_16 [i_0] [i_1] [i_1] [i_2] [(unsigned short)18] [i_4] = ((/* implicit */unsigned short) arr_4 [i_2] [(unsigned char)1] [i_4]);
                        }
                    }
                    /* LoopSeq 4 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [(signed char)18] [i_1] [16] [i_5] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_2] [i_6])) >= (((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))));
                            var_15 = ((/* implicit */unsigned char) arr_9 [i_0]);
                        }
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            arr_27 [15LL] [i_1] [i_7] [i_5] [16LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((528482304LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-127)))))) && (((/* implicit */_Bool) -528482322LL))));
                            arr_28 [i_1] [i_5] = ((/* implicit */_Bool) -528482305LL);
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45849))) ^ (arr_21 [i_0] [(signed char)8] [i_1] [(_Bool)1] [i_5] [(unsigned char)14] [i_7])));
                            arr_29 [i_0] [i_0] [i_0] [3LL] [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_7] [i_5] [i_5] [i_0] [i_5] [i_5] [i_0])))))));
                            arr_30 [i_5] [8LL] [0] [i_0] [i_7] [(unsigned char)11] = ((/* implicit */_Bool) (+((-(6089277897210870076ULL)))));
                        }
                        for (unsigned long long int i_8 = 3; i_8 < 19; i_8 += 3) 
                        {
                            var_17 = ((/* implicit */signed char) (-(arr_21 [(_Bool)1] [i_8] [i_8 + 1] [0U] [i_5] [i_8 + 1] [i_8])));
                            arr_34 [i_5] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_8 - 1] [i_8 - 1] [i_8 - 3] [i_8 + 1] [i_1])) % (((/* implicit */int) arr_20 [i_8] [i_8 - 1] [i_8 + 1] [i_8 - 2] [i_8]))));
                            var_18 = ((/* implicit */long long int) (+(arr_23 [i_8 - 2] [i_8 - 2] [(unsigned char)12] [i_8 - 3] [i_8 - 3])));
                            var_19 = ((/* implicit */unsigned short) ((arr_23 [i_8] [i_8] [i_8 - 3] [i_8] [i_8]) ^ (((((/* implicit */int) arr_20 [i_8 - 1] [i_5] [11LL] [i_1] [i_0])) | (arr_6 [i_0] [i_5] [i_8])))));
                        }
                        var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) != (((arr_18 [i_0] [i_0] [(_Bool)1] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-29)))))));
                    }
                    for (int i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) -528482304LL);
                        var_22 = ((/* implicit */unsigned short) ((arr_13 [i_2] [i_9]) >> (((arr_13 [i_9] [i_2]) - (793380357949036831LL)))));
                        arr_37 [10LL] [i_1] [i_0] = ((/* implicit */unsigned char) ((((-8192) + (2147483647))) << (((((/* implicit */int) arr_36 [i_0] [i_1])) - (75)))));
                        var_23 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) >> (((/* implicit */int) arr_2 [i_0]))));
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            arr_40 [i_0] [i_1] [i_2] [i_2] [i_9] [i_10] = ((/* implicit */unsigned short) arr_35 [i_0] [i_2] [(_Bool)1]);
                            arr_41 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) (signed char)-76);
                            arr_42 [12LL] [i_1] [i_1] [i_1] [i_9] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [(_Bool)1] [4] [i_9] [i_9] [i_10]);
                            arr_43 [i_0] [(_Bool)1] [i_2] [i_9] [i_2] [i_10] = ((/* implicit */unsigned long long int) (_Bool)0);
                        }
                        for (short i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((arr_5 [i_2] [i_2]) && (arr_5 [i_0] [i_0])));
                            arr_47 [i_0] [i_1] [i_1] [i_2] [i_9] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_2] [i_11])) || (((/* implicit */_Bool) arr_45 [16LL] [(unsigned char)7]))));
                            arr_48 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] = ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_8 [i_2] [i_1])));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_33 [i_11]))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_2] [(unsigned char)18]))));
                            arr_52 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [(short)3] [i_1] [16U] [(short)3] [i_12]))) * ((+(0ULL)))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            var_27 -= ((/* implicit */unsigned short) 15735611161172339948ULL);
                            var_28 &= ((/* implicit */long long int) ((((/* implicit */int) arr_45 [i_9] [(_Bool)1])) != (((/* implicit */int) arr_45 [i_1] [i_13]))));
                        }
                    }
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
                    {
                        arr_59 [(_Bool)1] [(short)10] [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_2] [i_2] [i_14] [i_2])) && (arr_57 [16ULL]));
                        arr_60 [i_14] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_13 [i_14] [i_1]);
                        arr_61 [i_0] [(_Bool)1] [i_0] [(short)12] [i_1] = ((/* implicit */int) ((((arr_12 [0U] [i_1] [i_2] [i_14]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)2]))))) << (((/* implicit */int) arr_5 [i_0] [i_2]))));
                        arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) (unsigned char)91)) & ((-(((/* implicit */int) (_Bool)1)))));
                    }
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
                    {
                        var_29 = (signed char)-29;
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 4; i_16 < 19; i_16 += 3) 
                        {
                            arr_68 [i_0] [6] [i_2] [6] [i_16] = ((/* implicit */unsigned char) ((arr_21 [i_2] [i_15] [i_2] [i_15] [i_0] [i_16 - 1] [i_2]) | (arr_21 [i_0] [14LL] [(unsigned char)8] [i_15] [i_0] [i_16 - 1] [0LL])));
                            arr_69 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_16] [i_0] [i_16 - 4] [i_16 + 1] [i_16 - 1] [i_16 - 3] [i_16 + 1])) ^ (arr_23 [i_0] [i_0] [i_0] [(_Bool)1] [i_0])));
                            var_30 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (_Bool)1)) | ((-2147483647 - 1))))));
                            var_31 += ((/* implicit */unsigned long long int) arr_56 [i_0] [i_1] [i_2] [i_15] [i_16 + 1]);
                            arr_70 [i_15] [i_1] [i_2] [i_2] [i_16] = ((/* implicit */long long int) ((arr_31 [0LL] [(unsigned char)1] [i_2] [(unsigned short)11] [i_16 - 2] [i_2]) - (((/* implicit */unsigned long long int) arr_54 [(_Bool)1] [4LL] [(unsigned short)10] [i_15] [i_16 - 2] [i_16]))));
                        }
                    }
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    arr_75 [i_0] [i_1] [i_17] [i_17] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_17] [i_17]))));
                    var_32 = ((/* implicit */long long int) (_Bool)1);
                    var_33 -= ((/* implicit */unsigned short) ((1343580885U) >> (((/* implicit */int) arr_71 [i_17] [i_1] [i_0] [i_0]))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_18 = 0; i_18 < 18; i_18 += 1) 
    {
        arr_80 [i_18] [(unsigned short)8] = ((/* implicit */unsigned long long int) arr_17 [(signed char)12]);
        arr_81 [i_18] = ((/* implicit */unsigned int) arr_14 [i_18] [i_18] [i_18] [(_Bool)1] [i_18] [i_18] [i_18]);
        /* LoopNest 2 */
        for (long long int i_19 = 0; i_19 < 18; i_19 += 3) 
        {
            for (unsigned char i_20 = 0; i_20 < 18; i_20 += 1) 
            {
                {
                    var_34 = ((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)40)) >> (((3301061473U) - (3301061450U)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_35 = ((/* implicit */_Bool) arr_6 [i_18] [i_19] [i_21]);
                        arr_88 [i_19] [i_19] [(_Bool)1] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_83 [6ULL] [i_19] [i_20])) && (((/* implicit */_Bool) arr_8 [i_19] [i_21]))));
                        arr_89 [i_18] [i_18] [i_18] [(_Bool)1] [i_18] [i_19] = ((/* implicit */_Bool) (unsigned char)154);
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_67 [i_21] [i_18] [i_20] [i_21] [i_19])) * (((/* implicit */int) arr_67 [i_18] [i_18] [i_18] [3U] [i_18]))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_22 = 0; i_22 < 18; i_22 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            arr_94 [i_18] [i_18] [i_20] [i_19] [i_22] [i_22] [i_23] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_19])) && ((_Bool)1))))));
                            arr_95 [17U] [i_19] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_65 [i_18] [i_20] [i_23])) | (((/* implicit */int) arr_64 [i_18] [i_18])))) * (((/* implicit */int) (unsigned short)36012))));
                            var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_65 [i_18] [i_18] [i_18]))));
                        }
                        arr_96 [i_20] [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (!(((/* implicit */_Bool) 6660188264309520920LL)))))));
                        /* LoopSeq 1 */
                        for (signed char i_24 = 1; i_24 < 16; i_24 += 3) 
                        {
                            var_38 += ((arr_20 [i_24 + 2] [i_24 - 1] [i_24 + 2] [i_24 + 1] [i_24 + 2]) || (((/* implicit */_Bool) 8192)));
                            arr_99 [i_22] [i_20] [i_19] [i_19] = ((/* implicit */_Bool) arr_23 [i_22] [i_24 + 1] [i_24 + 1] [i_24] [i_22]);
                            arr_100 [i_18] [i_19] [(signed char)8] [i_18] [i_24 - 1] [i_19] = ((/* implicit */_Bool) arr_87 [i_18] [i_19] [i_20] [i_22] [i_22]);
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) arr_8 [i_18] [(_Bool)1]))));
                        }
                    }
                    arr_101 [i_18] [i_18] [i_19] [i_20] = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) (signed char)68)) != (((/* implicit */int) (_Bool)1))))) / (((/* implicit */int) arr_66 [19ULL] [i_19] [i_19] [i_19] [i_19] [i_19])))) % (((/* implicit */int) (unsigned char)86))));
                    /* LoopSeq 2 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_40 = (unsigned char)36;
                        arr_104 [i_18] [i_19] [i_20] [i_18] [i_25] = ((/* implicit */unsigned short) ((arr_74 [i_18] [i_18] [(unsigned char)4] [i_18]) ^ ((-(arr_15 [17U] [i_18] [i_20] [19ULL] [i_19] [i_18])))));
                    }
                    for (signed char i_26 = 0; i_26 < 18; i_26 += 2) 
                    {
                        var_41 = arr_38 [i_19];
                        var_42 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_38 [i_19])) >= (((/* implicit */int) arr_38 [i_26])))))));
                        var_43 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_57 [(unsigned short)2])) != (((/* implicit */int) arr_57 [i_19]))))) >> (((((arr_83 [i_18] [i_18] [i_18]) << (((arr_54 [i_18] [i_19] [i_20] [i_20] [i_26] [i_26]) - (908441950U))))) - (2818572270U)))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (unsigned char)219))));
            /* LoopSeq 2 */
            for (unsigned char i_28 = 3; i_28 < 17; i_28 += 3) 
            {
                var_45 = ((/* implicit */unsigned long long int) arr_91 [4ULL]);
                var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) arr_15 [i_18] [i_18] [9LL] [i_18] [i_18] [3LL]))));
            }
            for (unsigned short i_29 = 0; i_29 < 18; i_29 += 1) 
            {
                var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((((/* implicit */_Bool) arr_44 [(_Bool)1] [i_27] [i_18])) && (((/* implicit */_Bool) (unsigned short)45831))))))))))));
                var_48 &= ((((/* implicit */_Bool) (+(9223372036854775807LL)))) || (((/* implicit */_Bool) (-(arr_78 [i_18])))));
                var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) ((((/* implicit */int) (unsigned char)207)) == (((/* implicit */int) ((((/* implicit */_Bool) arr_111 [i_18] [i_27] [i_27])) && (((/* implicit */_Bool) arr_114 [i_18] [i_18]))))))))));
            }
        }
    }
    var_50 = ((/* implicit */unsigned int) var_9);
    var_51 = ((/* implicit */unsigned short) var_11);
}
