/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208896
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (((((/* implicit */_Bool) 3108363313U)) ? (3108363300U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_17 *= ((/* implicit */short) (~((~(3200481714941183915LL)))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -152318488442619407LL)) ? (((/* implicit */int) (signed char)126)) : (-1441934455)));
    }
    /* LoopSeq 3 */
    for (int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3108363314U)) ? (((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) 2361255469U))))) : (((/* implicit */int) (short)-6760))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((var_4) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_1])))), ((-(((/* implicit */int) arr_1 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (((((((/* implicit */int) arr_0 [i_1])) >= (((/* implicit */int) arr_3 [(_Bool)1])))) ? (((/* implicit */unsigned long long int) ((((-2027371773) + (2147483647))) << (((((/* implicit */int) var_10)) - (34869)))))) : (max((var_8), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
        {
            arr_7 [(short)3] [i_1] [21LL] = ((/* implicit */unsigned long long int) arr_1 [(_Bool)1]);
            var_21 &= ((/* implicit */_Bool) arr_4 [i_2]);
            var_22 = var_10;
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((1933711827U) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 983932969)))))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
        {
            arr_11 [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1])))))) > (max((((/* implicit */unsigned int) arr_1 [i_3])), (2361255469U)))));
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((long long int) -152318488442619392LL)))));
        }
        arr_12 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1])) ? (max((arr_6 [i_1]), (arr_6 [i_1]))) : (((arr_6 [i_1]) / (var_14)))));
        arr_13 [i_1] [i_1] = ((((/* implicit */int) arr_5 [i_1] [i_1])) > (((/* implicit */int) arr_0 [i_1])));
    }
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        var_25 = ((unsigned int) (-(((/* implicit */int) (signed char)-4))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) arr_3 [i_4]))))) ? ((-(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_7))))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                {
                    arr_24 [4LL] [i_4] [i_5] [11LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) (short)-27321))))) ? (((/* implicit */int) max((((/* implicit */short) arr_22 [i_6])), (arr_8 [i_4] [i_4])))) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_21 [i_6] [i_5] [i_4])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_8 [i_5] [i_6])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4])))));
                        arr_28 [i_5] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5]))))) : (((/* implicit */long long int) 1186603983U))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 3; i_8 < 10; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (arr_26 [i_8 - 1] [i_8 - 3] [i_8 - 2] [(signed char)11] [i_8 - 1])));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1217640599)) ? (((/* implicit */unsigned long long int) 2027371773)) : (arr_26 [i_8] [i_8] [i_6] [i_5] [i_4]))))));
                        var_29 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_8 - 3])) < (((/* implicit */int) arr_16 [i_8 + 1]))));
                    }
                    arr_32 [i_4] [i_5] [i_6] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (unsigned short)1))))), (((((arr_19 [i_4] [3LL]) / (arr_19 [i_4] [i_4]))) + (((/* implicit */long long int) ((/* implicit */int) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))));
                    arr_33 [i_4] [i_5] [(short)6] [(short)6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_5]))));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_36 [i_9] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((-1243801072) != (((/* implicit */int) var_10)))))))) ? (max((((((/* implicit */_Bool) arr_21 [i_4] [i_5] [i_6])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-1)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)26862)) : (((/* implicit */int) var_9)))))) : (-2027371773));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_31 [i_4] [i_5])) ? (arr_17 [i_4] [i_5] [i_9]) : (((/* implicit */int) var_3)))), (((/* implicit */int) arr_3 [i_4])))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_40 [i_4] [i_10] = (~(min((((/* implicit */unsigned int) 2027371773)), (var_11))));
                        arr_41 [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6])) ? (((/* implicit */int) arr_10 [i_10])) : (((/* implicit */int) arr_10 [i_10]))))) && (((/* implicit */_Bool) ((int) arr_10 [i_6]))));
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_5 [i_4] [i_4])) || (((/* implicit */_Bool) arr_5 [i_4] [i_4]))))));
        /* LoopNest 3 */
        for (unsigned char i_11 = 1; i_11 < 8; i_11 += 4) 
        {
            for (long long int i_12 = 1; i_12 < 8; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_48 [i_13] [i_11] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (max((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48449))) : (arr_42 [i_11 + 3] [i_12] [i_13])))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_13]))))), (((/* implicit */long long int) -573188027)))))));
                        arr_49 [i_13] [i_12] [i_13] [i_13] [0U] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_11 - 1] [i_12 + 1])) ? (((/* implicit */int) arr_8 [i_11 + 3] [i_12 + 3])) : (((/* implicit */int) arr_8 [i_11 - 1] [i_12 + 3]))))) ? ((-(((/* implicit */int) arr_8 [i_11 + 2] [i_12 + 1])))) : (((/* implicit */int) ((signed char) (signed char)14)))));
                        var_32 ^= max(((-(((/* implicit */int) arr_8 [i_12 + 3] [i_11 - 1])))), ((-(((arr_23 [i_4] [(_Bool)0] [i_4] [i_4]) ? (((/* implicit */int) arr_43 [i_12 - 1])) : (((/* implicit */int) (_Bool)0)))))));
                        arr_50 [(unsigned short)3] [i_4] [i_4] [i_13] [i_13] = ((/* implicit */short) (+(((((/* implicit */_Bool) 11222258191550970312ULL)) ? (2144897762) : (((/* implicit */int) (signed char)113))))));
                        arr_51 [(_Bool)1] [i_11 + 1] [i_13] [i_13] = ((/* implicit */short) ((max((max((arr_35 [i_13]), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((arr_35 [i_13]) > (((/* implicit */long long int) 3235274752U))))))) == (((/* implicit */long long int) ((/* implicit */int) (short)1022)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 1) 
    {
        var_33 = ((((((/* implicit */_Bool) arr_31 [i_14] [(short)0])) ? (((/* implicit */int) arr_31 [i_14] [(short)2])) : (arr_17 [i_14] [i_14] [i_14]))) / (((((/* implicit */int) arr_31 [i_14] [(_Bool)1])) ^ (((/* implicit */int) var_5)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 2; i_15 < 7; i_15 += 2) 
        {
            var_34 = ((/* implicit */long long int) arr_21 [i_15] [i_14] [i_14]);
            var_35 -= ((/* implicit */unsigned int) max(((!(((((/* implicit */long long int) 2144897754)) <= (-3470259464345153751LL))))), (((((/* implicit */unsigned long long int) arr_44 [i_15 - 2] [i_15 + 3] [i_15] [3U])) <= ((-(288230376151711744ULL)))))));
            /* LoopNest 3 */
            for (long long int i_16 = 1; i_16 < 8; i_16 += 2) 
            {
                for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */int) var_7);
                            var_37 = ((/* implicit */unsigned long long int) var_15);
                            arr_63 [i_18] [i_14] [i_17] [i_17] [i_15 + 3] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (max((arr_56 [i_14] [i_15] [(unsigned char)7] [i_15]), (((/* implicit */unsigned int) var_1))))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_16 + 1] [i_15 + 3]))) & (min((arr_20 [i_14]), (((/* implicit */long long int) arr_5 [i_17] [i_16])))))) : (((/* implicit */long long int) max(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_52 [i_17] [i_18])))))))));
                            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((11222258191550970312ULL) | (((/* implicit */unsigned long long int) 1059692548U)))))));
                            arr_64 [i_14] [i_14] [i_17] = ((/* implicit */_Bool) 1059692543U);
                        }
                    } 
                } 
            } 
        }
        arr_65 [(short)0] = (!(((/* implicit */_Bool) max((arr_2 [i_14] [i_14]), (arr_2 [i_14] [i_14])))));
    }
}
