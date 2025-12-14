/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38887
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((var_10) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_1 - 1] [2LL]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))))) ? (((int) (signed char)-1)) : (((/* implicit */int) arr_5 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [0U])) ? (var_2) : (((/* implicit */int) (signed char)79))))) ? (arr_4 [i_0] [i_1 - 1] [(_Bool)1]) : (var_9))))))));
            /* LoopSeq 1 */
            for (int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                arr_10 [i_2 + 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_0]);
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_13 [i_0] [i_1] [i_0] [i_3] = ((unsigned long long int) ((((/* implicit */_Bool) ((int) var_1))) ? (-3844367319562453287LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -6299679424774987274LL)) || (arr_5 [i_2 - 2])))))));
                    arr_14 [i_0] [i_1] [i_0] [i_0] = arr_12 [i_1] [i_1 - 2] [i_2] [i_1 - 2];
                    var_13 ^= ((/* implicit */signed char) (+(((/* implicit */int) max(((!(((/* implicit */_Bool) (short)22682)))), (arr_0 [i_2] [i_2]))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    var_14 = ((/* implicit */long long int) 3013166501500249831ULL);
                    arr_17 [i_4] [i_0] [i_4] [i_1] [i_4] [i_1 - 1] = ((/* implicit */int) (~((~(var_9)))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    var_15 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (short)-26507)), (-8288831562687931416LL))), (((((/* implicit */_Bool) (~(arr_3 [i_0] [i_1] [i_2])))) ? (min((var_3), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_0] [i_0] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_5] [i_2])))))))))));
                    arr_22 [i_5] [i_5] [i_2] &= ((/* implicit */unsigned long long int) 4118877464U);
                    arr_23 [i_5] [i_2] [i_2] [i_2] [i_0] [i_0] &= ((/* implicit */unsigned int) arr_18 [i_2] [i_2 - 2] [i_2] [i_1 - 1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        arr_27 [i_2 - 1] [i_1] [i_1] [i_5] [i_6] = (~(((/* implicit */int) arr_20 [i_2 - 2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1])));
                        var_16 = ((/* implicit */int) ((1806073268U) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) var_10)))))));
                        var_17 = (~(arr_24 [i_1] [i_1 - 1] [i_5] [i_1 - 2] [i_1 - 2]));
                        arr_28 [i_6] [i_5] [i_5] [i_1] [i_1 - 2] [i_0] [i_0] = ((/* implicit */int) arr_8 [i_1]);
                    }
                    for (unsigned char i_7 = 1; i_7 < 9; i_7 += 2) 
                    {
                        arr_31 [i_1] [i_1 - 2] [i_1 - 2] [i_2] [i_1 - 2] [i_1] = ((/* implicit */short) var_6);
                        arr_32 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_2 - 1] [i_1] [i_7]))));
                        var_18 = ((/* implicit */signed char) min((((/* implicit */int) var_10)), (((int) arr_3 [i_1 - 2] [i_1] [i_7 + 1]))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_29 [i_0] [i_0] [i_0] [i_2 - 2] [i_2 - 2] [i_7] [i_7]))));
                        arr_33 [i_1] [i_1] [i_5] = ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1 - 1] [i_1 - 2]);
                    }
                }
                for (int i_8 = 2; i_8 < 7; i_8 += 1) 
                {
                    var_20 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 2 */
                    for (short i_9 = 2; i_9 < 9; i_9 += 2) 
                    {
                        var_21 = (+(((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_9 + 1] [i_0] [i_2] [i_8] [i_8])) || (var_0)))));
                        var_22 = ((/* implicit */int) max((var_22), ((((_Bool)1) ? ((+(((/* implicit */int) (unsigned char)107)))) : ((+(((/* implicit */int) (_Bool)1))))))));
                        arr_38 [i_0] [i_0] [i_1] [i_2] [i_1] [i_9 + 1] = ((/* implicit */unsigned int) ((var_9) < (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_16 [i_9])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_35 [i_1] [i_2] [i_8] [i_2])))), (((/* implicit */int) arr_26 [i_1] [i_8 - 1])))))));
                        arr_39 [i_9] [i_8] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1]);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((((1737373293U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (-2075940501)))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_7 [i_1] [i_1] [i_8 + 2] [i_10]) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))))))));
                        var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_37 [i_1])), (1292236856U)))), (min((((((/* implicit */_Bool) 11555568828716557835ULL)) ? (((/* implicit */unsigned long long int) var_3)) : (var_9))), (((/* implicit */unsigned long long int) min((arr_19 [i_1] [i_1 - 2]), (((/* implicit */int) var_8)))))))));
                    }
                    var_25 = ((/* implicit */long long int) arr_37 [i_1]);
                }
            }
            arr_42 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */int) arr_25 [i_1 - 1] [i_1 - 2] [i_1] [i_1 + 1] [i_1 - 1]))))) ? (((unsigned int) arr_25 [i_1 + 1] [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 2])) | (((/* implicit */int) arr_25 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 2])))))));
            arr_43 [i_1] = ((/* implicit */long long int) var_10);
            arr_44 [i_1] = ((/* implicit */short) var_2);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 3; i_11 < 6; i_11 += 1) 
        {
            arr_48 [i_11] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_12 [8] [i_11] [i_0] [i_11])))))));
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                arr_53 [i_0] [i_12] [i_12] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (arr_24 [i_0] [i_0] [i_12] [i_0] [i_0]) : (((/* implicit */int) var_0)))) | (min((arr_24 [i_0] [i_12] [i_12] [i_0] [i_12]), (((/* implicit */int) var_10))))));
                var_26 ^= ((/* implicit */short) max(((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)4887))))) : (((/* implicit */int) (!((_Bool)1)))))), (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) min((19LL), (((/* implicit */long long int) (_Bool)1))))))))));
                var_27 = ((/* implicit */unsigned char) max((arr_7 [i_12] [i_11 + 3] [i_12] [i_12]), (((((/* implicit */int) arr_25 [i_11 - 1] [i_11 - 2] [i_12] [i_11] [i_12])) + (((/* implicit */int) arr_25 [i_11 + 2] [i_11 + 2] [i_12] [i_11 + 2] [i_11 + 2]))))));
                arr_54 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_12] [i_12]);
            }
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_11 + 4] [i_0])) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned char) arr_51 [(_Bool)0] [(_Bool)0] [(_Bool)0])))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_11 [(short)8] [i_0] [i_0] [(short)8]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_46 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))) % (4294967285U))))));
        }
    }
    for (long long int i_13 = 0; i_13 < 11; i_13 += 3) 
    {
        var_29 ^= ((/* implicit */_Bool) arr_56 [i_13]);
        var_30 = ((/* implicit */unsigned long long int) (~(var_4)));
    }
    for (short i_14 = 0; i_14 < 14; i_14 += 3) 
    {
        var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((-776876754) >= (((/* implicit */int) arr_57 [i_14])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_58 [i_14])) || (((/* implicit */_Bool) var_3)))))))) & (((((/* implicit */_Bool) arr_57 [i_14])) ? (((unsigned int) arr_58 [i_14])) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_0)), (arr_58 [i_14])))))))));
        /* LoopSeq 2 */
        for (long long int i_15 = 4; i_15 < 10; i_15 += 4) 
        {
            arr_63 [i_14] [i_14] [i_15] = ((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (arr_59 [i_15 - 3] [i_15])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (12374989091235805157ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (arr_59 [i_15 - 3] [i_15 - 3])))));
            /* LoopNest 2 */
            for (int i_16 = 2; i_16 < 13; i_16 += 3) 
            {
                for (unsigned int i_17 = 1; i_17 < 11; i_17 += 4) 
                {
                    {
                        arr_70 [i_16] [i_14] [i_16] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (unsigned char)207)) << (((((/* implicit */int) (short)-22578)) + (22579))))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (15826571996806595619ULL) : (((/* implicit */unsigned long long int) var_4))))) ? (min((((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13))))), (((/* implicit */unsigned long long int) arr_69 [i_16] [i_16])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_59 [i_14] [i_15 + 1]), (((/* implicit */int) var_1))))) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_14] [i_14] [i_14]))) > (arr_65 [i_14] [i_14] [i_15] [i_15])))))))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_68 [i_15] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) / (((((/* implicit */_Bool) var_1)) ? (var_7) : (var_9))))))));
                        var_34 = ((/* implicit */_Bool) var_8);
                        var_35 |= ((((_Bool) var_10)) ? (((((/* implicit */_Bool) arr_62 [i_15] [i_15])) ? (((/* implicit */unsigned long long int) min((0LL), (((/* implicit */long long int) (unsigned char)187))))) : (((((/* implicit */_Bool) arr_58 [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_14] [i_15] [i_14] [i_14] [i_14] [i_14]))) : (7856696528868278796ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
                    }
                } 
            } 
            arr_71 [i_15] [i_14] [i_14] = ((/* implicit */long long int) arr_69 [i_15] [i_15 - 2]);
            var_36 = ((_Bool) min((min((var_3), (((/* implicit */long long int) arr_67 [i_14] [i_15] [i_14] [i_15] [i_15] [i_15])))), (((((/* implicit */_Bool) arr_64 [i_15] [i_14] [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_3)))));
        }
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_19 = 0; i_19 < 14; i_19 += 3) 
            {
                var_37 ^= ((/* implicit */_Bool) var_5);
                var_38 *= ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_66 [i_14] [i_14] [i_14]), (((/* implicit */unsigned char) (_Bool)1))))), (((((((/* implicit */_Bool) 8316038885180182588LL)) ? (((/* implicit */int) arr_69 [(short)4] [i_18 + 1])) : (((/* implicit */int) arr_57 [i_14])))) >> (((/* implicit */int) arr_76 [i_18 + 1] [i_18 + 1] [i_19]))))));
            }
            var_39 += ((/* implicit */_Bool) 1506106313);
            var_40 = ((/* implicit */short) (+(((/* implicit */int) arr_58 [i_14]))));
            /* LoopSeq 1 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_41 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)123))))) != (var_6)));
                var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (var_2)))))) % (((var_4) << (((/* implicit */int) (!(((/* implicit */_Bool) 1327693953723410651LL))))))))))));
            }
        }
        var_43 = ((/* implicit */int) min((var_43), ((+(((/* implicit */int) arr_58 [i_14]))))));
    }
    /* LoopSeq 2 */
    for (short i_21 = 0; i_21 < 10; i_21 += 3) 
    {
        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_21] [i_21] [i_21])) : (((/* implicit */int) var_8))))) ? (2472864152U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3))))))) ? ((+(((/* implicit */int) min((arr_35 [i_21] [i_21] [i_21] [i_21]), (var_0)))))) : ((+(((/* implicit */int) (short)-22585))))));
        var_45 &= ((/* implicit */short) (!(((/* implicit */_Bool) min(((signed char)51), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_58 [i_21]))))))))));
    }
    /* vectorizable */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        var_46 = ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (arr_55 [i_22])))) : (((((/* implicit */_Bool) arr_6 [(unsigned char)0])) ? (arr_4 [i_22] [i_22] [0U]) : (((/* implicit */unsigned long long int) arr_16 [i_22])))));
        var_47 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_82 [i_22]))));
    }
}
