/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200023
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned short i_3 = 4; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_9 [i_3 - 2] [i_3 - 2] [i_2 - 2]) + (arr_9 [i_3 - 2] [i_3 - 3] [i_2 + 2])))) - (((((/* implicit */unsigned long long int) arr_9 [i_3 - 2] [i_3 - 4] [i_2 - 2])) * (var_7))))))));
                            var_11 = ((/* implicit */unsigned long long int) ((min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) (signed char)27)))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [8LL] [i_2 + 1] [i_3 - 2] [i_3 - 1])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) ((9155052486528872768ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27)))));
                                var_13 -= ((/* implicit */unsigned short) var_2);
                                var_14 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [(short)7] [(unsigned char)10] [2] [(unsigned char)16] [4ULL]))))) ? (((/* implicit */int) ((unsigned short) arr_17 [12U] [(unsigned short)14] [(unsigned short)17] [(unsigned char)15] [(unsigned char)7]))) : (((((/* implicit */_Bool) arr_17 [(unsigned char)8] [4ULL] [i_0] [12] [(unsigned char)14])) ? (((/* implicit */int) arr_17 [(unsigned short)6] [i_1] [5LL] [13LL] [17])) : (((/* implicit */int) arr_17 [(unsigned char)4] [(unsigned short)4] [5U] [1U] [(unsigned char)9])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)61228))))))) : (arr_22 [(_Bool)1] [3LL])));
                            var_16 = ((/* implicit */long long int) ((_Bool) var_8));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    for (long long int i_12 = 3; i_12 < 24; i_12 += 4) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
                            arr_36 [20U] [i_10] [8] [24LL] [(unsigned char)14] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_24 [(unsigned char)24] [24U])) || (((/* implicit */_Bool) var_1)))))) ? (((/* implicit */int) (signed char)-9)) : (((((/* implicit */_Bool) ((long long int) -2433277803151844777LL))) ? (((/* implicit */int) ((unsigned short) arr_31 [4ULL] [(_Bool)1] [3LL] [0ULL]))) : (5)))));
                            var_18 = ((/* implicit */unsigned long long int) ((long long int) ((arr_26 [(signed char)8]) % (((/* implicit */unsigned long long int) (+(arr_28 [(unsigned char)14])))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (~(-2433277803151844766LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_31 [i_12 - 2] [0U] [(_Bool)1] [i_12 + 1]) <= (arr_31 [i_12 + 1] [4U] [22] [i_12 + 1]))))) : (((unsigned int) ((((/* implicit */_Bool) arr_24 [(short)15] [5U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [(unsigned char)9] [18] [(unsigned short)21]))) : (2433277803151844761LL))))));
                            var_20 = (+(((/* implicit */int) arr_29 [i_11] [i_11] [i_10])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    for (int i_14 = 1; i_14 < 24; i_14 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_28 [8U])) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) arr_39 [20U] [16ULL] [(unsigned short)18] [(short)12] [10ULL] [i_13])))))))))));
                            arr_42 [i_14] [(unsigned short)11] [8U] [1] [17U] [i_14] = ((/* implicit */unsigned long long int) min((min(((~(8589934591LL))), (((/* implicit */long long int) arr_40 [9ULL] [i_14] [(unsigned short)2] [7LL] [i_14] [18])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [2ULL])) ? ((+(((/* implicit */int) arr_35 [(short)20] [8ULL] [i_14])))) : (((((/* implicit */_Bool) arr_38 [23LL])) ? (arr_33 [14] [16LL] [i_14] [22]) : (var_1))))))));
                            var_22 = 9223372036854775792LL;
                            var_23 = ((/* implicit */long long int) arr_27 [(unsigned short)10] [(signed char)3] [(signed char)9]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 2; i_15 < 23; i_15 += 2) 
                {
                    for (unsigned short i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        {
                            arr_50 [(short)1] [17] [1LL] [5ULL] [(unsigned short)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [(signed char)22] [17ULL] [15ULL] [1LL])) ? (-2433277803151844772LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967294U)) && (((/* implicit */_Bool) (signed char)-36))))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)126))))) : (((unsigned int) ((arr_34 [8LL] [(short)8] [24ULL] [14] [i_10]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_24 = arr_46 [(unsigned char)18] [14ULL] [(_Bool)1];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 1) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_55 [19LL] [20] [(unsigned short)18] [(signed char)23] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)98))) & (((arr_28 [6ULL]) ^ (((/* implicit */long long int) arr_44 [(signed char)22] [(unsigned char)6])))))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [12ULL])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_39 [20] [i_9] [(unsigned short)14] [(unsigned char)20] [14U] [i_9])) % (((/* implicit */int) min((var_2), (((/* implicit */short) (signed char)24))))))))));
                            arr_56 [(_Bool)1] [(unsigned short)15] [(unsigned short)1] [18] [24LL] = ((((/* implicit */_Bool) max((min((arr_51 [2ULL] [(_Bool)1]), (((/* implicit */unsigned int) arr_37 [(unsigned char)13])))), (((unsigned int) arr_31 [21ULL] [6LL] [24U] [23]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)100))))) : (7252681279988151170ULL));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_19 = 4; i_19 < 24; i_19 += 1) 
                {
                    for (int i_20 = 0; i_20 < 25; i_20 += 4) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                arr_66 [11ULL] [(unsigned short)10] [(unsigned char)14] [1ULL] [(unsigned char)0] [19U] [(signed char)2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max(((signed char)-28), (((/* implicit */signed char) var_8))))) ? (arr_45 [(_Bool)1] [20ULL] [(short)7] [(unsigned char)20]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [24] [17U] [(short)20])) ^ (((/* implicit */int) arr_29 [13U] [21U] [5]))))))), ((~(arr_26 [i_19 - 4])))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (unsigned char)161))));
                                arr_67 [(unsigned char)3] [(_Bool)0] [(short)6] [11ULL] [8LL] = ((/* implicit */unsigned int) ((max((arr_49 [i_19 + 1] [10U] [(unsigned short)13] [17ULL]), (arr_64 [i_19 - 2] [(unsigned short)8] [2ULL] [20] [(unsigned char)20] [15U] [(unsigned char)2]))) + (arr_49 [i_19 - 2] [(short)16] [(short)24] [15U])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_22 = 0; i_22 < 24; i_22 += 1) 
    {
        for (int i_23 = 0; i_23 < 24; i_23 += 4) 
        {
            for (long long int i_24 = 0; i_24 < 24; i_24 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_25 = 2; i_25 < 22; i_25 += 4) 
                    {
                        for (unsigned char i_26 = 2; i_26 < 23; i_26 += 4) 
                        {
                            {
                                arr_81 [0U] [7LL] [(_Bool)1] [23] [20ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_39 [(unsigned char)14] [i_25 - 1] [(unsigned short)6] [0ULL] [(unsigned short)16] [i_26]))) ? ((+(((/* implicit */int) arr_39 [24] [i_25 + 1] [6] [(unsigned short)4] [(unsigned char)4] [i_26])))) : (((/* implicit */int) arr_39 [(signed char)20] [i_25 + 2] [(_Bool)1] [(signed char)14] [6LL] [i_25]))));
                                var_27 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned short)0)))), ((-(((/* implicit */int) (short)32767))))));
                                var_28 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) (unsigned short)11791)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))) : (9378130166714080455ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [(signed char)15] [14ULL])))));
                                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32747))) <= (3290364703139343202ULL))))) == ((-(arr_46 [9ULL] [4U] [12ULL]))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) (unsigned char)100)) ^ (((/* implicit */int) (unsigned char)99)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_27 = 0; i_27 < 24; i_27 += 4) 
                    {
                        for (unsigned short i_28 = 0; i_28 < 24; i_28 += 4) 
                        {
                            {
                                var_30 = ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_57 [i_22] [i_23])) << (((/* implicit */int) var_8))))) : (min((var_3), (((/* implicit */unsigned long long int) arr_41 [2LL] [i_23] [12LL] [i_28])))));
                                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_58 [19LL] [i_24] [(_Bool)1] [i_28]) : (arr_58 [0] [21ULL] [0U] [2])))) && (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [(short)0] [(unsigned char)20] [14] [3LL])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (arr_51 [(signed char)6] [(unsigned short)8])))) == (((long long int) (signed char)127))))));
                                var_32 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_72 [i_24]))))), (arr_46 [11ULL] [10] [(short)6])));
                                var_33 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_43 [(unsigned short)18] [24U] [(short)16]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_29 = 0; i_29 < 24; i_29 += 1) 
                    {
                        for (unsigned long long int i_30 = 1; i_30 < 22; i_30 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */int) var_7);
                                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) -2433277803151844757LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
