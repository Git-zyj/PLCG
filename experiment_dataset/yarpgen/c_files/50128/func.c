/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50128
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
    var_16 = min((((long long int) var_15)), (((/* implicit */long long int) var_5)));
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */long long int) var_5)) : (max((min((var_3), (((/* implicit */long long int) var_8)))), (var_4)))));
    var_19 = ((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)68))));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((long long int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) /* same iter space */
                    {
                        arr_10 [i_3] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (unsigned char)188))) ? (((/* implicit */int) ((_Bool) (unsigned char)185))) : (arr_7 [i_3] [i_1] [i_0])));
                        arr_11 [i_0] [i_0] [(short)22] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 671747507U)) | (-6754723621119037679LL)));
                        var_21 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (1270403620U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7944))))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 22; i_4 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) max((max((var_10), (arr_13 [i_0] [i_1] [i_2] [i_4 + 1] [i_0]))), (((/* implicit */long long int) var_0))));
                        arr_14 [i_4] = ((/* implicit */short) ((unsigned short) ((signed char) min((var_2), (arr_0 [i_0])))));
                        var_23 = ((/* implicit */unsigned long long int) ((int) arr_12 [i_4] [i_4] [i_4 - 1] [i_4] [i_2]));
                    }
                    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_5] [i_5 - 1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) var_14);
                        var_24 += ((/* implicit */unsigned int) var_7);
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((((/* implicit */long long int) max((((unsigned int) var_14)), (var_14)))), (max((var_10), (((/* implicit */long long int) var_11)))))))));
                    }
                    for (unsigned char i_6 = 1; i_6 < 22; i_6 += 4) /* same iter space */
                    {
                        arr_20 [i_2] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_4) > (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (min((var_2), (var_4))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            var_26 ^= ((/* implicit */unsigned short) arr_12 [i_7] [i_7] [i_6 - 1] [i_7] [i_6 + 1]);
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_5 [i_6 - 1])) ? (((/* implicit */int) arr_5 [i_6 - 1])) : (((/* implicit */int) arr_5 [i_6 + 1])))) : ((+(((/* implicit */int) (unsigned char)71))))));
                            var_28 = ((/* implicit */long long int) var_14);
                        }
                        for (signed char i_8 = 2; i_8 < 21; i_8 += 1) /* same iter space */
                        {
                            var_29 &= (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)45523)) ? (2721446760532157386LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)71))))))));
                            var_30 = ((/* implicit */unsigned short) var_15);
                            arr_27 [i_0] = ((/* implicit */unsigned int) ((short) (+(((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (unsigned char)193)))))));
                            arr_28 [i_2] [i_2] [i_2] [10U] [(short)9] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) var_5)) <= (arr_0 [i_0])))) > (((/* implicit */int) arr_3 [i_8 - 1]))))) / (((/* implicit */int) var_1))));
                        }
                        for (signed char i_9 = 2; i_9 < 21; i_9 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) -4775143477428538368LL))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (arr_29 [8ULL] [i_1] [i_2] [i_6 - 1] [i_9 + 1])))) : (((int) var_11)))))));
                            arr_31 [i_0] [i_1] [i_9] [i_6 + 1] [i_9] = ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_6])) ? (((long long int) arr_9 [i_6 - 1])) : ((((~(arr_30 [i_9 + 1] [9LL] [i_6] [i_2] [i_1] [i_0] [i_0]))) / (arr_12 [i_0] [i_9] [i_2] [(signed char)22] [6LL]))));
                            arr_32 [i_0] [i_1] [i_6 + 1] [i_2] &= (~(var_12));
                            arr_33 [i_9] [14U] [i_9] [i_9] [i_9] [14U] [i_9] = ((/* implicit */unsigned char) arr_16 [(unsigned char)4] [19LL] [i_2] [(unsigned char)4]);
                        }
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_8))))) <= (((long long int) var_14))))), (var_13))))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((arr_13 [i_6 - 1] [i_6] [i_0] [i_1] [i_0]) / (arr_12 [i_6] [i_2] [i_1] [i_2] [i_0])))))) / (var_2)));
                        var_34 = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */long long int) var_0)), (arr_13 [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]))));
                    }
                    arr_34 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */long long int) 705281409U)) : ((-9223372036854775807LL - 1LL))));
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 1; i_10 < 22; i_10 += 4) 
                    {
                        arr_38 [i_0] [i_1] [(signed char)15] = max((((/* implicit */long long int) min((var_9), (((/* implicit */unsigned int) var_8))))), (arr_13 [i_0] [i_1] [i_2] [i_10 + 1] [i_10]));
                        arr_39 [i_0] [i_0] [i_2] [i_10 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (var_12)))) ? (((/* implicit */unsigned long long int) (~(var_9)))) : (min((((/* implicit */unsigned long long int) var_11)), (arr_9 [i_0])))))) ? ((+((-(arr_26 [i_2] [i_2] [i_2] [10U] [15ULL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned char) arr_29 [i_0] [i_0] [0U] [3LL] [i_0])))))));
                    }
                    for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        arr_43 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : (var_6)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 1; i_12 < 22; i_12 += 4) 
                        {
                            var_35 = (~(min((arr_30 [i_0] [i_1] [i_2] [i_2] [i_1] [i_12 - 1] [i_12 - 1]), (((/* implicit */long long int) ((arr_8 [i_0] [i_1] [i_2] [i_11] [i_12]) / (((/* implicit */int) var_0))))))));
                            var_36 *= ((/* implicit */short) min((((((/* implicit */_Bool) max((arr_16 [i_12 - 1] [i_11] [i_2] [i_0]), (((/* implicit */long long int) var_14))))) ? (arr_25 [i_0] [i_12 + 1] [i_2] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (var_4)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) arr_35 [i_0] [i_1] [i_0] [i_0])) > (var_15)))) >> (((((/* implicit */int) arr_37 [i_0] [i_0] [i_2] [i_11])) - (194))))))));
                            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_8))) ? (max((var_15), (var_12))) : (max((((/* implicit */long long int) var_0)), (var_15)))));
                            arr_46 [i_0] [i_0] [i_12] [(short)1] [i_11] [1LL] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) ((short) var_1))), ((-(((/* implicit */int) var_11)))))))));
                        }
                        for (int i_13 = 0; i_13 < 23; i_13 += 4) 
                        {
                            arr_49 [18] [i_0] = ((/* implicit */_Bool) (+((~(min((((/* implicit */long long int) var_5)), (var_10)))))));
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_13])))))));
                        }
                        arr_50 [i_0] = ((/* implicit */unsigned long long int) ((short) max((max((((/* implicit */long long int) (_Bool)0)), (-3418010942367400346LL))), (((/* implicit */long long int) (signed char)79)))));
                    }
                    var_39 = ((/* implicit */signed char) ((long long int) (((~(var_2))) <= (min((arr_13 [i_0] [13LL] [13LL] [i_2] [13LL]), (var_2))))));
                }
            } 
        } 
        var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) (!(((((/* implicit */int) var_11)) <= (arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
    {
        var_41 *= max((((/* implicit */short) (unsigned char)188)), ((short)(-32767 - 1)));
        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (var_6) : (var_3))))))));
        arr_53 [i_14] = ((/* implicit */_Bool) var_3);
    }
    /* vectorizable */
    for (unsigned char i_15 = 0; i_15 < 23; i_15 += 1) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_11))))))));
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 23; i_16 += 1) 
        {
            for (unsigned char i_17 = 1; i_17 < 19; i_17 += 3) 
            {
                {
                    var_44 = ((/* implicit */unsigned char) var_4);
                    var_45 = ((/* implicit */unsigned long long int) ((_Bool) var_3));
                    arr_62 [i_16] [i_17] = ((/* implicit */unsigned short) var_9);
                }
            } 
        } 
        var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) (+(arr_58 [i_15] [i_15]))))));
        var_47 = ((/* implicit */unsigned char) ((((arr_21 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) > (var_10))) ? (((/* implicit */long long int) arr_51 [i_15] [i_15])) : (arr_30 [i_15] [i_15] [i_15] [19LL] [i_15] [19LL] [i_15])));
    }
    /* vectorizable */
    for (unsigned char i_18 = 0; i_18 < 23; i_18 += 1) /* same iter space */
    {
        var_48 -= ((/* implicit */long long int) (((~(((/* implicit */int) var_11)))) / (((/* implicit */int) ((var_6) <= (((/* implicit */long long int) var_5)))))));
        arr_65 [i_18] [i_18] = ((/* implicit */unsigned int) ((((long long int) var_4)) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)0))))));
        arr_66 [16LL] [i_18] = ((((/* implicit */_Bool) arr_15 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])) ? (arr_15 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]) : (arr_15 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]));
        /* LoopSeq 2 */
        for (long long int i_19 = 0; i_19 < 23; i_19 += 1) 
        {
            /* LoopNest 3 */
            for (short i_20 = 0; i_20 < 23; i_20 += 4) 
            {
                for (long long int i_21 = 0; i_21 < 23; i_21 += 4) 
                {
                    for (unsigned int i_22 = 3; i_22 < 21; i_22 += 1) 
                    {
                        {
                            var_49 *= ((/* implicit */unsigned long long int) var_0);
                            var_50 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4)))) <= (var_6)));
                            var_51 = ((((/* implicit */_Bool) arr_67 [i_22 - 1] [i_20])) ? (var_2) : (((/* implicit */long long int) var_14)));
                            arr_79 [i_18] [i_19] [i_20] [(unsigned short)18] |= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) <= ((-(((/* implicit */int) var_1))))));
                        }
                    } 
                } 
            } 
            var_52 ^= ((/* implicit */short) ((long long int) arr_69 [i_19] [i_18]));
            arr_80 [i_18] [(signed char)7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_19] [i_19] [i_19] [i_19] [i_18] [i_18])) ? (var_15) : (((/* implicit */long long int) arr_44 [i_18] [i_19] [i_19] [i_19] [i_19] [i_19]))));
        }
        for (unsigned long long int i_23 = 2; i_23 < 20; i_23 += 3) 
        {
            var_53 = ((/* implicit */unsigned char) ((int) var_1));
            /* LoopSeq 3 */
            for (unsigned char i_24 = 0; i_24 < 23; i_24 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 1; i_25 < 19; i_25 += 2) 
                {
                    for (unsigned char i_26 = 2; i_26 < 20; i_26 += 1) 
                    {
                        {
                            arr_93 [i_18] [i_23 + 1] [i_24] [i_25] [i_25] [(signed char)12] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (arr_91 [i_18] [i_23] [i_18] [i_25] [i_25] [i_24] [i_24]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                            var_54 = ((((/* implicit */_Bool) arr_16 [i_18] [i_18] [i_18] [i_18])) ? (var_6) : (((/* implicit */long long int) arr_86 [i_23] [i_23] [i_23] [i_25 + 3])));
                        }
                    } 
                } 
                var_55 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(arr_21 [i_18] [i_18] [i_23] [i_23] [i_23 + 3] [i_23] [i_18])))) | (arr_87 [i_18] [i_23] [i_18] [i_18])));
                arr_94 [i_18] [(_Bool)1] = ((/* implicit */unsigned char) var_5);
                var_56 = ((/* implicit */int) min((var_56), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (var_4) : (var_2))))));
            }
            for (short i_27 = 1; i_27 < 21; i_27 += 3) /* same iter space */
            {
                var_57 = ((/* implicit */unsigned char) ((int) arr_69 [i_23 + 3] [i_23 + 3]));
                arr_99 [i_27] [i_23] [i_18] = ((/* implicit */unsigned char) (((+(var_12))) + ((+(var_6)))));
            }
            for (short i_28 = 1; i_28 < 21; i_28 += 3) /* same iter space */
            {
                arr_103 [10LL] [10LL] = ((/* implicit */unsigned char) ((arr_61 [19LL] [i_23 + 2] [i_23 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                var_58 = ((/* implicit */long long int) max((var_58), (((((arr_12 [i_23] [(unsigned short)10] [i_18] [(unsigned short)10] [i_18]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_8)) - (37296)))))));
                arr_104 [i_23 + 2] [i_23 + 2] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_14)) : (var_6)))) ? (arr_71 [i_23 + 2]) : (((/* implicit */long long int) ((int) var_3)))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_29 = 0; i_29 < 23; i_29 += 4) 
            {
                arr_109 [i_29] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_75 [i_23] [i_23] [i_23 - 2] [i_23 + 2] [i_23 + 1] [(signed char)4]))));
                /* LoopNest 2 */
                for (int i_30 = 1; i_30 < 19; i_30 += 4) 
                {
                    for (long long int i_31 = 0; i_31 < 23; i_31 += 4) 
                    {
                        {
                            var_59 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_75 [i_23 - 2] [i_29] [i_30 + 1] [i_30] [i_30 + 1] [i_31])) | (arr_8 [i_18] [i_23 + 2] [i_29] [i_30 + 2] [i_31])));
                            arr_116 [i_31] [i_30] [i_29] [i_23] [i_18] = ((/* implicit */unsigned long long int) ((arr_75 [i_18] [i_18] [i_29] [i_23 - 1] [i_31] [i_30 + 1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_37 [i_30 + 3] [i_23 - 1] [i_23 + 1] [i_23]))));
                        }
                    } 
                } 
                var_60 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) var_9)) : (var_12)));
            }
            for (unsigned int i_32 = 1; i_32 < 21; i_32 += 4) 
            {
                var_61 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
                var_62 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_69 [i_32 - 1] [i_23 - 2]))));
                arr_120 [i_18] [(_Bool)1] = ((/* implicit */unsigned int) var_0);
            }
        }
    }
}
