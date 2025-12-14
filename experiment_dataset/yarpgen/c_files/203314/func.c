/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203314
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
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7485168315873965124ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)18983))))) ? (max((var_12), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_17))))))))));
    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (var_1)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_13), (var_13))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((min((((/* implicit */short) var_5)), (var_3))), (var_4)))))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) 1179275492253752546ULL)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (short)18184)))))) : (((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_0 [i_0 + 1] [i_0 + 1]), (((/* implicit */long long int) arr_2 [17LL])))), (max((((/* implicit */long long int) arr_1 [0ULL])), (arr_0 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [(short)0])) : (((/* implicit */int) arr_2 [i_0]))))), (max((((/* implicit */long long int) arr_1 [(short)21])), (arr_0 [(unsigned short)15] [(unsigned char)11])))))) : (((((/* implicit */_Bool) -2107673660562223215LL)) ? (1179275492253752546ULL) : (1179275492253752546ULL)))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_11 [i_3] [i_2] [9LL] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_9 [i_0 - 1])), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3] [(unsigned char)13] [i_1] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_1] [(short)0])) : (((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1] [17ULL]))))), (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) : (arr_0 [i_0 + 1] [i_1])))))));
                        arr_12 [3U] = ((/* implicit */long long int) ((max((arr_0 [i_0 + 1] [i_1]), (arr_0 [i_0 - 1] [12LL]))) == (arr_0 [i_3] [i_0])));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_0] [(short)6] [(short)6] [13LL])) ? (((/* implicit */int) arr_7 [(unsigned char)16] [(unsigned char)16])) : (((/* implicit */int) arr_2 [21ULL])))), (((/* implicit */int) max((((/* implicit */short) (signed char)-74)), ((short)19960))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 3] [i_3])) : (((/* implicit */int) arr_9 [(unsigned short)21]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [6ULL] [6ULL] [6ULL])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1] [i_0 + 1] [16])) ? (arr_0 [i_0] [(unsigned short)18]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned short)9] [i_1] [i_2] [i_1]))))))) : (min((((/* implicit */long long int) min((arr_5 [3LL]), (arr_7 [(short)12] [(short)12])))), (((((/* implicit */_Bool) arr_6 [8LL] [i_2] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_0 [i_0] [17LL])))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 3])) ? (arr_0 [i_0 + 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [0ULL])), (arr_10 [i_0 + 2] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) min((arr_9 [7ULL]), (((/* implicit */unsigned short) arr_3 [(short)4] [i_1]))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_4 [i_0] [(short)10] [i_0])) : (((/* implicit */int) arr_9 [i_0])))))))));
        }
        for (short i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
        {
            var_24 = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [7U] [7U] [i_4] [i_4])) ? (((/* implicit */int) arr_8 [i_0] [i_4] [i_0] [i_0])) : (((/* implicit */int) arr_5 [10ULL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0] [i_0])), (arr_5 [i_4]))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) : (arr_13 [i_0])))))), (arr_0 [i_0] [i_4]));
            /* LoopSeq 1 */
            for (short i_5 = 4; i_5 < 19; i_5 += 3) 
            {
                var_25 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5822))) : (-2107673660562223232LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_0 [i_4] [i_4]) : (((/* implicit */long long int) arr_10 [i_5] [13ULL] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)12]))) : (arr_17 [i_5] [i_5 + 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(unsigned short)7])) ? (arr_14 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (((((/* implicit */_Bool) arr_10 [11U] [i_4] [(unsigned char)5] [(unsigned short)2])) ? (arr_17 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4]))) : (arr_0 [i_4] [i_4]))))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 1; i_6 < 20; i_6 += 3) 
                {
                    for (long long int i_7 = 2; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_26 -= ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */unsigned long long int) arr_10 [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [i_7])) : (min((((/* implicit */unsigned long long int) min((arr_14 [(unsigned char)13]), (arr_13 [i_0 + 3])))), (max((arr_21 [i_4] [i_4] [i_4] [i_6] [16LL]), (((/* implicit */unsigned long long int) arr_14 [(_Bool)1])))))));
                            var_27 = max((((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (min((((/* implicit */long long int) arr_14 [i_7])), (arr_15 [i_0] [(_Bool)1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (((/* implicit */int) arr_8 [i_4] [(unsigned short)12] [(unsigned short)7] [(unsigned short)7])) : (((/* implicit */int) arr_6 [(_Bool)0] [i_4] [i_5] [i_5]))))))), (((((((/* implicit */_Bool) arr_15 [i_0] [i_4])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) arr_18 [i_6] [i_6])))) ^ (((((/* implicit */_Bool) arr_23 [i_5] [i_6] [5U] [16LL] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [(short)2]))) : (arr_20 [i_0] [i_4] [i_5 + 2] [i_4]))))));
                        }
                    } 
                } 
            }
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [(unsigned short)10])) ? (arr_18 [i_0] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_4] [i_0] [i_4])))))), (((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4] [i_4] [(signed char)16])) ? (arr_21 [i_4] [i_0] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [5ULL] [5ULL] [i_4] [i_4])))))))) ? (((((((/* implicit */int) arr_19 [19ULL])) == (((/* implicit */int) arr_22 [i_4] [i_4])))) ? (min((arr_14 [(unsigned short)20]), (arr_14 [(unsigned short)2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [12LL] [i_4])) && (((/* implicit */_Bool) arr_16 [i_4] [i_4])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [i_0 + 3] [i_0 + 3] [i_0 + 2] [i_0 + 3]), (((/* implicit */unsigned short) ((arr_17 [i_4] [i_4]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))))))));
            arr_24 [5U] = ((/* implicit */unsigned long long int) min(((unsigned short)10156), (((/* implicit */unsigned short) (short)5822))));
        }
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [6LL] [i_0])) ? (((/* implicit */int) arr_22 [12ULL] [i_0 + 2])) : (((/* implicit */int) arr_22 [(short)12] [i_0 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)17] [(unsigned char)18]))) : (arr_17 [(unsigned short)18] [i_0])));
    }
    /* vectorizable */
    for (unsigned int i_8 = 1; i_8 < 19; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 2) 
        {
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_9])) - (((/* implicit */int) arr_4 [i_8] [i_9 + 1] [i_9]))))) ? (((/* implicit */int) arr_28 [i_8] [i_9])) : (((((/* implicit */_Bool) arr_6 [i_8] [i_9] [(signed char)5] [(short)14])) ? (((/* implicit */int) arr_8 [(short)21] [i_8] [i_8] [i_9])) : (((/* implicit */int) arr_4 [11LL] [11LL] [i_9]))))));
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                var_31 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_31 [i_9 - 1] [i_9 - 1] [(short)11] [i_9 - 1])) ? (((/* implicit */int) arr_25 [i_8] [i_8])) : (((/* implicit */int) arr_2 [(short)9])))) ^ (((((/* implicit */int) arr_25 [(short)19] [i_9])) - (((/* implicit */int) arr_5 [i_10]))))));
                var_32 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9] [i_9])) ? (arr_17 [i_9] [i_9]) : (((/* implicit */unsigned long long int) arr_15 [i_8] [i_8]))))) ? (((/* implicit */int) arr_5 [i_10])) : (((/* implicit */int) arr_28 [8U] [8U]))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_11 = 2; i_11 < 18; i_11 += 4) 
            {
                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_9] [(short)2])) ? (((/* implicit */int) arr_5 [i_9 - 1])) : (((/* implicit */int) arr_2 [i_8]))))) ? (((((/* implicit */_Bool) arr_23 [i_9] [i_9] [i_9 - 2] [i_11] [i_11])) ? (((/* implicit */int) arr_4 [i_8 + 3] [i_9 - 1] [i_11])) : (((/* implicit */int) arr_29 [i_11] [21U] [8LL])))) : (((/* implicit */int) arr_27 [i_8 + 2] [(unsigned short)15] [(unsigned short)16])))))));
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_8 + 3] [i_9 + 1] [i_11 + 1])) ? (((/* implicit */int) arr_4 [i_8 + 1] [i_9 - 2] [i_11 - 1])) : (((/* implicit */int) arr_4 [i_8 + 1] [i_9 - 1] [i_11 - 2]))));
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_8 + 3] [i_11])) ? (arr_16 [i_8 - 1] [i_11]) : (arr_16 [i_8 + 3] [i_9])));
                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_8] [i_8])) ? (((/* implicit */int) arr_30 [(short)13] [(short)13])) : (((/* implicit */int) arr_9 [i_11]))));
            }
            for (int i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_33 [(unsigned short)1] [i_9] [i_9] [i_9]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_8] [i_8 + 1] [12LL])))))) ? (((/* implicit */int) arr_3 [i_8] [i_8])) : (((/* implicit */int) arr_25 [i_9 - 2] [20U])))))));
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_12] [(unsigned char)7] [(unsigned char)7] [i_8 + 3]))) : (arr_10 [i_8] [i_8 + 1] [i_8] [i_12])));
                /* LoopNest 2 */
                for (unsigned char i_13 = 2; i_13 < 18; i_13 += 4) 
                {
                    for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_14])) ? (arr_14 [i_8 - 1]) : (arr_14 [i_13 - 1])));
                            arr_41 [i_8] [(short)18] [i_9] [i_12] [i_12] [i_9] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_8])) ? (arr_0 [i_8] [20LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [(_Bool)1] [i_9])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9 - 2] [i_12] [i_14]))) : (arr_14 [15LL])));
                            arr_42 [i_8 - 1] [i_12] [i_13] [9LL] = ((/* implicit */unsigned long long int) arr_39 [i_13] [6LL] [i_9]);
                            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_8 + 1] [i_12] [16ULL] [i_13 + 4])) ? (arr_18 [i_9 - 2] [i_8 - 1]) : (arr_18 [i_8 - 1] [i_9 - 2])));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)15756)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))) : (9191737530145089266ULL)));
                        }
                    } 
                } 
            }
            var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_9] [i_8 - 1] [1ULL])) ? (((/* implicit */int) arr_29 [(unsigned short)15] [i_8] [(unsigned short)15])) : (((/* implicit */int) arr_3 [i_8] [i_8]))))) ? (((arr_0 [i_8] [i_9]) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_9] [(unsigned short)0] [i_9] [i_9] [i_9]))))))));
        }
        arr_43 [15ULL] [i_8] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_8 + 1] [i_8] [i_8])) ^ (((/* implicit */int) arr_27 [i_8 + 1] [i_8 + 1] [i_8]))));
    }
}
