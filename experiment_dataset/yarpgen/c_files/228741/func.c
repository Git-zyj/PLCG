/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228741
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
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) var_2));
        arr_4 [i_0 + 1] = ((/* implicit */_Bool) arr_2 [12ULL] [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5766)) ? (-4529454914165279303LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_13))))))), (min((18446744073709551593ULL), (((/* implicit */unsigned long long int) (unsigned char)21))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_6 [i_1]) : (((/* implicit */long long int) var_1))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1])))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 2) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [2LL] [i_1])) ? (arr_12 [i_1] [i_1] [i_2 - 1]) : (arr_12 [i_1] [i_1] [i_2]))))));
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_21 [i_1] [i_2] [(short)1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_2] [i_2 + 1] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_13 [i_2] [i_2 - 2] [i_2] [i_2 - 2])) : (((/* implicit */int) arr_13 [i_2] [i_2 - 2] [4LL] [i_2]))));
                            arr_22 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_2] [i_4] [i_4] [i_4]))));
                            arr_23 [i_1] [i_2] [i_3] [i_3] [i_2] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18014389919547392LL))));
            arr_24 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_2 - 1] [i_2]))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((unsigned short) arr_31 [i_8] [i_7] [(unsigned short)0] [(unsigned short)0] [i_1])))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_2 + 1] [i_1] [i_2 - 3] [i_8])) ? (((/* implicit */long long int) arr_18 [i_2 - 3] [i_1] [i_2 + 1] [i_8])) : (var_0))))));
                            arr_32 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] [i_8] = ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) arr_30 [i_1] [i_2] [1ULL] [i_1] [i_1] [i_7] [i_8])))));
                            arr_33 [i_2] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_2 - 1] [i_7])) ? (arr_28 [i_2 - 2] [i_2 - 2]) : (arr_28 [i_2 - 3] [i_2 - 3])));
                        }
                    } 
                } 
                arr_34 [i_2] [(unsigned char)5] [i_2] [i_2] = ((/* implicit */unsigned short) (+(arr_27 [i_2 - 2] [i_2] [i_2 + 1] [i_6] [(unsigned char)7])));
            }
        }
        for (unsigned long long int i_9 = 3; i_9 < 21; i_9 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_7 [i_9 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
            arr_38 [i_1] = ((/* implicit */signed char) ((unsigned short) arr_36 [i_1]));
            arr_39 [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [20LL]);
        }
        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) var_4));
    }
    for (int i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 4) 
        {
            arr_45 [i_10] [i_10] [i_11] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_7 [i_11])) || (((/* implicit */_Bool) arr_7 [i_10]))))));
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((((unsigned int) (-(arr_36 [(unsigned char)16])))), (((/* implicit */unsigned int) ((_Bool) arr_16 [i_10] [i_10] [i_12])))));
                        arr_52 [(short)11] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (arr_19 [i_10] [i_12] [(unsigned char)7] [i_11] [i_12] [i_12] [(unsigned char)1])))) ? ((~(arr_7 [i_13]))) : (((/* implicit */unsigned long long int) arr_0 [i_12]))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 2) 
        {
            arr_55 [i_14] = ((/* implicit */int) max(((+(var_5))), (((/* implicit */unsigned long long int) ((min((16117666264710639723ULL), (13ULL))) <= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (-7918049129027504120LL)))))))));
            /* LoopNest 2 */
            for (unsigned char i_15 = 3; i_15 < 18; i_15 += 3) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 3) 
                {
                    {
                        arr_61 [i_10] [i_10] [i_14] [i_15] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_14] [i_15 + 1] [i_15 - 2] [i_15 - 3])) ? (((/* implicit */int) arr_13 [i_14] [i_15 + 1] [i_15 - 2] [i_15 - 3])) : (((/* implicit */int) arr_13 [i_14] [i_15 + 1] [i_15 - 2] [i_15 - 3]))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_13 [i_14] [i_15 + 1] [i_15 - 2] [i_15 - 3])) : (((/* implicit */int) arr_13 [i_14] [i_15 + 1] [i_15 - 2] [i_15 - 3])))) : (((/* implicit */int) min((arr_13 [i_14] [i_15 + 1] [i_15 - 2] [i_15 - 3]), (arr_15 [i_14] [i_15 + 1] [i_15 - 2] [i_15 - 3]))))));
                        arr_62 [i_10] = ((/* implicit */unsigned long long int) min(((!(arr_42 [i_14] [i_15 - 3] [i_15]))), (((((/* implicit */int) arr_42 [i_10] [i_15 - 3] [i_14])) <= (((/* implicit */int) arr_42 [i_10] [i_15 - 3] [i_15 - 2]))))));
                        arr_63 [i_16] [i_10] [i_15] [i_15] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_1), (arr_18 [i_10] [i_14] [i_10] [i_15 + 1])))) ? (min((arr_28 [i_15 - 3] [i_15 + 1]), (arr_28 [i_15 - 2] [i_15 - 3]))) : (max((arr_28 [i_15 - 1] [i_15 + 1]), (arr_18 [i_10] [i_14] [2ULL] [i_15 + 1])))));
                        var_21 += min((max((-4294967296LL), (((/* implicit */long long int) (unsigned char)255)))), (((/* implicit */long long int) (+(arr_1 [i_15 - 3])))));
                    }
                } 
            } 
            arr_64 [i_10] [i_10] [i_14] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3325540647196653736LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) : (9223372036854775807LL)));
            var_22 = ((/* implicit */unsigned short) (~(max((arr_10 [i_14]), (arr_10 [i_14])))));
            var_23 = ((/* implicit */long long int) ((unsigned char) (-(arr_25 [i_14]))));
        }
        var_24 = ((/* implicit */int) var_8);
    }
    var_25 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            {
                arr_70 [i_17] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2147483647)) == (536870911ULL)))), ((+(var_3)))));
                arr_71 [i_18] [i_17] = ((/* implicit */long long int) arr_46 [i_17] [i_18] [i_17] [i_18]);
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                {
                    for (long long int i_20 = 0; i_20 < 12; i_20 += 4) 
                    {
                        {
                            arr_76 [i_17] [(unsigned char)10] [i_19] [(unsigned char)8] = ((/* implicit */unsigned long long int) var_13);
                            var_26 = ((/* implicit */unsigned long long int) arr_72 [i_19 + 1] [i_19 + 1] [i_19 + 1]);
                            arr_77 [i_20] [i_19 + 1] [i_18] [3LL] = ((/* implicit */short) (+(max((((/* implicit */long long int) ((int) arr_27 [2] [i_18] [4] [i_19 + 1] [i_20]))), (min((arr_12 [i_20] [i_19 + 1] [i_20]), (((/* implicit */long long int) arr_20 [i_18] [i_18] [i_18] [i_18] [i_18]))))))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (_Bool)0)), (0ULL))), (((/* implicit */unsigned long long int) min((arr_6 [i_19 + 1]), (arr_6 [i_19 + 1])))))))));
                        }
                    } 
                } 
                arr_78 [i_17] [i_18] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_30 [i_18] [8ULL] [i_18] [i_18] [i_18] [8ULL] [i_17]))))) : (((unsigned long long int) var_13)));
            }
        } 
    } 
}
