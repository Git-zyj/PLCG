/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202456
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_20 &= ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0] [(signed char)1]))));
        var_21 ^= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 3])) ? (((((/* implicit */int) arr_5 [i_0])) / (arr_6 [i_0] [i_0] [i_0] [i_3 - 1]))) : (((/* implicit */int) arr_0 [i_0 - 2] [i_3 + 1]))));
                        arr_13 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_2])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (int i_5 = 3; i_5 < 19; i_5 += 4) 
            {
                for (long long int i_6 = 1; i_6 < 18; i_6 += 1) 
                {
                    {
                        arr_21 [i_6] [16] [i_0] [i_0] = ((/* implicit */short) arr_20 [i_0 - 3] [i_5 - 1] [i_6 + 2] [i_4]);
                        /* LoopSeq 1 */
                        for (signed char i_7 = 2; i_7 < 16; i_7 += 2) 
                        {
                            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_7])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_14 [i_4]))));
                            var_24 |= (+(((/* implicit */int) arr_18 [i_0] [i_4] [i_0 - 1])));
                            arr_24 [i_5] [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */signed char) var_12);
                            var_25 = ((/* implicit */long long int) arr_9 [i_0 - 2] [i_7] [i_6] [i_6]);
                            arr_25 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 14798072427454143575ULL)))) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) (unsigned short)50422))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_8 = 2; i_8 < 17; i_8 += 3) 
        {
            var_26 = ((/* implicit */unsigned long long int) ((arr_19 [i_8 + 3] [i_0 - 2] [i_0] [(unsigned short)18] [i_0]) + (arr_19 [i_8 - 2] [i_0 - 3] [i_0] [i_0] [i_0])));
            var_27 &= ((/* implicit */unsigned long long int) arr_0 [i_0] [i_8 + 1]);
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (-(var_2))))));
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)15114)) ? (arr_6 [8LL] [i_8 - 2] [i_8] [i_8 - 2]) : (((/* implicit */int) (unsigned short)50398)))))));
            arr_28 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_8 - 1] [i_8 + 2])) || (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_8]))));
        }
    }
    /* vectorizable */
    for (long long int i_9 = 3; i_9 < 19; i_9 += 4) /* same iter space */
    {
        var_30 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_30 [i_9 - 3]))));
        /* LoopSeq 3 */
        for (signed char i_10 = 2; i_10 < 18; i_10 += 1) 
        {
            arr_35 [i_9] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_10])) ? ((-(arr_2 [i_9] [i_10]))) : (((/* implicit */unsigned long long int) var_4))));
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                for (short i_12 = 1; i_12 < 19; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_10 + 2] [i_12] [i_12] [i_10 + 2] [i_12 + 1] [i_12 - 1])) || (((/* implicit */_Bool) arr_38 [i_10 - 2] [i_11] [i_11] [i_12 + 1])))))));
                            var_32 = ((/* implicit */signed char) ((arr_32 [i_12 + 1] [i_10 - 2] [i_10]) % (arr_2 [i_10 + 1] [i_9 - 2])));
                            arr_43 [i_13] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_38 [(signed char)9] [(signed char)9] [i_12 - 1] [i_13]))));
                            var_33 ^= ((/* implicit */short) ((((/* implicit */int) arr_14 [i_11])) + (var_0)));
                            var_34 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_10]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                for (unsigned char i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_16 = 0; i_16 < 20; i_16 += 1) 
                        {
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_9 - 3] [i_9 - 3] [i_10 + 2] [i_10 - 1])) * (((/* implicit */int) var_1)))))));
                            arr_51 [i_10] = ((arr_32 [i_9 - 3] [i_9 + 1] [i_9]) / (arr_49 [i_9] [i_10 - 1]));
                            var_36 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_9 - 3])) ? (arr_26 [i_9 - 3]) : (arr_26 [i_9 + 1])));
                            var_37 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_9 - 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_40 [i_14] [i_14])) : (((/* implicit */int) arr_3 [i_9]))))) : (var_2)));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_17 = 3; i_17 < 19; i_17 += 4) /* same iter space */
                        {
                            var_38 = ((/* implicit */signed char) ((arr_2 [i_10 - 2] [i_10 - 1]) / (arr_2 [i_10 - 1] [i_10 - 1])));
                            var_39 |= ((/* implicit */short) arr_17 [i_10] [i_10] [i_10 - 2]);
                            var_40 = ((/* implicit */unsigned short) ((arr_31 [i_10]) / (((/* implicit */int) arr_0 [i_9 - 1] [i_9 - 1]))));
                        }
                        for (unsigned long long int i_18 = 3; i_18 < 19; i_18 += 4) /* same iter space */
                        {
                            var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [(unsigned char)18] [i_10 + 2] [i_14] [i_18 - 3]))));
                            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) arr_41 [i_9 - 1] [i_10 + 1] [i_10 + 1] [i_14] [i_15] [i_18 + 1] [i_10 + 1]))));
                            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_14] [i_14]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_9 - 3] [i_10 + 1] [i_10] [i_10 + 1] [i_18] [i_14]))) : (((var_4) >> (((var_0) + (1052347538)))))));
                            var_44 = ((/* implicit */unsigned char) (-(arr_1 [i_18 - 3] [i_9 - 1])));
                            var_45 -= ((/* implicit */unsigned char) ((arr_19 [i_9 - 3] [i_9 - 3] [i_9 - 3] [i_10 - 1] [i_18 + 1]) / (((/* implicit */long long int) ((/* implicit */int) var_19)))));
                        }
                        for (unsigned long long int i_19 = 3; i_19 < 19; i_19 += 4) /* same iter space */
                        {
                            var_46 = ((/* implicit */long long int) ((arr_1 [i_19 - 2] [i_9 - 3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_9 - 1] [i_10 - 2] [i_19 - 1] [i_19])))));
                            var_47 = ((/* implicit */_Bool) arr_31 [i_10]);
                            var_48 ^= ((/* implicit */unsigned short) (+(arr_56 [i_10 + 2] [i_10 - 2] [i_14] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1])));
                        }
                    }
                } 
            } 
        }
        for (int i_20 = 0; i_20 < 20; i_20 += 2) 
        {
            var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_9 + 1] [i_9] [i_20]))))))))));
            /* LoopNest 3 */
            for (unsigned char i_21 = 0; i_21 < 20; i_21 += 4) 
            {
                for (unsigned short i_22 = 2; i_22 < 17; i_22 += 4) 
                {
                    for (int i_23 = 0; i_23 < 20; i_23 += 1) 
                    {
                        {
                            var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) (+((-(var_9))))))));
                            var_51 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_42 [i_23] [i_23])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_6)))) < ((~(((/* implicit */int) arr_58 [i_9] [i_20] [4U] [i_22] [i_23]))))));
                            var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 14798072427454143577ULL))) ? (((/* implicit */unsigned long long int) (-(var_10)))) : ((+(arr_49 [i_9] [i_9]))))))));
                        }
                    } 
                } 
            } 
            arr_71 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_20] [i_20] [i_9 - 1] [i_9 + 1] [i_20]))) == (arr_11 [(signed char)12] [i_20] [i_20] [i_20] [i_9] [i_9])));
            var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_62 [i_9 - 3] [i_9 - 2])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [(short)14] [(short)14] [i_20] [i_20] [i_20] [i_9 + 1])))));
        }
        for (signed char i_24 = 0; i_24 < 20; i_24 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_25 = 1; i_25 < 18; i_25 += 4) 
            {
                for (int i_26 = 0; i_26 < 20; i_26 += 4) 
                {
                    {
                        var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_53 [i_25 - 1] [9] [i_25 - 1] [i_25 - 1] [i_25])) ? (arr_53 [i_25 - 1] [i_25 - 1] [i_25] [i_25 + 2] [i_25]) : (arr_53 [i_25 + 1] [i_25] [i_25] [i_25 + 1] [i_25])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_27 = 2; i_27 < 18; i_27 += 1) 
                        {
                            var_55 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_25] [i_25] [i_25 - 1] [i_25] [i_25 + 1] [i_25 - 1]))) / (arr_55 [i_9] [i_9] [i_9])));
                            arr_83 [i_25] [i_25] [16U] [i_26] [i_26] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                        }
                        var_56 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [(signed char)13] [15])))))) : ((~(var_2)))));
                        arr_84 [i_9 - 1] [i_25] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_9))))));
                    }
                } 
            } 
            var_57 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
        }
        arr_85 [i_9] = ((/* implicit */int) var_11);
    }
    for (long long int i_28 = 3; i_28 < 19; i_28 += 4) /* same iter space */
    {
        var_58 = ((/* implicit */int) var_12);
        var_59 = ((/* implicit */unsigned int) max((var_59), (((/* implicit */unsigned int) (+(max((((/* implicit */int) (unsigned short)15138)), (-2133481024))))))));
        var_60 = ((/* implicit */unsigned char) max((var_60), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_26 [i_28 - 3])) ? (arr_26 [i_28 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (min((arr_26 [i_28 - 1]), (arr_26 [i_28 - 3]))))))));
    }
    var_61 = ((/* implicit */unsigned char) var_15);
    var_62 = ((/* implicit */long long int) (-(min((max((var_2), (var_2))), (((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned short) var_14)))))))));
}
