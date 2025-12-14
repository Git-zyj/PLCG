/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243596
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
    var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_7))), (((/* implicit */unsigned int) var_17))))), (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_0))) : (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) var_9)))))))));
    var_21 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned short) arr_1 [i_0]);
                var_23 *= ((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 3]);
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 3 */
    for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_2 [i_2] [i_2]))));
        arr_6 [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [9LL] [i_2 + 1])), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [(short)4]))) & (arr_5 [(short)5])))))), (min((arr_1 [i_2 + 2]), (arr_1 [i_2 + 2])))));
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned short) arr_4 [9U] [i_2 - 1]);
        var_26 = ((/* implicit */short) min((arr_0 [i_2 + 2]), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1])) ^ (((/* implicit */int) arr_2 [(unsigned char)1] [(unsigned char)1]))))))));
    }
    for (short i_3 = 4; i_3 < 23; i_3 += 1) /* same iter space */
    {
        var_27 -= ((/* implicit */unsigned int) arr_10 [i_3 - 4]);
        var_28 = ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_3 - 2]))));
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                for (unsigned int i_6 = 1; i_6 < 22; i_6 += 1) 
                {
                    {
                        var_29 &= ((/* implicit */short) arr_3 [i_4] [i_4]);
                        var_30 = ((/* implicit */long long int) min((((/* implicit */int) arr_14 [i_4] [i_3 + 2])), ((~(((/* implicit */int) arr_16 [i_6 + 2] [i_3] [i_3 + 2]))))));
                        arr_20 [i_4] [i_6] [i_4] [i_6] [i_3] = ((/* implicit */signed char) arr_10 [i_4]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_7])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [(unsigned char)17] [(unsigned char)17])), (arr_2 [i_4] [i_4]))))))) : (min((((/* implicit */unsigned long long int) arr_16 [i_3] [i_4] [i_3])), (((((/* implicit */_Bool) arr_12 [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_7] [i_4] [i_3]))) : (arr_0 [(short)7])))))));
                var_32 ^= ((/* implicit */_Bool) ((((/* implicit */int) min((arr_12 [i_3 - 3]), (arr_12 [i_3 - 3])))) ^ (((((/* implicit */int) arr_16 [i_3 + 2] [i_3 - 4] [i_3 - 1])) + (((/* implicit */int) arr_16 [i_3 + 2] [i_3 - 4] [i_3 - 1]))))));
            }
            arr_24 [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3 + 1] [i_3 - 1])) % (((/* implicit */int) arr_14 [i_3 - 3] [i_3 - 4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_3]))) : (max((min((arr_1 [i_4]), (((/* implicit */unsigned long long int) arr_9 [i_4])))), (((/* implicit */unsigned long long int) arr_8 [(short)7] [(short)10]))))));
            var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_4] [i_3])) + (((/* implicit */int) arr_14 [i_3] [i_3]))))) - (((((/* implicit */_Bool) arr_10 [i_3 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3]))) : (arr_1 [i_3 - 4])))));
            arr_25 [i_4] [i_3] [i_3] |= ((/* implicit */short) arr_3 [i_4] [i_3]);
        }
        for (int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [i_9] [4U] [i_3] [i_3]))))), (arr_19 [i_3] [i_9] [i_9] [i_8] [i_3] [(_Bool)1])));
                var_35 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_3 - 2])) ? (((/* implicit */int) arr_21 [i_9] [i_9] [i_3 - 4] [i_3 - 1])) : (((/* implicit */int) arr_16 [i_3] [i_3 + 1] [i_3 - 1]))))), (arr_22 [i_3 - 4] [i_3 - 1])));
                arr_31 [i_9] [i_8] [i_9] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_8] [i_3] [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -919129811))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_9] [i_8] [(unsigned char)3] [(_Bool)1]))))))) << (((min((((/* implicit */unsigned long long int) arr_2 [i_3] [i_3 - 4])), (((((/* implicit */_Bool) arr_19 [(_Bool)0] [i_8] [(_Bool)1] [(_Bool)0] [(_Bool)1] [i_3])) ? (arr_1 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9] [i_9] [8LL] [i_8] [i_3] [i_3]))))))) - (223ULL)))));
            }
            /* vectorizable */
            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
            {
                arr_34 [i_10] = ((/* implicit */unsigned short) arr_30 [i_8] [i_3 - 4] [i_3 + 2] [i_3 + 2]);
                var_36 ^= (((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)0)));
            }
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_3 - 2] [i_3 - 4])) ? (min((arr_17 [i_3] [i_3 - 2] [i_3] [i_3] [i_3 - 4] [i_3 + 2]), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_27 [i_8] [i_3])), (arr_23 [(unsigned char)20] [i_3])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */int) arr_2 [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_12 [i_8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_32 [i_3] [21LL] [i_3])), (arr_14 [i_8] [i_3]))))) : (max((arr_1 [i_3]), (((/* implicit */unsigned long long int) arr_2 [i_8] [i_3]))))))));
            arr_35 [i_3] = ((/* implicit */int) arr_17 [i_8] [22] [(unsigned short)2] [i_8] [i_3] [i_3]);
        }
    }
    /* vectorizable */
    for (short i_11 = 4; i_11 < 23; i_11 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_12 = 3; i_12 < 22; i_12 += 1) 
        {
            arr_41 [i_12] [(signed char)11] [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_12 + 1] [i_11 - 1])) * (((/* implicit */int) arr_14 [i_12 - 3] [i_11 - 1]))));
            var_38 ^= ((/* implicit */int) ((long long int) arr_1 [i_11 + 2]));
        }
        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_14 = 2; i_14 < 24; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 25; i_15 += 1) 
                {
                    {
                        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_2 [i_15] [(unsigned char)6]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_15] [15] [15]))) : (arr_26 [i_15]))))));
                        /* LoopSeq 3 */
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                        {
                            var_40 -= ((/* implicit */short) arr_10 [i_16 + 1]);
                            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_16 + 1] [i_14 + 1] [i_11 - 3])) ? (((((/* implicit */_Bool) arr_40 [i_15] [i_14])) ? (((/* implicit */unsigned long long int) arr_26 [i_15])) : (arr_17 [(unsigned char)19] [i_16 + 1] [i_15] [(short)9] [i_13] [12ULL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_14] [i_13])) ? (((/* implicit */unsigned int) arr_30 [i_14 - 2] [i_14 - 2] [i_13] [i_11])) : (arr_47 [i_16] [i_15] [21U] [i_14 - 1] [i_13] [i_11]))))));
                            arr_50 [i_15] [(_Bool)1] = ((/* implicit */signed char) ((arr_18 [i_16 + 1] [i_16 + 1] [i_16] [i_16 + 1] [i_16] [i_16]) ? (((/* implicit */int) arr_18 [i_16 + 1] [i_16 + 1] [i_16] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_18 [(unsigned char)14] [i_16 + 1] [i_16] [i_15] [i_11 - 2] [i_11 - 2]))));
                            var_42 |= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_26 [23U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_15] [i_14 + 1] [i_13] [0U]))) : (arr_22 [i_16 + 1] [i_14]))));
                        }
                        for (unsigned char i_17 = 0; i_17 < 25; i_17 += 2) 
                        {
                            var_43 = ((/* implicit */int) arr_44 [i_14 - 2] [i_11 + 1]);
                            var_44 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_11 - 1])) && (((/* implicit */_Bool) arr_9 [i_13]))));
                            arr_53 [i_13] [14U] [i_14] [i_13] = ((/* implicit */unsigned long long int) arr_43 [1U] [i_13] [i_13]);
                            var_45 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_14 - 1] [i_11 + 1]))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_56 [i_18] [i_14] [i_11] = ((/* implicit */short) ((signed char) ((unsigned short) arr_16 [i_14] [i_13] [i_11 - 4])));
                            arr_57 [i_11 - 4] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_11] [i_11] [i_11]))) % (((arr_47 [i_18] [i_15] [i_11] [i_13] [i_11] [i_11]) >> (((/* implicit */int) arr_37 [i_18] [(short)5]))))));
                            var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */int) (unsigned short)12872)) : (((/* implicit */int) (unsigned short)12878)))))));
                        }
                    }
                } 
            } 
            arr_58 [i_11 - 2] = ((/* implicit */long long int) (+(((((arr_30 [i_13] [i_11 - 3] [i_11 - 1] [i_11 - 1]) + (2147483647))) >> (((arr_29 [i_13] [i_13] [i_13] [i_13]) - (1833476770)))))));
            var_47 = arr_11 [i_11 + 2] [i_11] [i_11 - 1];
            arr_59 [i_13] [i_11] [i_11] |= ((/* implicit */short) ((((/* implicit */int) arr_10 [i_11 + 1])) <= (((/* implicit */int) arr_51 [i_11 + 2] [i_11 - 1] [i_11 - 3] [i_11 + 2] [i_11] [i_11 - 4] [22U]))));
        }
        for (short i_19 = 2; i_19 < 24; i_19 += 1) 
        {
            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_19] [i_19] [i_11 - 3])) ? (arr_22 [i_19 - 2] [(short)13]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [22LL] [i_11])))))) ? (((/* implicit */int) ((short) arr_10 [i_11]))) : (((/* implicit */int) arr_2 [i_19 - 2] [i_11 - 3])))))));
            /* LoopNest 2 */
            for (unsigned short i_20 = 2; i_20 < 22; i_20 += 2) 
            {
                for (unsigned char i_21 = 2; i_21 < 24; i_21 += 1) 
                {
                    {
                        arr_67 [i_19] = ((/* implicit */unsigned int) arr_3 [i_19] [(_Bool)1]);
                        var_49 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_65 [i_21] [i_20] [i_21] [i_20] [i_20])) ^ (((/* implicit */int) arr_18 [i_21 - 1] [4ULL] [i_21 + 1] [i_21] [18LL] [i_21]))));
                    }
                } 
            } 
            var_50 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_42 [i_19] [(short)7] [i_11]))));
            arr_68 [i_19] = ((/* implicit */_Bool) arr_10 [i_11]);
        }
        var_51 += ((/* implicit */unsigned short) arr_21 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11]);
    }
}
