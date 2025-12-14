/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50252
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 10; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */int) (_Bool)1);
                            var_14 = ((/* implicit */short) ((unsigned int) -2980745));
                            var_15 = (i_1 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_4] [i_3 - 3] [i_2])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0] [i_4])) / (((((((/* implicit */int) arr_6 [i_1])) + (2147483647))) << (((((/* implicit */int) arr_8 [i_0] [i_1] [i_3 - 1] [i_4])) - (220)))))))))) : (((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_4] [i_3 - 3] [i_2])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0] [i_4])) / (((((((((/* implicit */int) arr_6 [i_1])) - (2147483647))) + (2147483647))) << (((((/* implicit */int) arr_8 [i_0] [i_1] [i_3 - 1] [i_4])) - (220))))))))));
                        }
                        var_16 = ((/* implicit */unsigned char) ((signed char) (((_Bool)0) ? (((/* implicit */int) arr_7 [i_3 - 1] [i_1] [i_1] [i_3 + 2])) : (var_3))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 2; i_6 < 12; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max(((signed char)121), ((signed char)121))))) / (min((arr_1 [i_0]), (((/* implicit */long long int) -1722133180))))));
                            arr_21 [i_0] [i_0] [i_1] [i_0] [i_6] [i_1] [(unsigned short)4] = ((/* implicit */_Bool) ((int) (signed char)86));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 9; i_8 += 2) 
                {
                    for (signed char i_9 = 2; i_9 < 12; i_9 += 4) 
                    {
                        {
                            arr_28 [i_0] [i_1] [i_5] [i_8] [i_1] [i_0] [i_9] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-121)))) != (((((((/* implicit */int) (signed char)88)) == (((/* implicit */int) var_12)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (var_1)))) : (((/* implicit */int) ((unsigned char) arr_16 [i_1] [i_9])))))));
                            arr_29 [(short)3] [(short)3] [i_5] [(short)3] [i_9] [i_5] [i_1] = arr_1 [i_8 + 2];
                        }
                    } 
                } 
                arr_30 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((short) var_10));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_7)) ^ (((/* implicit */int) (signed char)88)))))), (((/* implicit */int) (unsigned char)69))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_10])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (arr_9 [i_1])));
                var_20 = ((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)0)), (max((arr_18 [i_0] [i_1] [i_1] [i_0]), (arr_18 [i_10] [i_1] [i_10] [i_10])))));
            }
            /* LoopSeq 3 */
            for (long long int i_11 = 1; i_11 < 12; i_11 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 13; i_12 += 1) 
                {
                    for (short i_13 = 1; i_13 < 11; i_13 += 3) 
                    {
                        {
                            arr_43 [i_11] [i_11] [i_11] [i_11] [i_1] = ((/* implicit */long long int) min((((((/* implicit */int) arr_6 [i_1])) / (((/* implicit */int) arr_37 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_13 - 1] [i_13 + 2] [i_11 - 1])))), (((/* implicit */int) ((unsigned short) arr_37 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_13 + 2] [i_13 + 2] [i_13])))));
                            var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_17 [i_0] [i_0] [4LL] [i_0] [i_0]))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) min((arr_19 [i_0] [i_1]), (((/* implicit */short) var_11))))))));
            }
            for (signed char i_14 = 3; i_14 < 10; i_14 += 4) /* same iter space */
            {
                arr_48 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_0] [i_1] [i_14 + 1])) == (arr_14 [i_1] [i_1] [i_14 - 1]))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))) % (-1683256561800022138LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_0] [i_14 + 1])) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (signed char)88)))))));
                arr_49 [i_0] [i_1] = ((/* implicit */unsigned short) arr_22 [i_1] [i_0] [i_1] [i_0]);
            }
            for (signed char i_15 = 3; i_15 < 10; i_15 += 4) /* same iter space */
            {
                var_23 |= ((((/* implicit */int) arr_50 [i_15] [i_15] [i_15 + 1])) - (((/* implicit */int) ((_Bool) arr_50 [i_15] [i_15] [i_15 + 3]))));
                arr_53 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_40 [i_15] [i_15 - 1] [i_15] [i_15] [i_15 - 2])) * (((/* implicit */int) ((unsigned char) min((arr_5 [11] [i_1] [1LL]), (((/* implicit */unsigned char) (signed char)121))))))));
            }
        }
        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
        {
            arr_56 [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_42 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_7 [i_16] [i_16] [i_16] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_16] [i_16])))));
            var_24 ^= ((/* implicit */signed char) ((_Bool) ((((var_3) + (2147483647))) >> (((((/* implicit */int) arr_23 [i_16] [i_0] [i_0] [i_0])) - (102))))));
            var_25 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-89)) == (((/* implicit */int) (signed char)88)))))));
            /* LoopSeq 3 */
            for (unsigned char i_17 = 2; i_17 < 12; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (int i_18 = 2; i_18 < 12; i_18 += 1) 
                {
                    for (unsigned char i_19 = 0; i_19 < 13; i_19 += 2) 
                    {
                        {
                            arr_64 [i_18] [i_18] [i_17 - 2] [i_18] = ((/* implicit */_Bool) ((unsigned char) arr_0 [i_19] [i_0]));
                            arr_65 [i_17] [i_18] [i_17] [i_17] [i_16] = ((/* implicit */int) arr_33 [(unsigned char)8] [i_17 + 1] [i_18 - 2] [(unsigned char)8]);
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (((((/* implicit */_Bool) var_7)) ? (arr_22 [i_0] [i_17 + 1] [i_17 + 1] [i_17 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
            }
            for (unsigned int i_20 = 0; i_20 < 13; i_20 += 1) 
            {
                arr_69 [i_0] [i_16] [i_20] [i_20] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((max((-524288), (((/* implicit */int) arr_17 [i_0] [i_16] [i_16] [i_16] [i_16])))), (((/* implicit */int) arr_6 [i_16]))))), (3495926013U)));
                /* LoopNest 2 */
                for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */short) ((((((/* implicit */int) arr_8 [i_0] [i_16] [i_21 - 1] [i_21])) / (((/* implicit */int) arr_8 [i_0] [i_16] [i_21 - 1] [(short)8])))) * (min((var_10), (((/* implicit */int) arr_8 [i_0] [i_16] [i_21 - 1] [i_0]))))));
                            var_28 = ((signed char) ((((/* implicit */_Bool) -524288)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_7 [i_0] [i_16] [i_21] [i_22]))))) : (((4095U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71)))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) var_12);
            }
            for (unsigned char i_23 = 2; i_23 < 12; i_23 += 1) 
            {
                arr_77 [i_23] = (signed char)107;
                arr_78 [i_23 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)43);
            }
            /* LoopSeq 1 */
            for (unsigned char i_24 = 0; i_24 < 13; i_24 += 1) 
            {
                var_30 = ((/* implicit */unsigned char) var_8);
                arr_81 [i_24] [i_16] [i_16] = ((/* implicit */unsigned char) (((+(-1903623228))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) -524288)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (signed char)-11))))) : (((/* implicit */int) ((signed char) var_11)))))));
                arr_82 [i_24] = arr_45 [i_24];
                /* LoopNest 2 */
                for (short i_25 = 1; i_25 < 10; i_25 += 2) 
                {
                    for (int i_26 = 3; i_26 < 10; i_26 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) arr_37 [i_0] [i_16] [i_16] [i_16] [(_Bool)1] [i_0]);
                            arr_89 [i_0] [i_24] [(unsigned short)11] [(unsigned short)11] [i_0] [i_25 + 2] [i_26] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) (signed char)-108)) / (((/* implicit */int) (signed char)-108)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)23600)) : (((/* implicit */int) (_Bool)0)))))));
                            var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min(((signed char)-117), (arr_46 [i_25 + 1] [i_25] [i_24])))) + (2147483647))) << (((((/* implicit */int) ((((int) (unsigned char)0)) != (var_10)))) - (1)))));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
        {
            arr_93 [i_27] [i_0] [i_27] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) var_12)), (((unsigned int) var_0)))) << (((((/* implicit */int) ((signed char) ((1745372704U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) - (21)))));
            var_33 = ((int) (signed char)88);
        }
        var_34 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (arr_9 [i_0])))) ? (((int) (signed char)-88)) : (((/* implicit */int) min(((short)21175), (((/* implicit */short) arr_67 [i_0] [i_0] [i_0]))))));
    }
    for (short i_28 = 0; i_28 < 24; i_28 += 1) 
    {
        arr_98 [i_28] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 524287))) > (min((((((/* implicit */int) arr_97 [i_28] [i_28])) ^ (((/* implicit */int) (unsigned char)255)))), (var_3)))));
        arr_99 [i_28] [i_28] = ((/* implicit */short) max((((int) (signed char)88)), (((/* implicit */int) (signed char)10))));
    }
    for (signed char i_29 = 0; i_29 < 16; i_29 += 1) 
    {
        arr_104 [i_29] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_101 [i_29] [i_29]), (max((arr_101 [i_29] [i_29]), (((/* implicit */unsigned char) var_9))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (arr_94 [i_29])))) ? ((~(((/* implicit */int) (signed char)107)))) : (((/* implicit */int) ((_Bool) arr_102 [i_29]))))) : (((/* implicit */int) ((var_13) == (((/* implicit */int) (signed char)88)))))));
        var_35 *= ((/* implicit */int) (((+(((/* implicit */int) arr_101 [i_29] [i_29])))) == (((/* implicit */int) ((unsigned char) var_8)))));
        arr_105 [i_29] = ((/* implicit */unsigned char) 1650366784);
        var_36 = ((/* implicit */unsigned short) arr_97 [(unsigned short)2] [i_29]);
        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */int) (unsigned short)4673)) >> (((((min((1327249998U), (((/* implicit */unsigned int) -1171746056)))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60862))))) - (32341U))))))));
    }
    var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((short) min((((/* implicit */int) (unsigned short)43977)), ((+(((/* implicit */int) (short)-31317))))))))));
    var_39 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)));
}
