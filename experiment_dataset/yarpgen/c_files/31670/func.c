/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31670
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_10 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_0] [i_1 + 1]))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_11 *= ((/* implicit */unsigned long long int) var_5);
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned char) min((min((arr_9 [i_0] [i_2] [i_3]), (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */int) var_2))))));
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(arr_7 [i_0] [i_2]))), (((/* implicit */unsigned int) ((arr_3 [i_1]) != (((/* implicit */long long int) var_8)))))))) ? (((/* implicit */int) max(((unsigned short)23793), ((unsigned short)23793)))) : (((/* implicit */int) (unsigned short)41742)))))));
                        arr_12 [14] [14] &= ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_1 [i_0] [i_1]))))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */_Bool) ((long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (var_9))))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49631))) / (-5226703646437207793LL)))));
                        arr_17 [i_0] = ((/* implicit */signed char) var_9);
                    }
                    for (unsigned short i_5 = 2; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_1)) - (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) (unsigned short)41735))));
                        var_15 = ((/* implicit */signed char) arr_1 [i_1] [i_2]);
                    }
                    for (unsigned short i_6 = 2; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) | ((+(((((/* implicit */_Bool) var_6)) ? (10243552303583988845ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                        var_16 += ((/* implicit */signed char) (-(arr_3 [i_6])));
                    }
                    var_17 &= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_2 [i_0] [8LL]))))));
                }
                for (signed char i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_1 + 1] [i_0] [i_0] [i_7] [i_8] = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 4490090822993839037LL)))) ? ((-(((/* implicit */int) arr_6 [i_0])))) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_1 + 1] [i_7] [i_7] [i_8]))))));
                        arr_29 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_14 [i_0]), (arr_14 [i_0])))), (((((/* implicit */int) arr_14 [i_0])) << (((var_6) - (8813045164637957538LL)))))));
                    }
                    arr_30 [i_0] = ((/* implicit */signed char) max(((~(((var_6) & (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0]))))))))));
                }
                for (signed char i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
                {
                    arr_33 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                    arr_34 [i_0] [i_0] [i_9] [i_1] = ((/* implicit */unsigned short) ((min((((/* implicit */int) max((var_2), (var_7)))), ((+(((/* implicit */int) var_5)))))) << (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) * (((/* implicit */int) min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned short) var_5)))))))));
                    var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) < (((/* implicit */int) var_4)))));
                }
                arr_35 [i_0] [i_0] = ((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    for (int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned char) var_9);
                            arr_40 [i_0] [i_1] [i_10] [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 1] [i_10])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_32 [i_0]))))) : (arr_0 [i_1] [i_10]))));
                            var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((min((arr_24 [i_0] [i_0]), (((/* implicit */unsigned char) (signed char)-1)))), (((/* implicit */unsigned char) var_2))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))));
                            arr_41 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */unsigned short) (((+(min((((/* implicit */unsigned long long int) arr_15 [i_11] [i_11] [i_10] [i_0] [i_0])), (arr_13 [i_0] [i_0]))))) != (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_2)))) + (((/* implicit */int) arr_1 [i_0] [i_0])))))));
                            arr_42 [i_10] [i_1] [i_10] [i_11] [i_1 - 1] [i_10] |= ((/* implicit */short) (!(((/* implicit */_Bool) (short)-29888))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_13 = 1; i_13 < 18; i_13 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_8), (((((/* implicit */_Bool) min((var_2), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (max((var_8), (var_9)))))));
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                for (int i_15 = 3; i_15 < 19; i_15 += 2) 
                {
                    {
                        arr_56 [i_12] [i_12] [i_14] [i_15 - 2] &= ((/* implicit */unsigned long long int) min(((-(((var_5) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-31649)))))), (((/* implicit */int) ((unsigned char) ((short) (short)-2194))))));
                        var_22 &= ((/* implicit */unsigned long long int) ((min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) * (((/* implicit */int) arr_8 [i_14] [i_13] [i_14] [i_14]))));
                        var_23 = ((/* implicit */unsigned char) min((var_6), (((/* implicit */long long int) arr_50 [i_12] [i_12] [i_14] [i_15 + 1]))));
                    }
                } 
            } 
        }
        for (unsigned short i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            /* LoopNest 2 */
            for (short i_17 = 0; i_17 < 20; i_17 += 2) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    {
                        arr_67 [i_18] [i_17] [i_16] [i_12] = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */unsigned char) max((arr_27 [i_12]), (var_5)))), (arr_15 [i_12] [i_12] [i_17] [i_18] [i_17]))));
                        arr_68 [i_17] [i_12] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_16]))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_15 [i_12] [i_12] [i_12] [i_12] [i_16])), (min((((/* implicit */unsigned int) min((var_4), (((/* implicit */unsigned short) arr_18 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))))), (arr_54 [i_16] [i_16] [i_12] [i_12])))));
        }
        arr_69 [i_12] = ((/* implicit */long long int) arr_48 [i_12] [i_12]);
    }
    for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) var_9);
        var_26 *= ((/* implicit */short) (~((((-(((/* implicit */int) var_0)))) + (((/* implicit */int) ((unsigned short) var_0)))))));
        /* LoopSeq 4 */
        for (long long int i_20 = 1; i_20 < 17; i_20 += 2) 
        {
            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) min((var_7), (((/* implicit */signed char) var_5)))))))))));
            arr_77 [i_20] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((int) var_5))))), (min((var_6), (((/* implicit */long long int) arr_64 [i_20 + 2] [i_20 + 2] [i_19] [i_19]))))));
            /* LoopNest 2 */
            for (unsigned short i_21 = 0; i_21 < 20; i_21 += 1) 
            {
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    {
                        var_28 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-9498)) ? (((/* implicit */int) (short)-31664)) : (((/* implicit */int) (signed char)-22))));
                        /* LoopSeq 2 */
                        for (unsigned short i_23 = 0; i_23 < 20; i_23 += 2) 
                        {
                            arr_87 [i_19] [i_23] [i_19] [i_19] [i_19] [i_19] [i_19] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) min(((unsigned short)51436), ((unsigned short)65513)))), ((+(var_8))))))));
                            arr_88 [i_19] [i_19] [i_21] [i_19] [i_20] = ((/* implicit */unsigned short) min((((/* implicit */int) var_0)), ((-(((/* implicit */int) ((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_19] [i_19] [i_19] [i_23]))))))))));
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_22 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((+(var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1))))))) : (min(((+(36028797018963967ULL))), (((/* implicit */unsigned long long int) arr_58 [i_19]))))));
                        }
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            arr_91 [i_20] [i_20] = ((/* implicit */unsigned int) var_7);
                            arr_92 [i_20] [i_22 - 1] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) arr_2 [i_20 + 2] [i_20]);
                            var_30 = ((/* implicit */short) min(((-(((/* implicit */int) min((((/* implicit */unsigned char) arr_72 [i_21])), (arr_50 [i_19] [i_19] [i_19] [i_22])))))), (((/* implicit */int) var_1))));
                            var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_22 - 1] [i_22 - 1])))))));
                        }
                        arr_93 [i_20] [i_20] [i_20 + 1] [i_22] [i_22] [i_19] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (signed char)89)) > (((/* implicit */int) var_5)))));
                    }
                } 
            } 
        }
        for (unsigned char i_25 = 0; i_25 < 20; i_25 += 4) 
        {
            var_32 += ((/* implicit */unsigned char) (short)-9495);
            arr_97 [i_25] [i_19] = ((/* implicit */_Bool) ((unsigned char) max((((((/* implicit */_Bool) var_7)) ? (arr_38 [i_19] [i_19] [i_25] [i_25] [i_25] [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((var_5) ? (arr_46 [i_19] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
        }
        for (unsigned long long int i_26 = 2; i_26 < 17; i_26 += 1) 
        {
            var_33 = ((/* implicit */unsigned short) var_5);
            arr_101 [i_19] = ((/* implicit */unsigned short) (-(max((max((var_8), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) var_2))))));
        }
        for (unsigned short i_27 = 1; i_27 < 18; i_27 += 1) 
        {
            var_34 ^= ((/* implicit */long long int) arr_59 [i_19] [i_27 + 1] [i_27 + 1]);
            arr_104 [i_19] [i_19] [i_27] &= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_19] [i_19] [i_19] [i_27] [i_27]))) : (var_6)))))), (max((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) var_7))))), (arr_38 [i_27 + 2] [i_27] [i_27] [i_27] [i_27] [i_27]))));
            var_35 *= var_8;
        }
    }
    var_36 = ((/* implicit */signed char) ((unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))));
    var_37 += ((/* implicit */long long int) (~(((((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_1)))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) var_7))))))));
    var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) var_5))));
}
