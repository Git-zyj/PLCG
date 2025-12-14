/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23587
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (short)2083)) > (((/* implicit */int) var_2)))))))) : (var_10)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (short i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        arr_10 [i_0] [i_0] [i_0] [(signed char)17] [i_0] = ((int) (~((-(((/* implicit */int) (signed char)-87))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_3] [(short)1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 2])) ? (arr_6 [i_2 - 2] [i_2 - 2] [i_2 + 1]) : (arr_6 [i_2 - 2] [i_2 - 2] [i_2 - 1])));
                            arr_16 [i_0] [i_3] [i_3] &= arr_7 [i_3];
                            arr_17 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2 - 2] [(unsigned char)3] [i_4] [i_2] [i_3] [i_2])) ? (((/* implicit */int) arr_14 [i_2 - 2] [i_0] [i_2] [i_0] [i_2] [(short)17])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_0] [i_2 + 1] [i_3] [i_2] [i_1]))));
                            arr_18 [i_3] [i_3] [i_3] [i_3] [(_Bool)1] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_4])) : (((/* implicit */int) (unsigned short)5635))));
                        }
                        for (int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]);
                            arr_24 [(short)6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3] [(_Bool)1])) - (((/* implicit */int) arr_12 [(signed char)9] [i_0] [i_1] [(_Bool)1] [14ULL] [(unsigned char)14])))) * (((/* implicit */int) ((signed char) var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)1016)) >= (arr_19 [i_2] [i_2 - 2] [i_2] [i_2] [15LL]))))) : (((arr_4 [i_2] [i_0] [i_2 - 1] [i_1]) ^ (arr_4 [12] [i_0] [i_2 - 2] [(unsigned short)17])))));
                        }
                        for (int i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */_Bool) max(((-((+(((/* implicit */int) (unsigned short)64520)))))), (((/* implicit */int) (unsigned short)1016))));
                            var_14 |= ((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) (short)-2084)) ? (14144317296797300198ULL) : (((/* implicit */unsigned long long int) 193978635)))))), (arr_21 [i_2] [i_2 + 1])));
                            arr_29 [i_0] [i_1] [i_3] [i_3] [i_6] [i_6] |= max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_2 + 1] [i_6] [(signed char)3] [i_6] [i_6]))))), (((7042765087363627184LL) >> (((arr_7 [i_2 - 2]) + (774589126))))));
                        }
                        arr_30 [i_0] [i_1] [i_2] [i_3] = ((int) ((((/* implicit */_Bool) 193978635)) ? (7849541387800275998ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(signed char)13] [i_0] [i_0] [i_1] [i_2 + 1] [i_2])))));
                        var_15 ^= ((/* implicit */short) ((arr_6 [i_0] [i_1] [i_2 + 1]) | (((((/* implicit */_Bool) arr_12 [i_2 + 1] [16ULL] [i_2 - 2] [(unsigned short)8] [i_2] [i_2 - 2])) ? (((/* implicit */int) arr_12 [i_2 - 1] [i_2] [i_2 - 2] [i_2] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_12 [i_2 - 1] [i_2] [i_2 - 2] [i_2] [i_2] [i_2 - 1]))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) (unsigned short)33284))), (((10597202685909275617ULL) + (((/* implicit */unsigned long long int) -7042765087363627185LL))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((short) arr_22 [i_0] [i_0] [i_7] [i_7] [i_7] [i_7] [i_0])))) - (min((((/* implicit */long long int) (unsigned short)1033)), (arr_4 [(short)13] [i_1] [17ULL] [i_8]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_8 + 2] [i_8] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)115)))))));
                        var_17 = ((/* implicit */int) (+(((3154789643250915291LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33284)))))));
                    }
                } 
            } 
            arr_37 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (min((13265783021743947676ULL), (((/* implicit */unsigned long long int) arr_22 [i_1] [i_1] [(unsigned char)10] [i_0] [i_1] [i_1] [i_1])))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26931)))));
            arr_38 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2084)) & (((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] [(unsigned short)15]))))), (14144317296797300225ULL)));
            /* LoopSeq 1 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                arr_43 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)33284);
                /* LoopNest 2 */
                for (unsigned short i_10 = 2; i_10 < 16; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 2; i_11 < 16; i_11 += 3) 
                    {
                        {
                            var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [(short)16] [i_11] [i_11 + 2] [14] [i_11])) ? (((/* implicit */int) arr_36 [i_11] [i_11] [i_11 + 2] [i_10] [i_11])) : (((/* implicit */int) arr_36 [i_11] [i_11] [i_11 + 2] [i_10] [12]))))) ? (min((1105589017263935733LL), (((/* implicit */long long int) (short)-25082)))) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11] [(unsigned char)12] [i_11 + 2] [i_10] [i_11])))));
                            arr_48 [14ULL] [i_10] [i_10] [(unsigned char)4] [i_10] [i_0] |= ((/* implicit */short) arr_46 [(short)14]);
                        }
                    } 
                } 
                var_19 *= ((/* implicit */signed char) ((((856053430) + (((/* implicit */int) (short)0)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_14 [i_1] [i_1] [i_1] [12ULL] [i_1] [i_1]))))))));
            }
        }
        arr_49 [(unsigned short)16] |= ((/* implicit */int) ((((-1988957248) >= (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_20 [i_0] [i_0] [i_0] [i_0]) ? (arr_32 [i_0] [(unsigned char)5] [i_0] [i_0]) : (arr_32 [i_0] [i_0] [i_0] [i_0]))) : (max((((/* implicit */unsigned long long int) (unsigned short)33284)), (arr_32 [i_0] [i_0] [i_0] [i_0])))));
    }
    for (int i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */int) ((((/* implicit */int) arr_20 [i_12] [(unsigned short)7] [8] [i_12])) < (((/* implicit */int) min((arr_50 [i_12] [i_12]), (arr_50 [i_12] [i_12]))))));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 18; i_13 += 4) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    {
                        arr_60 [i_15] [i_14] [i_13] [i_12] = ((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned short)32250)) ? (arr_25 [4LL] [i_13] [i_14] [i_15]) : (18446744073709551615ULL))))), (((unsigned short) (short)-1079))));
                        arr_61 [i_12] [i_13] [(signed char)8] [i_15] = ((/* implicit */int) ((unsigned char) max((arr_34 [i_13] [i_13]), (arr_27 [i_14] [i_13] [i_12]))));
                        var_21 = 7849541387800275998ULL;
                        arr_62 [i_12] [(signed char)9] = ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0ULL))))), (((unsigned short) (signed char)89)))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */int) (-(max((2742569288464749986LL), (((/* implicit */long long int) (unsigned char)180))))));
    }
    var_23 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_16 = 0; i_16 < 18; i_16 += 3) 
    {
        for (int i_17 = 0; i_17 < 18; i_17 += 3) 
        {
            {
                arr_67 [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)-10)) <= (-9)))) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33284)) && (((/* implicit */_Bool) var_7))))))))));
                arr_68 [i_17] [(short)0] [i_17] = ((/* implicit */int) var_7);
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 16; i_18 += 4) 
                {
                    for (unsigned char i_19 = 0; i_19 < 18; i_19 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) 3154789643250915276LL);
                            arr_73 [i_16] [i_18 + 2] = ((/* implicit */_Bool) ((max((arr_35 [i_18 + 2] [7ULL] [i_18 + 1] [i_18] [i_17]), (arr_35 [i_18 + 2] [i_19] [i_18] [i_19] [i_16]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_18 - 1] [i_18 - 1] [i_18 + 1] [i_18 + 2] [i_19])) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (unsigned char)107)))))));
                            var_25 *= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-28767)) - (((/* implicit */int) ((unsigned short) (unsigned char)243)))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_35 [i_16] [i_18 - 1] [i_18] [i_18 + 2] [i_18])))) ? (((/* implicit */int) var_4)) : (max((((/* implicit */int) (unsigned char)13)), (((((/* implicit */int) (signed char)34)) + (((/* implicit */int) (signed char)10))))))));
                        }
                    } 
                } 
                arr_74 [i_17] [12] [17LL] = ((/* implicit */long long int) ((int) ((short) (-(((/* implicit */int) arr_55 [(unsigned char)7] [i_16] [i_17]))))));
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (long long int i_21 = 1; i_21 < 17; i_21 += 3) 
                    {
                        {
                            arr_81 [i_16] [i_16] [i_20] [(unsigned short)9] = ((/* implicit */_Bool) max((-1298118135), (((/* implicit */int) ((unsigned short) arr_41 [(unsigned char)2])))));
                            var_27 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_78 [i_16] [i_16] [i_20] [i_16] [i_21 - 1] [i_21])) ? (arr_7 [i_21 - 1]) : (((/* implicit */int) (unsigned short)33688)))), (((/* implicit */int) (unsigned short)31847))));
                            var_28 *= ((/* implicit */unsigned short) arr_76 [i_16] [(signed char)4] [i_20]);
                        }
                    } 
                } 
            }
        } 
    } 
}
