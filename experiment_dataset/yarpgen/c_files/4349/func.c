/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4349
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((var_8) && (((/* implicit */_Bool) -7281779101632176601LL)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    for (short i_4 = 3; i_4 < 23; i_4 += 2) 
                    {
                        {
                            arr_15 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_1 + 4] [i_2] [i_3])) < (((/* implicit */int) arr_7 [i_2] [i_1 + 4] [(short)20] [i_3]))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1 + 3] [i_4 + 1] [i_4 - 3] [14] [i_4])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) arr_9 [(short)21] [i_0] [i_0] [i_1] [i_0]))));
                            var_19 = ((/* implicit */unsigned int) (+(arr_14 [(short)22] [6ULL] [i_2] [i_3] [i_4])));
                            var_20 = ((/* implicit */unsigned long long int) arr_0 [(short)15]);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    for (unsigned int i_7 = 4; i_7 < 20; i_7 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) arr_22 [i_0] [i_0] [i_0] [i_6] [(unsigned short)3] [i_0]);
                            arr_23 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */long long int) ((short) arr_16 [i_7 + 4] [i_0]));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */long long int) arr_20 [i_0] [i_0] [i_1] [i_1]);
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                var_23 = ((/* implicit */unsigned int) (~(arr_14 [i_1 + 4] [i_1 + 2] [i_1 + 2] [i_1 + 4] [i_8])));
                var_24 = ((/* implicit */unsigned int) (short)64);
            }
            arr_27 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_25 [i_0] [i_1 + 2] [i_0])) - (((/* implicit */int) arr_25 [i_0] [i_1 + 4] [i_0]))));
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_9 = 2; i_9 < 23; i_9 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0]))) : (0U)))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (short i_12 = 4; i_12 < 22; i_12 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */int) var_8);
                            arr_40 [i_11] [i_11] [i_10] [i_11] [i_11] [i_10] [i_11] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_10])) || (((/* implicit */_Bool) (+(7281779101632176600LL))))));
                            arr_41 [18LL] [i_11] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_26 [i_0] [i_0] [(_Bool)1] [i_11]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_14 = 0; i_14 < 24; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_27 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_15 + 1] [i_15 + 1] [i_15 + 1])) ? (var_16) : (((/* implicit */int) arr_48 [(unsigned short)14] [i_14] [i_14] [(unsigned short)14]))));
                            var_28 = ((/* implicit */unsigned short) (signed char)42);
                            var_29 = ((/* implicit */long long int) (~(arr_54 [i_0] [i_0] [i_0])));
                            var_30 += ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
            } 
            arr_55 [16ULL] &= ((/* implicit */short) arr_32 [20]);
            arr_56 [i_0] [10] = ((((/* implicit */int) (short)21802)) - (-1879250252));
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((arr_34 [i_0] [i_13] [i_13] [2ULL] [i_0] [i_13]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [22LL] [i_13] [i_13] [i_13]))))))));
        }
        for (int i_17 = 1; i_17 < 23; i_17 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_18 = 0; i_18 < 24; i_18 += 3) 
            {
                var_32 = ((/* implicit */unsigned long long int) (signed char)34);
                /* LoopNest 2 */
                for (short i_19 = 2; i_19 < 22; i_19 += 4) 
                {
                    for (signed char i_20 = 0; i_20 < 24; i_20 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) ((short) arr_1 [i_17 - 1]));
                            var_34 = ((/* implicit */unsigned short) arr_10 [i_17 - 1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_21 = 2; i_21 < 23; i_21 += 4) 
                {
                    for (unsigned short i_22 = 0; i_22 < 24; i_22 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) (signed char)95);
                            arr_72 [i_0] [i_17] [i_0] [i_21 - 1] [i_18] [i_18] [i_21] = ((/* implicit */unsigned short) arr_44 [i_0] [i_17] [i_0]);
                        }
                    } 
                } 
            }
            arr_73 [i_0] = ((/* implicit */long long int) (_Bool)1);
        }
    }
    for (unsigned long long int i_23 = 0; i_23 < 23; i_23 += 4) 
    {
        var_36 = ((/* implicit */unsigned long long int) (-(min((arr_30 [i_23] [i_23] [i_23]), (((((/* implicit */int) var_15)) >> (((((/* implicit */int) arr_42 [i_23] [i_23] [i_23])) - (14975)))))))));
        /* LoopSeq 2 */
        for (unsigned int i_24 = 1; i_24 < 21; i_24 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_25 = 0; i_25 < 23; i_25 += 3) 
            {
                for (short i_26 = 0; i_26 < 23; i_26 += 3) 
                {
                    for (int i_27 = 0; i_27 < 23; i_27 += 1) 
                    {
                        {
                            var_37 -= ((/* implicit */short) arr_30 [i_26] [i_23] [i_23]);
                            arr_84 [i_23] [i_27] [i_25] [i_25] [i_27] [i_23] = (+(min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_48 [i_27] [i_27] [i_27] [i_27])))), ((+(var_10))))));
                            arr_85 [i_25] [i_25] [(unsigned short)15] [i_25] [i_25] [i_27] = (short)6250;
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */unsigned short) arr_7 [i_23] [(unsigned short)9] [(signed char)10] [i_23]);
        }
        for (unsigned int i_28 = 1; i_28 < 21; i_28 += 4) /* same iter space */
        {
            var_39 += ((/* implicit */unsigned int) var_0);
            /* LoopNest 2 */
            for (long long int i_29 = 4; i_29 < 21; i_29 += 2) 
            {
                for (int i_30 = 2; i_30 < 22; i_30 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_31 = 0; i_31 < 23; i_31 += 1) 
                        {
                            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) (~((-(((/* implicit */int) arr_31 [i_29 + 1] [i_29] [i_29])))))))));
                            var_41 = ((((/* implicit */_Bool) -3922587655041920471LL)) && (((/* implicit */_Bool) arr_76 [21ULL])));
                        }
                        for (int i_32 = 3; i_32 < 22; i_32 += 3) /* same iter space */
                        {
                            var_42 = (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) (-(arr_54 [i_32 - 3] [i_30] [(short)8])))) : (arr_49 [21U] [i_23] [i_28 + 1] [i_23]));
                            var_43 = (+(var_16));
                            var_44 = ((/* implicit */unsigned int) var_14);
                            arr_97 [i_28] [i_30] [14LL] [i_28] = ((/* implicit */unsigned int) (-(arr_64 [i_23] [i_23] [i_23] [i_28])));
                            var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (+(arr_90 [i_28] [(short)12] [(short)12] [0LL] [i_28]))))) ? (((/* implicit */unsigned long long int) min((2199628619U), (((/* implicit */unsigned int) (unsigned short)0))))) : (max((min((arr_75 [i_23]), (((/* implicit */unsigned long long int) arr_39 [i_32] [i_30] [i_29] [i_28] [i_23] [8ULL] [i_23])))), (((/* implicit */unsigned long long int) arr_94 [i_23] [i_23] [i_28] [i_23] [i_23] [i_23]))))));
                        }
                        /* vectorizable */
                        for (int i_33 = 3; i_33 < 22; i_33 += 3) /* same iter space */
                        {
                            var_46 = ((/* implicit */_Bool) arr_92 [i_33 - 3] [i_30 - 2] [(_Bool)1] [i_29] [(signed char)1] [i_23]);
                            arr_102 [i_28] [i_28] [i_29 - 4] [i_29 - 4] [i_29 - 4] = ((/* implicit */signed char) (+(arr_51 [i_28] [i_28 - 1] [i_28 + 2] [(unsigned short)21] [i_28 - 1] [i_28 + 2])));
                        }
                        /* vectorizable */
                        for (unsigned char i_34 = 2; i_34 < 21; i_34 += 4) 
                        {
                            arr_106 [(unsigned short)7] [(unsigned short)7] [i_29 + 2] [i_28] [i_29] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_103 [i_28] [i_30 - 2] [8ULL] [i_34 - 1] [i_34]))));
                            var_47 += ((/* implicit */unsigned long long int) arr_105 [i_23] [i_28 - 1] [i_28] [i_34] [i_30 + 1] [(unsigned short)12]);
                        }
                        var_48 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-31543)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_99 [i_28] [16U] [22LL] [i_23] [(short)11] [i_23] [i_28]))))), (arr_18 [i_28])));
                        var_49 = ((/* implicit */_Bool) -2482885720248783757LL);
                        var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_105 [i_30] [i_28 + 2] [i_30] [i_30] [i_28] [i_23]))) : (arr_16 [i_29] [i_29])))))) && (((/* implicit */_Bool) 87481304)))))));
                    }
                } 
            } 
        }
    }
    for (int i_35 = 2; i_35 < 21; i_35 += 2) 
    {
        var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) (_Bool)1))));
        arr_109 [i_35] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)34141)) ? (((/* implicit */int) ((arr_59 [i_35]) != (arr_59 [i_35])))) : ((~((+(arr_64 [i_35] [i_35 - 2] [i_35 + 2] [i_35])))))));
        arr_110 [(short)0] [i_35] = ((/* implicit */unsigned char) min((arr_49 [i_35] [3ULL] [i_35 + 3] [i_35]), (((/* implicit */unsigned int) arr_8 [i_35] [i_35] [i_35] [i_35]))));
    }
    var_52 = ((/* implicit */_Bool) (-((~(var_12)))));
    var_53 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) 4062290492U)) : (-919918701576737175LL))), (var_6)));
}
