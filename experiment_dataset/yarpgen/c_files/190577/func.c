/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190577
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
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_16)) / (((/* implicit */int) var_16))))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_5 [(signed char)2] [i_3])) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [(signed char)9] [9U] [i_2] [i_2]), (arr_7 [i_0] [i_0] [i_2] [i_3]))))) : (arr_1 [i_2]))))))));
                            /* LoopSeq 3 */
                            for (short i_4 = 3; i_4 < 13; i_4 += 3) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1])))))));
                                var_20 = ((/* implicit */_Bool) var_10);
                                var_21 += ((/* implicit */_Bool) min((arr_4 [i_1 + 3]), (max((arr_4 [i_1 + 2]), (((/* implicit */unsigned long long int) (_Bool)1))))));
                                var_22 = ((/* implicit */signed char) min((((unsigned char) arr_2 [i_2 - 1] [i_2 + 1] [i_2 + 1])), (((/* implicit */unsigned char) ((_Bool) arr_2 [i_2 + 2] [i_2 + 1] [i_2 - 1])))));
                            }
                            for (short i_5 = 3; i_5 < 13; i_5 += 3) /* same iter space */
                            {
                                arr_15 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) (!(((/* implicit */_Bool) (~(5286751693039880761LL)))))))));
                                arr_16 [i_0] [i_1] [13LL] [i_2] [i_1] [13LL] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_5 + 1])) | (((/* implicit */int) (_Bool)1))))) | ((+(arr_3 [(short)4])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) min((var_7), (((/* implicit */short) arr_7 [i_0] [i_0] [i_0] [i_0])))))))));
                                arr_17 [i_0] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2] [12ULL]))));
                            }
                            /* vectorizable */
                            for (signed char i_6 = 1; i_6 < 12; i_6 += 2) 
                            {
                                var_23 = ((/* implicit */signed char) ((unsigned char) (_Bool)1));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_12))))) % (((/* implicit */long long int) ((2139095040) ^ (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_2] [i_1] [i_6] [i_6]))))))))));
                                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)8176))));
                                arr_20 [i_0] [i_1 + 2] [i_2] [8] [(unsigned short)3] = ((/* implicit */unsigned long long int) (((~(arr_3 [i_2]))) >= (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2 - 1] [(signed char)11] [(signed char)11] [(signed char)11] [i_6 + 1] [(signed char)11] [i_6])))));
                            }
                            /* LoopSeq 2 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_26 = ((/* implicit */unsigned char) ((min((((/* implicit */int) (unsigned short)8176)), ((-(((/* implicit */int) var_15)))))) ^ (((((/* implicit */_Bool) arr_21 [i_0] [(short)8] [i_3] [5LL])) ? (((/* implicit */int) (unsigned char)74)) : ((+(((/* implicit */int) var_13))))))));
                                var_27 = ((/* implicit */_Bool) arr_0 [i_7]);
                                var_28 += ((/* implicit */unsigned char) var_8);
                                arr_23 [i_0] [(short)12] [(short)12] [(short)12] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (+(var_5)));
                            }
                            for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                            {
                                arr_26 [10] [10] [i_2] [i_3] [(unsigned char)12] = ((/* implicit */unsigned char) var_2);
                                var_29 = ((/* implicit */_Bool) ((((((long long int) arr_4 [i_0])) > (((/* implicit */long long int) ((/* implicit */int) var_8))))) ? (min((((/* implicit */long long int) var_16)), (arr_25 [i_2 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_2] [i_2 + 1] [i_2] [i_2])) : (((/* implicit */int) arr_9 [5LL] [i_8] [i_2 + 1] [i_2 - 1] [i_1 - 1] [i_1 - 1] [5LL])))))));
                                arr_27 [i_0] [i_2] [i_2 - 1] [(unsigned char)12] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) (((-(var_2))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
                                arr_28 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) + (((/* implicit */int) ((short) (_Bool)1)))));
                            }
                            var_30 = ((int) (+(arr_13 [i_0] [(short)7] [i_3])));
                        }
                    } 
                } 
                var_31 = arr_18 [10U] [i_0] [i_0] [i_1] [i_1] [(unsigned short)2];
                var_32 = ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) 14104180803780515653ULL))), (((((/* implicit */int) (signed char)-33)) % ((-(((/* implicit */int) arr_8 [(unsigned char)5] [(unsigned char)5] [i_1] [(signed char)0]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) var_16);
                            var_34 = ((((/* implicit */_Bool) arr_25 [(unsigned char)10])) ? (((long long int) arr_11 [i_1] [i_1 - 1] [i_10] [i_1] [8U] [i_1 + 1])) : (((/* implicit */long long int) ((arr_13 [i_0] [i_0] [i_9]) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_31 [(short)9] [i_0] [i_1 + 1] [i_0])) >= (14104180803780515663ULL))))))));
                            var_35 = ((/* implicit */unsigned char) (-(((190029408) << (((/* implicit */int) (_Bool)0))))));
                            var_36 = ((/* implicit */unsigned int) (~((+(min((arr_25 [(_Bool)1]), (((/* implicit */long long int) var_0))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_37 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (((-(((/* implicit */int) var_11)))) < ((+(((/* implicit */int) var_6))))))) : (((/* implicit */int) var_15))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_11 = 1; i_11 < 24; i_11 += 3) 
    {
        arr_35 [i_11] [(unsigned short)22] = ((/* implicit */unsigned int) var_8);
        arr_36 [i_11] = ((/* implicit */signed char) arr_33 [i_11]);
        arr_37 [i_11] = ((/* implicit */long long int) (signed char)-1);
    }
    for (unsigned char i_12 = 2; i_12 < 9; i_12 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned char) arr_19 [(unsigned char)6] [i_12 + 1]);
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 3; i_13 < 9; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                {
                    var_39 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned short)7168), (((/* implicit */unsigned short) (short)-32062)))))));
                    var_40 |= ((/* implicit */unsigned short) (signed char)-78);
                }
            } 
        } 
    }
    for (unsigned char i_15 = 2; i_15 < 9; i_15 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned int) min((288221580058689536ULL), (((/* implicit */unsigned long long int) (short)14092))));
        var_42 = ((/* implicit */int) (_Bool)0);
        var_43 = ((/* implicit */int) arr_5 [(short)6] [i_15]);
        var_44 = ((/* implicit */_Bool) arr_3 [i_15]);
        /* LoopNest 3 */
        for (long long int i_16 = 1; i_16 < 11; i_16 += 4) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (short i_18 = 0; i_18 < 12; i_18 += 3) 
                {
                    {
                        arr_58 [i_15 + 1] [i_17] = ((/* implicit */_Bool) arr_56 [i_15] [i_15] [i_17] [i_15] [i_18] [i_18]);
                        /* LoopSeq 2 */
                        for (unsigned int i_19 = 3; i_19 < 9; i_19 += 3) /* same iter space */
                        {
                            arr_61 [i_17] [i_17] [i_17] [i_17] [2LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? ((((+(arr_29 [i_15] [i_15]))) + (((/* implicit */int) var_8)))) : (((/* implicit */int) (signed char)121))));
                            arr_62 [(_Bool)1] [(short)10] |= ((/* implicit */unsigned int) arr_55 [i_15] [i_15] [i_15] [(unsigned short)4] [i_18] [i_19]);
                        }
                        /* vectorizable */
                        for (unsigned int i_20 = 3; i_20 < 9; i_20 += 3) /* same iter space */
                        {
                            var_45 &= ((/* implicit */long long int) (~(((/* implicit */int) (short)20584))));
                            arr_67 [i_15] [i_16] [i_17] [i_16] [i_18] [i_17] [8U] = ((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_16 - 1] [i_16 + 1] [i_16 + 1] [i_16 - 1]))));
                        }
                        arr_68 [(unsigned char)10] [i_16 - 1] [i_17] = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8192))) : (1388296837308897453ULL))), (((/* implicit */unsigned long long int) arr_60 [i_18] [(unsigned char)4] [(unsigned char)4])))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), ((-(((/* implicit */int) var_4)))))))));
                        var_46 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) arr_46 [i_18])) ? (((/* implicit */int) arr_12 [(short)10] [(signed char)10] [(unsigned short)7] [(unsigned short)7] [i_16])) : (((/* implicit */int) (_Bool)1)))))) / (((/* implicit */int) (unsigned char)124))));
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_14))) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) 134184960)) : (max((((/* implicit */long long int) var_9)), (-7LL)))))));
                    }
                } 
            } 
        } 
    }
}
