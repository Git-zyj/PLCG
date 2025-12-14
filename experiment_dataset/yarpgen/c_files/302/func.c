/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/302
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
    var_15 = var_8;
    /* LoopSeq 4 */
    for (int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65533)) & (((/* implicit */int) (_Bool)1))))), (((unsigned long long int) arr_4 [i_0 - 4] [i_1]))));
            arr_5 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3))));
        }
        for (unsigned short i_2 = 4; i_2 < 15; i_2 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
                {
                    for (short i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_17 ^= ((/* implicit */int) arr_3 [i_5] [i_4]);
                            arr_20 [i_2] = ((/* implicit */unsigned int) arr_16 [i_0 - 2] [i_2 + 1] [i_3] [i_4] [i_5] [i_2]);
                        }
                    } 
                } 
            } 
            arr_21 [i_0 + 2] [(short)1] [i_0 + 2] = ((/* implicit */int) max((((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ ((~(arr_1 [2U] [2U])))))));
            arr_22 [i_0] [i_0] [(short)10] = ((/* implicit */unsigned short) var_1);
            arr_23 [i_0] = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [(signed char)10] [(signed char)10] [(_Bool)1] [i_2] [(signed char)10]))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_1 [i_2 - 4] [i_0]))))) - (((/* implicit */long long int) 1278482361U))));
        }
        for (unsigned short i_6 = 4; i_6 < 15; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_7 = 2; i_7 < 13; i_7 += 4) 
            {
                var_18 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) (~(var_6))))))));
                arr_30 [(signed char)15] = ((/* implicit */int) 3016484922U);
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (arr_6 [i_6 - 2] [i_6 - 2] [i_7 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
            for (short i_8 = 2; i_8 < 12; i_8 += 1) 
            {
                arr_34 [i_6] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_32 [i_0] [i_6])), ((~(4187095140702039793ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_8 - 1] [i_8 + 4] [i_6 - 3] [i_0])) ? (var_7) : (3016484935U)))) ? (((/* implicit */long long int) var_7)) : (max((((/* implicit */long long int) var_5)), (var_0))))))));
                /* LoopSeq 1 */
                for (unsigned int i_9 = 4; i_9 < 15; i_9 += 1) 
                {
                    arr_37 [i_9] [i_6] [4LL] [i_9 - 3] = ((/* implicit */unsigned long long int) arr_2 [(_Bool)1] [i_9 + 1]);
                    var_20 = ((/* implicit */_Bool) arr_1 [i_9] [i_8]);
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_21 = (+(((((/* implicit */_Bool) arr_19 [i_0] [i_6 + 1] [(short)2] [i_8] [i_8 - 2] [i_10])) ? (arr_1 [i_0] [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-18375))))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((((/* implicit */int) (_Bool)1)) | (1739120508))), (((/* implicit */int) (_Bool)1)))))));
                    }
                }
                arr_42 [i_0] [i_6 + 1] [i_8 + 4] = ((/* implicit */unsigned char) (!((_Bool)1)));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) ^ (arr_8 [i_6 + 1] [i_6 - 3] [i_6 - 3]))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_0] [i_0 + 1] [(short)2] [i_6] [i_8] [i_8 + 4])))))))));
            }
            var_24 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_6 - 2] [i_0] [i_6] [i_0])) ? (arr_33 [i_0 - 2]) : (arr_33 [i_0 - 2])))));
        }
        var_25 ^= ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_32 [i_0 - 4] [i_0]))))) ^ (4294967295U)))));
    }
    for (unsigned char i_11 = 3; i_11 < 9; i_11 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_12 = 2; i_12 < 7; i_12 += 1) 
        {
            var_26 = ((/* implicit */_Bool) 4294967295U);
            arr_49 [i_12] [i_12] [i_12 + 1] = ((/* implicit */signed char) (+(max((647856188), (((/* implicit */int) (_Bool)1))))));
            var_27 = ((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) >> (((max((((/* implicit */unsigned long long int) arr_46 [i_11] [i_11])), (10088933791937077308ULL))) - (18446744073709530652ULL)))))));
        }
        for (int i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                for (unsigned char i_15 = 1; i_15 < 7; i_15 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) 
                        {
                            arr_62 [(unsigned char)8] [(unsigned char)4] [i_14] [i_15 - 1] [(unsigned short)2] [4ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_36 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_14])) != (((/* implicit */int) (_Bool)1)))))) != (arr_29 [i_16] [1LL] [i_14] [i_14])));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_16])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_11] [i_13])) ? (arr_28 [i_11] [i_13] [i_16] [i_11]) : (((/* implicit */int) var_13))))) : (max((var_7), (((/* implicit */unsigned int) ((unsigned char) var_12))))))))));
                            arr_63 [(signed char)8] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) (~(-851362622)))))));
                        }
                        arr_64 [i_11] [i_11] [0ULL] [i_11 - 3] = (((!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((/* implicit */int) var_12)) : ((+(((/* implicit */int) ((arr_28 [i_11] [i_13] [i_14] [i_15]) > (var_6)))))));
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_15 + 2] [i_13] [0ULL] [i_14])) << (((((/* implicit */int) var_8)) + (15562)))))) ? (arr_8 [i_13] [(short)0] [i_15]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4112854392450848339ULL)) ? (((/* implicit */long long int) ((int) arr_15 [i_11] [i_13]))) : (-1337112893897824621LL))))));
                        var_30 = ((/* implicit */unsigned short) ((signed char) min((((int) (short)-13848)), (((/* implicit */int) arr_12 [i_11] [i_11] [i_11 - 2] [(unsigned short)1])))));
                    }
                } 
            } 
            arr_65 [i_13] [i_13] [(_Bool)1] = ((/* implicit */signed char) var_10);
        }
        for (short i_17 = 3; i_17 < 7; i_17 += 1) 
        {
            var_31 = ((/* implicit */unsigned long long int) ((unsigned int) (short)13837));
            arr_68 [i_11 - 2] [(short)4] [i_17] = ((/* implicit */signed char) (_Bool)1);
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (+(((/* implicit */int) (short)-22214)))))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_18 = 1; i_18 < 7; i_18 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_20 = 1; i_20 < 9; i_20 += 4) 
                {
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((signed char)56), ((signed char)-110)))) - (((/* implicit */int) (signed char)-81))));
                    arr_78 [i_19] = ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) arr_58 [i_11] [i_11] [i_19] [i_18] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_18] [i_20 - 1]))) : (var_11))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    var_34 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)43910)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) arr_46 [i_18 + 3] [i_11 + 1])))) : (((/* implicit */int) max((((/* implicit */short) arr_24 [i_20 - 1] [i_11 - 3])), (arr_46 [i_18 + 3] [i_11 - 2]))))));
                    var_35 ^= ((_Bool) (!((_Bool)1)));
                }
                arr_79 [8] [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -3208807331922684723LL)) & (18446744073709551608ULL)))) ? (arr_6 [8ULL] [i_18] [i_19]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((int) (signed char)63)))))));
            }
            for (signed char i_21 = 0; i_21 < 10; i_21 += 4) 
            {
                var_36 = (_Bool)1;
                var_37 = ((unsigned char) ((long long int) (_Bool)1));
            }
            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) arr_31 [i_11] [i_18]))));
            var_39 = arr_69 [1LL] [1LL] [1LL];
        }
        for (signed char i_22 = 0; i_22 < 10; i_22 += 4) 
        {
            var_40 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) min(((short)5757), (arr_82 [i_11] [i_11] [3])))) ? ((+(arr_58 [i_11] [(_Bool)1] [i_11] [i_11] [1ULL] [i_22]))) : (((/* implicit */long long int) ((arr_31 [i_22] [i_11 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_22]))) : (3218737092U)))))) + (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_2))))), (max((((/* implicit */int) (signed char)-69)), (837315228))))))));
            arr_84 [i_11] [i_22] [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)115)) ? (4867180755695139023ULL) : (18446744073709551613ULL)));
            var_41 = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) (unsigned char)59)), (arr_81 [i_11] [i_11 - 3] [i_22] [i_22]))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) % (((/* implicit */int) (_Bool)1)))))));
        }
    }
    for (unsigned char i_23 = 0; i_23 < 24; i_23 += 4) 
    {
        var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) (signed char)-11))));
        arr_87 [i_23] [(_Bool)1] = ((/* implicit */unsigned short) (~(2147483647)));
    }
    for (int i_24 = 0; i_24 < 16; i_24 += 2) 
    {
        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_9 [i_24] [i_24] [(signed char)6] [i_24])))), ((-(((/* implicit */int) (_Bool)1))))))) ? (((unsigned int) arr_19 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])) : (((/* implicit */unsigned int) ((arr_26 [i_24] [i_24] [i_24]) & (((/* implicit */int) var_12)))))));
        arr_92 [i_24] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 851362605)) ? (-1839946913) : (1452454155)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) -1827155526)) : (((var_7) << (((arr_1 [i_24] [i_24]) - (6988041379315915408LL)))))))));
    }
}
