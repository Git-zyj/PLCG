/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237973
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
    var_12 -= ((/* implicit */signed char) (-((-(max((568857323), (((/* implicit */int) (signed char)28))))))));
    var_13 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)214));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) 2808800748469722732LL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) var_8));
            var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_7)))) ? (1854262739U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1])))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))));
            var_15 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
            var_16 *= ((/* implicit */long long int) ((((((/* implicit */int) arr_3 [(signed char)6])) >> (((((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) + (26467))))) * (((/* implicit */int) arr_5 [i_0] [i_1]))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        arr_12 [i_2] = arr_11 [i_2];
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned int) arr_11 [i_2])))));
                    arr_20 [i_3] = ((/* implicit */_Bool) max((min((((/* implicit */long long int) max((var_1), ((_Bool)0)))), (var_4))), (((/* implicit */long long int) (!(((((/* implicit */_Bool) (signed char)15)) || (((/* implicit */_Bool) arr_9 [i_4])))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) arr_25 [i_5])) : (((/* implicit */int) ((short) var_3)))));
            arr_27 [i_5] = ((/* implicit */unsigned short) ((signed char) arr_22 [(signed char)10] [i_6]));
        }
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
        {
            arr_31 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_5] [i_7])) ? (arr_30 [i_5] [i_5] [i_5]) : (arr_29 [i_5] [i_7])));
            arr_32 [i_7] &= ((/* implicit */int) ((unsigned short) var_4));
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (!(arr_35 [i_5] [i_7] [i_5])));
                            arr_42 [20ULL] [i_7] [20ULL] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_5] [i_5] [i_5] [(unsigned char)14] [i_5])) ^ (((/* implicit */int) arr_26 [i_9] [i_7] [i_5]))));
                            arr_43 [i_5] [i_7] [i_5] [i_9] [5ULL] [i_9] [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
                            var_20 = arr_41 [i_7] [i_7] [i_7] [i_7] [i_7];
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                for (unsigned char i_12 = 2; i_12 < 20; i_12 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                        {
                            arr_54 [i_5] [i_13] [i_11] [i_11] [i_13] [i_11] [i_13] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_5] [i_5] [i_13]))) <= (arr_37 [i_5] [i_7] [i_11] [i_12] [i_13] [i_7]))) ? (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) var_9)) : (var_0))) : (((/* implicit */int) arr_24 [i_12] [i_12 - 1] [i_12 - 1]))));
                            var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_28 [i_12] [(_Bool)1])) ? (arr_30 [i_11] [i_12] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_5] [i_7] [i_11] [i_11] [i_12 - 1] [i_13] [i_11]))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_21 [i_11])) : (((/* implicit */int) arr_26 [i_11] [i_11] [i_13])))))));
                        }
                        for (short i_14 = 0; i_14 < 22; i_14 += 3) 
                        {
                            arr_57 [i_7] = ((/* implicit */signed char) ((unsigned long long int) (signed char)-10));
                            arr_58 [i_5] [i_12] [i_12] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) arr_47 [i_5] [i_5] [i_5] [i_5])) < (arr_49 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_5] [i_5] [i_11]))) : (arr_30 [i_5] [i_7] [(_Bool)1])));
                            arr_59 [i_12] [i_12] [i_12] [i_12] [i_14] = arr_39 [i_14] [i_12 - 1] [i_11] [i_5] [i_5];
                            var_22 = ((/* implicit */unsigned long long int) ((long long int) arr_45 [i_5] [i_7] [i_12]));
                        }
                        arr_60 [i_5] [i_12] [16U] [i_7] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (signed char)-15))) ? (((/* implicit */int) arr_53 [i_5] [i_7] [(short)18] [i_11] [i_12 + 2] [i_12 - 2] [i_5])) : ((-(((/* implicit */int) arr_41 [i_5] [i_7] [i_11] [i_11] [i_12]))))));
                        var_23 = ((/* implicit */signed char) ((((int) var_1)) == (((/* implicit */int) arr_35 [i_12] [17U] [17U]))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 2) 
            {
                var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [(_Bool)1] [i_15] [21U])) ? (((((/* implicit */_Bool) 2702851533U)) ? (8897937147345707506LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */long long int) arr_55 [i_5] [i_16] [i_16] [i_5]))));
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_21 [i_5]))));
                arr_65 [i_5] [i_15] [i_15] [i_16] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) (signed char)15)) + (((/* implicit */int) arr_40 [i_15])))) : (((/* implicit */int) ((unsigned short) arr_51 [i_16] [i_16] [i_16] [i_15] [i_16] [i_16] [i_16])))));
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (-(((/* implicit */int) var_1)))))));
            }
            for (unsigned short i_17 = 2; i_17 < 21; i_17 += 1) 
            {
                arr_68 [i_5] [i_5] [i_15] [i_5] = ((/* implicit */unsigned long long int) arr_44 [i_15] [i_17 - 2] [i_17 + 1]);
                var_27 = ((/* implicit */long long int) (-(((/* implicit */int) arr_52 [i_5] [i_5] [i_5] [i_5] [i_5] [i_15] [i_5]))));
            }
            /* LoopNest 2 */
            for (long long int i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                for (unsigned char i_19 = 4; i_19 < 20; i_19 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (short)-31118))));
                        arr_74 [i_5] [i_18] [i_18] [i_18] [(short)0] [i_19] = ((/* implicit */unsigned short) (~(arr_30 [i_5] [3ULL] [i_19 - 4])));
                    }
                } 
            } 
            arr_75 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((arr_22 [i_5] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_15] [i_15] [i_5])))));
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((unsigned short) (signed char)15)))));
        }
    }
    for (unsigned int i_20 = 0; i_20 < 22; i_20 += 2) 
    {
        var_30 = ((/* implicit */_Bool) (+(max(((+(((/* implicit */int) (signed char)-21)))), (((/* implicit */int) arr_44 [i_20] [i_20] [i_20]))))));
        /* LoopNest 3 */
        for (long long int i_21 = 1; i_21 < 21; i_21 += 3) 
        {
            for (short i_22 = 0; i_22 < 22; i_22 += 1) 
            {
                for (unsigned short i_23 = 0; i_23 < 22; i_23 += 1) 
                {
                    {
                        arr_88 [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)148)) ^ (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))) : ((+(var_3)))))), (14129751804339590617ULL)));
                        arr_89 [i_20] [(short)18] [i_22] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_52 [i_20] [i_20] [i_20] [i_20] [i_21] [i_22] [i_23])) : (((/* implicit */int) arr_84 [i_22]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)226)), (arr_78 [i_22]))))) : (var_4))))));
                    }
                } 
            } 
        } 
        arr_90 [i_20] [i_20] = ((/* implicit */unsigned long long int) arr_50 [i_20] [i_20] [i_20] [i_20] [i_20]);
    }
}
