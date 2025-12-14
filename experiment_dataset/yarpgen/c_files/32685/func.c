/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32685
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))))), (((/* implicit */unsigned int) (~((-(28))))))));
        var_19 = ((/* implicit */short) var_1);
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_5 [i_1] [i_1]);
            var_20 = ((/* implicit */int) arr_2 [i_1 - 1]);
            var_21 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [i_1])))) ? (arr_3 [i_1]) : (((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)9))))));
            arr_8 [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */int) (short)24607)) != (((/* implicit */int) (unsigned char)255))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_3 = 1; i_3 < 8; i_3 += 4) 
        {
            var_22 &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [(unsigned char)2] [i_3]))));
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 8; i_4 += 4) 
            {
                for (signed char i_5 = 2; i_5 < 9; i_5 += 2) 
                {
                    {
                        var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) arr_5 [i_5] [i_5 - 1])) ? (var_15) : (((/* implicit */int) arr_5 [i_5] [i_5 + 2]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 4) 
                        {
                            arr_20 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_1])) : (arr_19 [i_3] [i_3] [i_3] [i_3 + 2] [i_3])))));
                            var_24 += ((/* implicit */unsigned char) (-((-(var_5)))));
                            arr_21 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1])))))));
                        }
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (arr_3 [i_1]) : ((~(-791708653)))));
                    }
                } 
            } 
        }
        for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)9)) | (((/* implicit */int) ((unsigned char) var_0)))));
            /* LoopSeq 2 */
            for (unsigned int i_8 = 2; i_8 < 10; i_8 += 1) 
            {
                arr_27 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (-(((int) var_6))));
                arr_28 [i_1] = ((((/* implicit */_Bool) arr_26 [i_1 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_7])));
            }
            for (unsigned char i_9 = 1; i_9 < 9; i_9 += 4) 
            {
                var_27 = ((/* implicit */unsigned int) (-(arr_13 [i_1] [i_9 - 1] [i_9])));
                var_28 = ((/* implicit */unsigned char) (-(arr_17 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1] [(unsigned char)6] [i_1])));
                var_29 = ((/* implicit */short) var_17);
            }
        }
    }
    /* vectorizable */
    for (unsigned int i_10 = 1; i_10 < 9; i_10 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_11 = 1; i_11 < 9; i_11 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (-1817238619)))) || (((/* implicit */_Bool) arr_40 [(short)10]))));
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_10 + 2] [i_10 + 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_2))));
            }
            for (unsigned long long int i_13 = 2; i_13 < 11; i_13 += 1) 
            {
                var_32 = ((/* implicit */short) arr_42 [i_13] [i_11] [i_10]);
                var_33 = ((/* implicit */int) (-(var_6)));
                var_34 = ((((/* implicit */_Bool) var_0)) ? (1780185963) : (((/* implicit */int) arr_39 [i_11 + 3] [i_13 - 2])));
                var_35 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) ? (var_15) : (((/* implicit */int) var_11)))) % ((-(((/* implicit */int) var_10))))));
            }
            var_36 = arr_42 [i_10] [i_10] [i_10];
        }
        for (unsigned long long int i_14 = 3; i_14 < 11; i_14 += 2) 
        {
            var_37 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)12288))));
            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_10 + 1] [i_10 + 3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_41 [i_10 + 1] [i_10 + 3]))));
            var_39 = ((/* implicit */short) (-(arr_43 [i_10 + 2])));
        }
        for (short i_15 = 2; i_15 < 9; i_15 += 1) 
        {
            arr_48 [i_10] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_10] [i_15] [i_15 + 2])) || (((/* implicit */_Bool) arr_36 [i_15] [i_15 - 2] [i_10 + 2]))));
            /* LoopSeq 1 */
            for (unsigned int i_16 = 0; i_16 < 12; i_16 += 1) 
            {
                var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_15 - 1])) ? (((((/* implicit */_Bool) arr_49 [i_10] [i_10] [i_10])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)9)))) : ((~(((/* implicit */int) (signed char)-1))))));
                /* LoopSeq 4 */
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    var_41 -= var_17;
                    var_42 -= ((/* implicit */short) ((unsigned char) ((((/* implicit */int) (unsigned char)10)) >> (((((/* implicit */int) (short)1024)) - (1023))))));
                    var_43 += ((/* implicit */short) var_15);
                    arr_55 [i_10] [i_10] [i_10] [i_10] [i_16] [i_16] = ((/* implicit */short) 8889528);
                }
                for (int i_18 = 0; i_18 < 12; i_18 += 3) 
                {
                    var_44 = ((/* implicit */short) (-(((/* implicit */int) arr_40 [i_10 + 1]))));
                    var_45 = ((/* implicit */unsigned int) arr_34 [i_10]);
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 0; i_19 < 12; i_19 += 4) 
                    {
                        arr_60 [i_10] [i_10] [i_16] [i_16] [(unsigned char)6] = ((/* implicit */short) (-(((/* implicit */int) var_12))));
                        arr_61 [i_10 - 1] [i_19] [i_16] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_49 [i_15 + 1] [i_10 + 3] [i_10 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    }
                    var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((((/* implicit */_Bool) arr_56 [(short)10] [i_15] [i_16] [i_18])) ? (((((/* implicit */_Bool) var_12)) ? (7036727792496200598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_15 + 3] [i_16]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_45 [i_10]))))))))));
                }
                for (unsigned char i_20 = 0; i_20 < 12; i_20 += 1) 
                {
                    var_47 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_10] [i_10 + 2]))) : (var_14)));
                    var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [i_15 - 2] [i_10 + 3])) ? ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) arr_50 [i_20] [i_20])))))));
                    var_49 = ((/* implicit */long long int) arr_51 [i_20] [i_16] [i_10] [i_10]);
                }
                for (unsigned char i_21 = 0; i_21 < 12; i_21 += 4) 
                {
                    arr_69 [i_16] [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)28)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 4; i_22 < 10; i_22 += 1) 
                    {
                        var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_10 + 1] [i_15 + 3])))));
                        var_51 = ((/* implicit */unsigned char) (~(arr_51 [i_10] [i_22] [i_16] [i_21])));
                        var_52 = ((/* implicit */int) arr_44 [i_16] [i_21]);
                        var_53 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_52 [i_15] [i_15] [i_21]))));
                    }
                    var_54 &= ((/* implicit */signed char) arr_49 [i_10] [i_10] [i_21]);
                }
                /* LoopSeq 3 */
                for (unsigned int i_23 = 0; i_23 < 12; i_23 += 3) 
                {
                    var_55 = ((/* implicit */unsigned long long int) (-(((var_9) >> (((((/* implicit */int) (signed char)-35)) + (35)))))));
                    var_56 = ((/* implicit */short) (((-(((/* implicit */int) var_12)))) ^ (((/* implicit */int) var_3))));
                    /* LoopSeq 1 */
                    for (short i_24 = 0; i_24 < 12; i_24 += 4) 
                    {
                        var_57 += ((/* implicit */long long int) (~(((/* implicit */int) var_16))));
                        var_58 = ((/* implicit */short) (-(((/* implicit */int) (short)3))));
                        var_59 = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned char)1)))) / (((/* implicit */int) ((signed char) var_5)))));
                    }
                }
                for (int i_25 = 0; i_25 < 12; i_25 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_26 = 0; i_26 < 12; i_26 += 2) 
                    {
                        var_60 = ((/* implicit */int) max((var_60), (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (_Bool)1)))))));
                        arr_81 [i_10] [i_10] [i_10] [i_16] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */int) (short)2047))))) ? (((((/* implicit */_Bool) 2606007847U)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_76 [i_15 + 3] [i_16]))));
                    }
                    for (short i_27 = 4; i_27 < 10; i_27 += 2) 
                    {
                        arr_86 [i_10 - 1] [i_10 - 1] [i_15] [i_10 - 1] [i_16] [i_16] [i_27 + 1] = ((/* implicit */unsigned char) ((unsigned long long int) var_9));
                        var_61 = ((/* implicit */int) var_16);
                        arr_87 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */signed char) (-(arr_73 [i_16] [i_10 + 2] [i_10] [i_16] [i_10 + 2])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_28 = 0; i_28 < 12; i_28 += 1) 
                    {
                        var_62 = ((((/* implicit */_Bool) arr_0 [i_15 + 3])) ? (((/* implicit */int) ((arr_73 [i_16] [i_25] [i_16] [i_15] [i_16]) > (((/* implicit */long long int) ((/* implicit */int) var_1)))))) : ((-(arr_80 [i_10] [i_10]))));
                        var_63 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_16])) << (((((/* implicit */int) arr_0 [i_10 - 1])) - (90)))));
                    }
                }
                for (int i_29 = 0; i_29 < 12; i_29 += 4) /* same iter space */
                {
                    arr_94 [i_16] [i_16] [i_10] [(signed char)1] [(short)1] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_58 [i_10] [i_15] [i_10] [i_29] [i_29])) : (((/* implicit */int) var_4))))) : ((~(arr_74 [i_10] [i_16] [i_15] [i_16] [i_29])))));
                    var_64 = ((/* implicit */unsigned int) 7036727792496200598ULL);
                    var_65 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) var_13)) : (1797830828U)))) ? (8817884075154615200ULL) : (((/* implicit */unsigned long long int) arr_80 [i_15 - 1] [i_10 + 2])));
                    var_66 = ((/* implicit */unsigned char) (~(arr_49 [(short)4] [i_16] [i_10])));
                }
                var_67 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_15 + 1] [i_15 - 1]))) : ((~(8972014882652160LL)))));
            }
        }
        var_68 = ((/* implicit */unsigned char) var_3);
    }
    /* LoopSeq 1 */
    for (long long int i_30 = 0; i_30 < 25; i_30 += 4) 
    {
        arr_98 [i_30] = ((/* implicit */short) max((((/* implicit */int) var_12)), (min((((/* implicit */int) min((arr_95 [i_30] [i_30]), (((/* implicit */unsigned short) (signed char)-72))))), (((int) var_17))))));
        /* LoopNest 3 */
        for (unsigned char i_31 = 3; i_31 < 23; i_31 += 4) 
        {
            for (int i_32 = 0; i_32 < 25; i_32 += 3) 
            {
                for (signed char i_33 = 1; i_33 < 23; i_33 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_34 = 0; i_34 < 25; i_34 += 1) 
                        {
                            var_69 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((-1391634964) ^ (((/* implicit */int) (unsigned short)54781))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_2))))) : ((-(((/* implicit */int) (short)-20403))))))));
                            var_70 &= ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_105 [i_30] [i_30])))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)13)) < (((/* implicit */int) arr_105 [i_30] [i_30])))))));
                        }
                        for (unsigned char i_35 = 0; i_35 < 25; i_35 += 1) 
                        {
                            arr_114 [i_30] [i_31] [i_31] [i_33] [i_35] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_110 [i_30] [i_30] [i_30] [i_30] [i_30] [i_30])) < (((/* implicit */int) var_1)))))) & ((~(var_6)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_102 [i_31 - 2] [i_31] [i_32])) != (((/* implicit */int) (unsigned char)31))))) : ((-(((/* implicit */int) var_12))))));
                            var_71 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-388))));
                        }
                        var_72 = ((/* implicit */long long int) min((((/* implicit */int) arr_109 [i_33] [i_30] [i_33] [i_33] [i_32])), ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))))));
                        var_73 = ((/* implicit */unsigned long long int) max((var_73), (((/* implicit */unsigned long long int) -8889540))));
                    }
                } 
            } 
        } 
    }
    var_74 |= ((/* implicit */short) var_16);
}
