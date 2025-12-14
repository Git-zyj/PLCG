/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27891
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
    var_12 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [18U] [i_1] [i_0] = ((/* implicit */long long int) arr_5 [4U] [i_1] [i_2]);
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */int) arr_4 [i_3] [i_1 - 1])) : (((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_2])) ? (((/* implicit */int) (unsigned short)33742)) : (((/* implicit */int) arr_4 [i_0] [i_0]))))));
                        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_8 [i_0] [i_1 + 2] [i_1 + 1])))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                        {
                            arr_16 [i_0] = ((/* implicit */signed char) ((max((arr_10 [i_3] [i_0] [i_0] [i_0]), (((/* implicit */long long int) (signed char)-112)))) != (((((/* implicit */_Bool) (unsigned char)251)) ? (arr_10 [(unsigned short)11] [i_0] [i_3] [i_4]) : (arr_10 [i_0] [i_0] [i_2] [i_3])))));
                            arr_17 [i_4] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) arr_4 [i_4] [i_2]);
                            arr_18 [i_0] [i_3] [i_4] [i_4] [i_4] [i_0] [i_4] = ((/* implicit */short) ((((int) arr_7 [i_0] [i_0])) - ((-(((/* implicit */int) arr_15 [i_1 - 1] [i_1] [i_1 - 3] [(short)3] [i_1 - 1] [i_1 - 3] [i_1 + 1]))))));
                            arr_19 [i_0] [i_0] [i_0] [i_2] [i_3 - 1] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_3 [i_3])) << (((((/* implicit */int) var_3)) - (8245))))))) >> (((max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3] [i_3])) ? (arr_6 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) - (3647621105363588194LL)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */short) arr_14 [i_0] [i_1 - 2] [i_0]);
                            arr_22 [i_0] [i_0] [i_0] [i_0] [4U] [4LL] [i_0] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_0 [(unsigned char)9] [i_3])))));
                            var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_5] [i_3] [i_2]))))));
                            var_17 += ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_0 [i_2] [(unsigned short)0]))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_25 [i_3] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */int) min(((+(arr_11 [i_0] [i_1] [i_2] [i_6] [(unsigned char)15] [i_0]))), (((((/* implicit */_Bool) arr_6 [i_3 - 1])) ? (arr_11 [i_0] [i_1 - 3] [i_2] [i_2] [5LL] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90)))))));
                            var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)111))))) ? (((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [16U])) : (((/* implicit */int) (signed char)-112)))) : (((/* implicit */int) arr_13 [i_6] [i_2] [i_2] [i_0])))), ((+((+(((/* implicit */int) (signed char)-112))))))));
                        }
                        for (unsigned char i_7 = 3; i_7 < 17; i_7 += 4) 
                        {
                            arr_29 [14] &= ((/* implicit */long long int) (~(((int) -3151303953225802988LL))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (6855908991519113538LL) : (((/* implicit */long long int) -1590402714))))) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        }
                        var_20 ^= ((/* implicit */short) (+(((((767250059) - (((/* implicit */int) (signed char)-57)))) * (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) var_5)))))))));
                    }
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            arr_35 [i_0] [i_0] [i_2] [i_2] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_20 [i_2]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((/* implicit */int) (signed char)-19)) + (20)))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                            arr_36 [i_8] [i_8] [i_8] [i_0] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_27 [i_1] [i_1 - 1] [i_1 - 2] [i_0] [i_1]))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            arr_39 [i_0] [i_8] [i_2] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)112))))))), (arr_8 [i_0] [i_8] [i_0])));
                            var_21 |= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_2]))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_10] [i_1] [i_1]))))))))));
                            var_22 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((unsigned int) arr_14 [i_10] [(unsigned char)12] [i_10])) % (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)6130))))))) % ((~(((long long int) (signed char)101))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            arr_43 [i_11] [(signed char)8] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_1 + 1] [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 1])) / (((/* implicit */int) arr_14 [i_1 + 1] [i_1] [i_0]))))) * (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_8] [i_8] [i_8] [i_11]))) / (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_8] [i_1 - 2] [i_0]))) : (((unsigned long long int) (unsigned short)59406)))));
                            var_23 ^= ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)60493)))) * (((/* implicit */int) ((((/* implicit */int) arr_2 [i_11] [i_1 + 1] [i_0])) < (((/* implicit */int) arr_2 [(short)2] [i_1 - 2] [i_1])))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (7722955244021324633LL)))) ? ((+(((/* implicit */int) arr_26 [(short)14] [i_2])))) : (((/* implicit */int) arr_8 [8U] [(unsigned short)2] [i_2])))))))));
                            arr_44 [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) (~((+((-(((/* implicit */int) arr_3 [i_8]))))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [17LL] = ((/* implicit */int) ((((/* implicit */_Bool) 822906156)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_2] [(signed char)16]))) ? (((/* implicit */int) arr_8 [i_0] [(unsigned short)0] [i_0])) : (((/* implicit */int) arr_37 [i_1 - 2] [i_1 + 2] [i_1 + 1] [i_1 - 3] [3ULL])))))));
                            arr_49 [i_0] [i_1 + 2] [i_2] [i_8] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) >> (((var_2) + (8777015330304763449LL)))));
                            arr_50 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */int) arr_37 [i_12] [i_8] [i_2] [i_1 - 1] [(_Bool)1]))));
                        }
                        /* LoopSeq 3 */
                        for (short i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_1] [i_1 - 3])) < ((+(((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0])) ? (((/* implicit */int) (short)-32017)) : (((/* implicit */int) arr_28 [i_13] [i_8] [i_2] [i_1] [i_0] [i_0]))))))));
                            arr_54 [i_0] [i_1] [i_0] [i_8] [(unsigned char)1] [(signed char)10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_38 [17U] [i_1] [14LL] [i_8] [i_1] [i_2])) * (((/* implicit */int) (unsigned short)40742))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)18954))))) : (((((/* implicit */_Bool) arr_24 [11] [i_1] [i_1] [i_1] [i_1])) ? (arr_52 [i_0] [i_0] [(unsigned short)8] [i_0] [(short)5] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))))))) != (((((/* implicit */_Bool) min((var_9), (var_1)))) ? (min((((/* implicit */unsigned int) (unsigned char)119)), (3968190769U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_8])))))));
                        }
                        for (signed char i_14 = 0; i_14 < 20; i_14 += 2) 
                        {
                            var_27 ^= ((/* implicit */unsigned short) ((unsigned int) 6516512308590758076ULL));
                            var_28 = ((/* implicit */unsigned char) arr_11 [i_0] [(unsigned short)19] [i_2] [i_2] [(signed char)6] [i_0]);
                        }
                        /* vectorizable */
                        for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                        {
                            arr_59 [i_0] [(unsigned char)0] [i_8] [i_15] &= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (signed char)-88))))));
                            arr_60 [(short)16] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)24084))) & (var_7))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_1 + 1] [i_2] [4] [i_15] [i_15]))))))));
                            var_30 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27218)) ? ((+(4653430853335862031LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) != (arr_12 [0] [i_1] [i_2])))))));
                        }
                        var_31 ^= ((/* implicit */short) ((((/* implicit */_Bool) max(((~(arr_57 [i_8] [i_8] [i_2] [i_8] [18U]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3968190792U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)64)))))))) && (((/* implicit */_Bool) (unsigned char)216))));
                        /* LoopSeq 1 */
                        for (signed char i_16 = 2; i_16 < 19; i_16 += 2) 
                        {
                            var_32 += ((/* implicit */int) ((unsigned int) min((((((/* implicit */_Bool) (unsigned short)15012)) ? (((/* implicit */long long int) var_7)) : (-524555872630588345LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 958013034U)) || (((/* implicit */_Bool) (signed char)19))))))));
                            arr_63 [i_16] [i_8] [i_0] [i_2] [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_2) != (((/* implicit */long long int) ((/* implicit */int) var_3))))))) <= (((((/* implicit */long long int) arr_52 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) / (arr_10 [(unsigned char)15] [i_0] [i_2] [i_8])))))), ((((+(((/* implicit */int) arr_32 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_1])))) * (((/* implicit */int) var_5))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 3) 
                    {
                        arr_67 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_41 [(short)8] [(unsigned short)19] [i_2] [i_0] [(unsigned char)17] [(unsigned char)16] [i_17])) || (((/* implicit */_Bool) arr_40 [i_0] [11LL] [i_0] [i_0] [(unsigned char)18])))) ? (((/* implicit */int) arr_38 [i_17] [i_1] [i_1 - 1] [i_17] [i_17] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_0] [i_2] [i_2] [19] [i_0])))))));
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_1] [i_0] [i_0] [i_1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_1 - 1] [i_1 + 2])))));
                        arr_68 [i_2] [i_2] [i_0] [i_2] [(unsigned char)9] = (-(((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_17] [(unsigned char)2]))));
                        arr_69 [i_0] [i_1] [8] = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) arr_37 [i_0] [i_0] [i_2] [i_17] [18])))));
                        var_34 = ((/* implicit */short) (~(((/* implicit */int) arr_58 [i_17] [i_17] [i_1] [i_1] [i_0]))));
                    }
                    for (short i_18 = 0; i_18 < 20; i_18 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_19 = 0; i_19 < 20; i_19 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_19] [i_18] [i_2] [i_1 + 2] [i_1] [(signed char)19] [i_0])) ? ((~(((/* implicit */int) arr_15 [i_0] [i_1 + 1] [i_2] [i_18] [i_0] [i_19] [i_19])))) : (((/* implicit */int) min((arr_28 [i_1] [(_Bool)1] [i_1] [(unsigned short)14] [i_1 - 1] [i_1]), (arr_28 [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 2] [i_1]))))));
                            var_36 |= ((/* implicit */unsigned long long int) (+((~(((((/* implicit */_Bool) arr_15 [i_0] [i_2] [i_18] [i_19] [i_19] [i_19] [i_2])) ? (arr_40 [i_0] [i_1] [i_2] [i_18] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_0] [6ULL] [i_2] [6ULL] [i_18] [i_0])))))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_20 = 0; i_20 < 20; i_20 += 2) 
                        {
                            arr_77 [i_18] [i_18] |= (+(((((/* implicit */_Bool) arr_13 [(unsigned short)5] [i_1] [(unsigned short)5] [i_18])) ? (((/* implicit */long long int) (~(355320521U)))) : (((var_9) << (((var_9) - (6627985890543734660LL))))))));
                            arr_78 [i_0] [i_0] [i_1 - 1] [i_2] [i_18] [i_20] = ((/* implicit */signed char) var_1);
                        }
                    }
                    var_37 = ((/* implicit */short) arr_5 [6] [i_0] [(unsigned short)17]);
                    arr_79 [i_0] [i_0] [i_0] [i_2] = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((var_10) / (((/* implicit */unsigned long long int) 26303483899294902LL))))))) * (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (arr_10 [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((var_10) / (((/* implicit */unsigned long long int) 26303483899294902LL))))))) / (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (arr_10 [i_0] [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */long long int) 2179424427668135895ULL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_21 = 0; i_21 < 21; i_21 += 4) /* same iter space */
    {
        var_39 = ((/* implicit */short) arr_80 [i_21]);
        var_40 -= ((unsigned int) ((var_10) - (((/* implicit */unsigned long long int) arr_80 [i_21]))));
    }
    for (unsigned char i_22 = 0; i_22 < 21; i_22 += 4) /* same iter space */
    {
        var_41 += ((/* implicit */long long int) var_7);
        var_42 = ((/* implicit */unsigned char) min((var_42), ((unsigned char)1)));
        /* LoopNest 2 */
        for (unsigned char i_23 = 2; i_23 < 19; i_23 += 3) 
        {
            for (signed char i_24 = 0; i_24 < 21; i_24 += 4) 
            {
                {
                    arr_90 [i_22] [i_23] [i_24] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_89 [i_22] [i_22] [i_22]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_88 [i_23 + 2] [(unsigned char)11] [i_24]) < (arr_88 [i_23 - 2] [i_23] [i_24]))))) : ((~(((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) var_4))))))));
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_89 [i_23 + 1] [i_23 + 2] [i_23]))) != (((((/* implicit */_Bool) 3933420580U)) ? (((/* implicit */int) arr_89 [i_23 + 1] [i_23 + 2] [i_23 + 2])) : (((/* implicit */int) arr_89 [i_23 + 1] [i_23 + 2] [i_23 + 2]))))));
                    var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_80 [i_22])) || (((/* implicit */_Bool) var_9)))))) <= ((~((-(6884795223102018560LL)))))));
                }
            } 
        } 
    }
    for (unsigned char i_25 = 0; i_25 < 21; i_25 += 4) /* same iter space */
    {
        var_45 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_89 [i_25] [i_25] [i_25])) ? (((/* implicit */int) arr_89 [i_25] [i_25] [i_25])) : (((/* implicit */int) arr_89 [i_25] [i_25] [i_25]))))));
        var_46 *= ((/* implicit */short) min(((+(((/* implicit */int) arr_89 [i_25] [i_25] [i_25])))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_8)))))))));
    }
    var_47 = ((/* implicit */unsigned int) ((int) (+(var_6))));
}
