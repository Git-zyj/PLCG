/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237101
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    for (short i_4 = 1; i_4 < 13; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)32))));
                            var_17 = ((/* implicit */signed char) ((unsigned int) min((arr_6 [i_0]), (((/* implicit */int) var_7)))));
                            arr_16 [i_0] [i_1 + 2] [i_1] [i_1] [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned int) var_13)), (arr_10 [i_0 - 1] [i_1 + 1]))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2])))));
                var_19 = ((/* implicit */unsigned long long int) arr_9 [i_2 - 1] [i_0] [i_0] [i_0]);
            }
            arr_17 [i_0] [i_1] [i_1 + 2] = ((/* implicit */short) var_2);
            arr_18 [i_0 - 1] [i_0] = var_6;
            var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), ((+(min((var_13), (((/* implicit */int) var_10))))))));
        }
        for (short i_5 = 4; i_5 < 11; i_5 += 4) 
        {
            arr_22 [i_5] [i_5] |= ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) arr_20 [(signed char)8] [i_0] [i_5])), (var_4)))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (((max((((/* implicit */unsigned int) var_1)), (var_4))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5] [i_5 - 4] [i_5] [i_5 + 1])))))));
        }
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            var_22 -= ((/* implicit */long long int) var_4);
            var_23 &= ((/* implicit */_Bool) min((min((var_11), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) min((arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_6] [i_6]), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [8U] [i_0] [8U] [i_0 - 1] [i_0]))))))))));
        }
        arr_25 [i_0] = max((((/* implicit */int) var_10)), ((~(arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]))));
        var_24 = ((/* implicit */int) min((((/* implicit */long long int) min(((+(arr_21 [6LL] [i_0] [2]))), (((/* implicit */unsigned int) var_7))))), (max((var_0), (((/* implicit */long long int) var_13))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 3; i_7 < 11; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 13; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 4; i_9 < 12; i_9 += 2) 
                {
                    for (unsigned int i_10 = 1; i_10 < 11; i_10 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */short) (~((-(((/* implicit */int) var_3))))));
                            var_26 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (arr_31 [i_0 - 1] [i_0 - 1]))))));
                            var_27 = ((/* implicit */_Bool) var_9);
                            var_28 = ((/* implicit */int) ((signed char) ((int) var_1)));
                        }
                    } 
                } 
            } 
            arr_36 [i_0] [i_0] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_1 [i_7 - 1])))), (((/* implicit */int) arr_1 [i_7 + 3]))));
            /* LoopSeq 2 */
            for (long long int i_11 = 2; i_11 < 13; i_11 += 4) 
            {
                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (+((~(max((var_0), (((/* implicit */long long int) var_15)))))))))));
                arr_39 [i_0] [i_7 - 2] [i_0] = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */short) var_6)), (var_8))))));
                var_30 = ((/* implicit */signed char) min(((+(((/* implicit */int) var_7)))), ((+(((/* implicit */int) arr_24 [i_11 - 2] [i_7 + 1]))))));
                /* LoopSeq 3 */
                for (unsigned int i_12 = 2; i_12 < 13; i_12 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) var_5))), ((~(((/* implicit */int) var_1))))))), (max((arr_3 [i_12 - 2] [i_12] [i_11 - 2]), (arr_3 [i_12 - 1] [i_11] [i_11 - 2])))));
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7 + 2] [1ULL] [i_0])))))) / (min((var_5), (((/* implicit */unsigned long long int) var_3))))));
                }
                for (unsigned int i_13 = 2; i_13 < 13; i_13 += 4) /* same iter space */
                {
                    arr_47 [(_Bool)1] [i_0] [i_11] [i_0] = ((/* implicit */unsigned short) (((+(arr_12 [i_13 - 2] [i_13] [i_13 - 2] [i_13 - 2] [(unsigned short)1]))) - (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)48848)), (-1076683461))))));
                    var_33 &= ((/* implicit */signed char) max((((int) arr_44 [i_13 - 2])), (((/* implicit */int) var_15))));
                }
                for (unsigned long long int i_14 = 1; i_14 < 12; i_14 += 3) 
                {
                    var_34 *= ((/* implicit */unsigned char) (-(((unsigned long long int) var_13))));
                    var_35 = ((/* implicit */unsigned int) ((unsigned long long int) max((arr_30 [i_14 + 1] [i_11] [i_11 - 1]), (((/* implicit */unsigned int) var_14)))));
                    arr_50 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(var_5)));
                    var_36 = (i_0 % 2 == zero) ? ((((((~(((/* implicit */int) arr_46 [i_14 + 2] [i_0])))) + (2147483647))) >> ((((-(((/* implicit */int) var_1)))) - (59))))) : ((((((((~(((/* implicit */int) arr_46 [i_14 + 2] [i_0])))) - (2147483647))) + (2147483647))) >> ((((-(((/* implicit */int) var_1)))) - (59)))));
                }
            }
            for (unsigned long long int i_15 = 2; i_15 < 12; i_15 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 1; i_16 < 10; i_16 += 3) 
                {
                    var_37 &= ((/* implicit */unsigned long long int) (~((~(1073741696)))));
                    var_38 = ((/* implicit */unsigned int) var_12);
                    var_39 *= ((/* implicit */_Bool) arr_52 [i_0 - 1]);
                }
                var_40 = var_5;
                var_41 -= ((/* implicit */unsigned int) arr_32 [i_0] [i_0] [i_7] [i_0] [i_7] [6U]);
            }
        }
        for (short i_17 = 0; i_17 < 14; i_17 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_42 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (var_5))), (((/* implicit */unsigned long long int) min((arr_20 [i_0] [i_0] [i_0]), (arr_20 [i_0 - 1] [i_0] [i_0]))))));
                var_43 = ((/* implicit */long long int) min((((unsigned int) var_4)), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_57 [i_0] [i_0])))))));
            }
            var_44 = ((/* implicit */signed char) max(((~(arr_31 [i_0 - 1] [i_17]))), (((/* implicit */unsigned long long int) max((var_7), (arr_57 [i_0] [i_17]))))));
            /* LoopSeq 3 */
            for (signed char i_19 = 2; i_19 < 11; i_19 += 4) 
            {
                var_45 = ((/* implicit */short) (+((-((+(var_5)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_20 = 3; i_20 < 11; i_20 += 3) 
                {
                    var_46 = ((/* implicit */signed char) (~(min((arr_28 [i_0]), (((/* implicit */unsigned int) var_1))))));
                    var_47 = ((/* implicit */unsigned int) var_0);
                    var_48 ^= ((/* implicit */unsigned long long int) ((_Bool) var_4));
                    var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) max(((~(arr_12 [(signed char)6] [i_20 - 3] [11ULL] [i_20] [i_19]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_19 - 2] [i_19 + 2])) >> (((((/* implicit */int) var_1)) + (80)))))))))));
                }
                for (int i_21 = 3; i_21 < 13; i_21 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_22 = 4; i_22 < 11; i_22 += 1) 
                    {
                        arr_72 [i_0] [i_17] [i_0] [i_21] [i_0] [i_21] [i_19] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned short) var_10))), ((+(arr_3 [i_19 + 1] [i_21] [i_21])))));
                        arr_73 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_32 [i_22 - 3] [i_22 - 3] [5] [i_22 + 3] [i_22 - 3] [i_19 + 3])), (arr_33 [i_0 - 1] [i_0] [3ULL] [i_0 - 1] [i_22 + 3]))))));
                        var_50 = ((/* implicit */unsigned short) var_5);
                    }
                    for (unsigned short i_23 = 0; i_23 < 14; i_23 += 1) 
                    {
                        var_51 ^= ((/* implicit */signed char) max((max((var_11), (var_11))), (((/* implicit */long long int) min((((/* implicit */int) max((var_8), (((/* implicit */short) arr_67 [i_21] [i_17] [i_19] [i_21]))))), (arr_29 [i_17] [i_19] [i_19]))))));
                        var_52 = ((/* implicit */unsigned long long int) arr_41 [(unsigned short)1]);
                    }
                    var_53 -= ((/* implicit */int) ((max((arr_13 [i_0 - 1] [i_0 - 1] [i_19 + 2] [i_19 - 2] [i_21 - 1]), (((arr_21 [i_0] [(signed char)6] [i_19]) << (((((/* implicit */int) var_10)) - (29))))))) - (max((arr_52 [i_17]), (((/* implicit */unsigned int) var_14))))));
                    var_54 = (!(((/* implicit */_Bool) max((arr_4 [i_19 - 1] [(_Bool)1]), (((/* implicit */unsigned long long int) var_9))))));
                }
            }
            for (short i_24 = 1; i_24 < 13; i_24 += 2) 
            {
                arr_80 [i_0] [i_17] [i_24] [i_0] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) arr_71 [i_0] [i_0] [i_17] [i_17] [4] [0] [i_0])), (var_11)))));
                arr_81 [i_0 - 1] [i_0] [i_24 + 1] = ((/* implicit */unsigned int) min((-1076683461), (((/* implicit */int) (_Bool)1))));
                var_55 -= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_43 [6LL] [(signed char)0] [i_0 - 1] [i_0] [i_17]), (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) arr_43 [(_Bool)1] [i_17] [i_0 - 1] [i_0] [i_17]))));
            }
            for (unsigned long long int i_25 = 1; i_25 < 11; i_25 += 4) 
            {
                var_56 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_61 [(_Bool)1] [i_25] [i_0]), (arr_61 [(_Bool)1] [(short)5] [i_0]))))));
                arr_85 [i_0] [i_25] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_38 [i_0 - 1] [i_25 - 1] [i_25 - 1]), (((/* implicit */short) var_9)))))));
                var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) max((35747322042253312ULL), (((/* implicit */unsigned long long int) 1U)))))));
            }
        }
    }
    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
    {
        var_58 = ((/* implicit */long long int) min((var_58), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ ((~(((unsigned long long int) var_14)))))))));
        var_59 = min((max((var_6), (var_10))), (max((var_6), (((/* implicit */signed char) var_12)))));
    }
    for (int i_27 = 3; i_27 < 18; i_27 += 3) 
    {
        arr_92 [i_27 - 2] = ((/* implicit */unsigned long long int) (-((+(-1076683461)))));
        var_60 = ((/* implicit */signed char) var_3);
    }
    var_61 = ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_28 = 2; i_28 < 11; i_28 += 2) 
    {
        var_62 = ((/* implicit */int) max((4223220062U), (((/* implicit */unsigned int) (_Bool)1))));
        var_63 = min((max((((/* implicit */long long int) max((var_9), (((/* implicit */signed char) var_12))))), (((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_14))))))), (((/* implicit */long long int) var_1)));
        var_64 = var_14;
    }
}
