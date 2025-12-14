/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23712
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
    var_12 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
    var_13 = ((/* implicit */signed char) (+(((/* implicit */int) (short)(-32767 - 1)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) var_5)) ? (arr_6 [i_2 - 2] [i_2] [(signed char)5] [11ULL]) : (arr_6 [i_2 + 1] [i_2] [i_2] [i_2 + 1])))));
                    var_14 = ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((512706598027266254ULL) - (512706598027266239ULL))));
                }
            } 
        } 
        var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 512706598027266254ULL)))) ? (((((/* implicit */_Bool) 14919282231918221995ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (17934037475682285356ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551593ULL)) ? (((/* implicit */int) (short)-23212)) : (((/* implicit */int) (unsigned char)182)))))))) || (((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) 2053515321779056463LL))))))));
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [7LL])), (((unsigned long long int) (unsigned short)0))))) ? (((/* implicit */int) var_8)) : ((~((~(((/* implicit */int) (unsigned short)65535))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
        {
            arr_14 [i_4] = ((/* implicit */unsigned long long int) var_2);
            arr_15 [(_Bool)1] [i_4] = ((/* implicit */int) var_7);
        }
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_9 [1LL] [i_5])))) < (min((((/* implicit */unsigned int) (+(var_11)))), (arr_16 [i_3] [i_3] [(signed char)6])))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 1; i_7 < 23; i_7 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -7129851))));
                        arr_26 [i_6] [i_6] = arr_13 [i_3] [i_3];
                    }
                } 
            } 
        }
    }
    for (short i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
    {
        arr_29 [3] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) -1888348820)), (min((((/* implicit */long long int) (_Bool)1)), (3574569890748081950LL))))), (max((-6079174613689972705LL), (((/* implicit */long long int) (short)23220))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
        {
            var_18 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(unsigned short)11] [i_9]))));
            var_19 = ((/* implicit */_Bool) 0ULL);
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_20 &= ((/* implicit */unsigned short) 3686324050U);
                        var_21 += ((/* implicit */unsigned char) ((short) (unsigned short)65524));
                        /* LoopSeq 1 */
                        for (int i_12 = 1; i_12 < 22; i_12 += 2) 
                        {
                            var_22 ^= ((unsigned long long int) (unsigned short)37380);
                            var_23 = ((/* implicit */_Bool) 175252435U);
                        }
                    }
                } 
            } 
            arr_42 [i_8] [i_9] [10LL] = ((/* implicit */signed char) arr_19 [i_8] [i_8]);
            /* LoopNest 2 */
            for (unsigned short i_13 = 4; i_13 < 23; i_13 += 3) 
            {
                for (long long int i_14 = 1; i_14 < 23; i_14 += 2) 
                {
                    {
                        arr_48 [i_8] [12ULL] [i_9] [i_8] |= ((/* implicit */short) ((((/* implicit */_Bool) 346931824272688116LL)) ? (((/* implicit */unsigned long long int) 175252444U)) : (13639862116533375162ULL)));
                        var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_9] [i_13 + 1] [i_13 - 3])) ? (((/* implicit */int) arr_21 [i_8] [i_13 - 2] [i_14 + 1])) : (-8)));
                        var_25 = ((/* implicit */unsigned long long int) ((unsigned char) 4119714853U));
                        arr_49 [i_8] [i_14] [i_13] [i_13] [i_14] [i_14 + 1] = ((/* implicit */unsigned short) ((short) ((465677564U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-23212))))));
                    }
                } 
            } 
        }
        for (short i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 2) 
            {
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)25)) ? (4119714860U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23201)))));
                arr_54 [i_8] [i_15] [i_8] = ((/* implicit */long long int) ((_Bool) max((512706598027266254ULL), (((/* implicit */unsigned long long int) -5325531968964708423LL)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_17 = 3; i_17 < 22; i_17 += 2) 
                {
                    var_27 = ((/* implicit */unsigned long long int) (short)-24744);
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (((/* implicit */unsigned long long int) arr_56 [i_15] [i_8] [i_17] [(_Bool)1] [i_15])) : (((((/* implicit */_Bool) -701684780)) ? (((/* implicit */unsigned long long int) -2190315890709828178LL)) : (1570995122911975139ULL)))));
                    var_29 -= ((/* implicit */unsigned char) arr_25 [i_15] [i_17 - 2]);
                    arr_58 [i_15] [i_17] [i_17] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-23212)) + (arr_40 [i_8] [i_8] [i_8] [i_16] [i_17] [19LL] [(_Bool)1])))) ? (((/* implicit */int) ((arr_30 [i_15] [23LL] [(unsigned char)5]) > (-5208989212023594692LL)))) : (arr_40 [i_17] [i_17 + 2] [i_17 + 2] [6U] [i_17] [i_17 - 2] [7])));
                    arr_59 [(_Bool)1] [i_17] [(_Bool)1] [i_17 + 2] [i_8] = ((/* implicit */long long int) (+(arr_6 [i_8] [i_15] [i_16] [(short)14])));
                }
                for (unsigned int i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    var_30 += ((/* implicit */unsigned long long int) ((long long int) max((9613122088402338754ULL), (((/* implicit */unsigned long long int) 1528574945075374742LL)))));
                    var_31 = ((/* implicit */unsigned char) max((var_0), (((12894947402784082066ULL) >> (((/* implicit */int) (signed char)4))))));
                    var_32 += ((/* implicit */unsigned short) -2147483630);
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3711332262907202960LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)28156))));
                }
                for (unsigned long long int i_19 = 1; i_19 < 23; i_19 += 4) 
                {
                    arr_65 [i_8] [i_15] = ((((/* implicit */_Bool) ((unsigned long long int) arr_63 [8] [i_15] [i_19 + 1] [i_19] [8] [2]))) ? (min(((-(((/* implicit */int) arr_32 [i_19])))), (((/* implicit */int) (_Bool)1)))) : ((~(-2147483630))));
                    var_34 = ((((/* implicit */_Bool) 36559766)) ? (-1528574945075374742LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11781))));
                }
            }
            for (signed char i_20 = 0; i_20 < 24; i_20 += 3) 
            {
                var_35 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) max((arr_56 [i_8] [i_8] [i_8] [i_20] [i_20]), (var_7)))) ? (min((var_9), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1))))))));
                arr_68 [i_20] [i_15] [i_15] = ((/* implicit */unsigned long long int) min(((short)-27773), (((/* implicit */short) (unsigned char)59))));
                var_36 = var_4;
            }
            for (int i_21 = 0; i_21 < 24; i_21 += 3) 
            {
                var_37 = ((/* implicit */short) (~(min((max((((/* implicit */long long int) (-2147483647 - 1))), (-3711332262907202969LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_21])))))))));
                var_38 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28153)))));
            }
            var_39 = ((/* implicit */unsigned char) (+(-4098590193789192655LL)));
            var_40 = ((/* implicit */unsigned short) arr_69 [(unsigned short)8] [(signed char)18] [(unsigned char)12] [i_15]);
        }
        for (short i_22 = 0; i_22 < 24; i_22 += 2) /* same iter space */
        {
            arr_77 [i_8] [i_22] [22] |= ((/* implicit */unsigned long long int) arr_56 [i_8] [i_22] [i_22] [i_8] [i_8]);
            /* LoopSeq 1 */
            for (signed char i_23 = 0; i_23 < 24; i_23 += 3) 
            {
                var_41 &= ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-25913)) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) arr_32 [i_8])) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)254)), ((unsigned short)37383))))))) ? (min((((arr_12 [(unsigned char)7] [i_22]) ? (3068259805861026118LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned short)15657))))))) : (max((arr_17 [i_8] [i_8] [i_23]), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_53 [i_8] [i_22])), ((unsigned short)28150)))))));
                var_42 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (-2147483628)))), (var_6)))) ? (max((((/* implicit */unsigned long long int) (-(var_7)))), (((((/* implicit */_Bool) arr_7 [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8] [i_23]))) : (arr_45 [i_8] [i_23] [i_23] [i_23]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned short) arr_45 [i_8] [i_23] [18ULL] [6LL]))), (max((arr_35 [22] [22]), (((/* implicit */long long int) (unsigned short)37383)))))))));
                var_43 -= ((/* implicit */unsigned long long int) ((-2147483630) & (1340858722)));
                arr_80 [i_8] [i_23] [i_23] = ((/* implicit */int) var_8);
            }
            var_44 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)13))))) == (min((arr_24 [i_8] [i_22] [i_22] [i_22] [i_22]), (((/* implicit */unsigned long long int) arr_70 [17])))))));
            arr_81 [i_8] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53748)) ? (((/* implicit */int) (signed char)49)) : (2147483647)))), (max((((((/* implicit */_Bool) arr_62 [i_8] [i_8] [i_8] [i_22] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28137))) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-50)))))))));
        }
    }
    /* LoopSeq 1 */
    for (int i_24 = 3; i_24 < 13; i_24 += 3) 
    {
        var_45 = ((((/* implicit */_Bool) (unsigned short)65526)) ? (512706598027266254ULL) : (11236509210655027965ULL));
        var_46 += ((/* implicit */unsigned char) 3580326142U);
        var_47 *= ((/* implicit */unsigned long long int) var_10);
    }
}
