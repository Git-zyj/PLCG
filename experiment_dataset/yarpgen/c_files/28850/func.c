/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28850
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_6 [(unsigned short)6] [11] [i_2]))) ? (arr_7 [8] [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [10])))))));
                arr_8 [i_0] [i_0] [i_1] [i_2] = ((((/* implicit */unsigned int) 856647018)) / (arr_4 [6U] [i_1] [i_2]));
                var_12 ^= ((unsigned int) arr_6 [i_0] [7ULL] [i_2]);
            }
            for (int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 1; i_4 < 10; i_4 += 1) 
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61299)))))) | (arr_11 [i_4 + 1] [i_4 + 2] [i_4 + 1]))))));
                    var_14 ^= ((/* implicit */int) ((unsigned char) arr_4 [(unsigned short)7] [i_4 + 1] [i_4 - 1]));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 856647018)) ^ (arr_11 [(unsigned short)8] [3U] [6U]))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_14 [i_0] [(unsigned short)4] [(unsigned short)4] [i_5] [(unsigned short)4]) : (((/* implicit */int) (unsigned short)63804))))) && (((/* implicit */_Bool) 856647024))));
                    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [(unsigned short)8] [i_1] [i_3] [i_5] [i_0]))));
                }
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_3] [i_3])) ? (arr_9 [10] [i_1] [i_3] [i_1]) : (arr_9 [1ULL] [1U] [i_3] [(unsigned short)4])));
                var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_1 [4] [i_0])))) ? (arr_4 [i_0] [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned char)11] [i_0])))));
            }
            var_20 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) / (((/* implicit */int) arr_3 [i_1] [i_0]))))) / (arr_7 [i_0] [i_0] [i_0])));
            arr_17 [i_0] [10ULL] = ((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_0] [i_1]);
            var_21 ^= (~(((/* implicit */int) arr_2 [(unsigned char)7] [i_1] [i_1])));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 2; i_8 < 10; i_8 += 3) 
                        {
                            arr_26 [i_0] [(unsigned short)6] [(unsigned short)11] = ((/* implicit */unsigned char) ((unsigned int) arr_14 [i_8 + 2] [i_8 + 2] [i_8] [i_6] [8]));
                            var_22 = ((/* implicit */unsigned short) ((((29982056) < (-29982057))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 1907303150)))))) : (var_3)));
                        }
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            arr_31 [(unsigned char)2] [(unsigned short)0] [i_1] [3U] [i_7] [i_7] [i_9] = ((/* implicit */signed char) 636649307);
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+(arr_4 [i_0] [i_1] [i_6]))))));
                            var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)36594)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))) : (2196691506U))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4257))) <= (3539248974U)))))));
                        }
                        arr_32 [i_7] [i_6] [i_1] [i_1] [i_0] &= arr_5 [(signed char)6] [i_1] [i_7];
                        arr_33 [4] [i_1] [i_6] [i_7] [(unsigned short)10] = ((/* implicit */unsigned short) ((signed char) (unsigned short)19664));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_11 [i_0] [(unsigned short)4] [5]))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6])) ? (var_1) : (arr_1 [i_0] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)15360)) || (((/* implicit */_Bool) arr_9 [i_0] [i_1] [9] [i_7])))))) : (arr_13 [i_7])));
                    }
                } 
            } 
        }
        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            var_27 ^= ((/* implicit */unsigned short) (~(arr_0 [i_0] [i_10])));
            var_28 = ((/* implicit */unsigned int) arr_24 [9U] [6U] [i_0] [i_0] [5ULL] [i_10]);
            arr_38 [i_0] |= ((/* implicit */int) arr_28 [i_0] [(unsigned short)2] [(unsigned short)3] [i_10] [i_0]);
        }
        var_29 = ((/* implicit */unsigned char) ((((arr_35 [0] [i_0] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) > (arr_11 [2U] [(unsigned short)1] [(unsigned short)1]))))))) % (arr_11 [i_0] [(unsigned char)5] [(unsigned short)6])));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            for (int i_12 = 2; i_12 < 9; i_12 += 3) 
            {
                for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
                {
                    {
                        arr_50 [i_12] = ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (((((/* implicit */_Bool) arr_22 [(signed char)6] [(signed char)6] [(unsigned char)4] [i_12] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [8LL] [i_12]))) : (arr_4 [5LL] [5LL] [6LL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_1 [i_0] [1])) ? (arr_41 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4236))))));
                        arr_51 [i_12] [(unsigned short)5] [(unsigned char)11] [i_12] [i_13] [(unsigned char)6] = var_3;
                    }
                } 
            } 
        } 
        arr_52 [3LL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_28 [(unsigned short)6] [i_0] [i_0] [2] [(unsigned short)11]))))) != (arr_49 [(unsigned short)8] [1U] [(unsigned short)8] [i_0] [i_0]))))) % (((unsigned long long int) arr_20 [i_0] [i_0]))));
    }
    for (unsigned char i_14 = 2; i_14 < 10; i_14 += 3) 
    {
        /* LoopNest 3 */
        for (int i_15 = 4; i_15 < 10; i_15 += 3) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 2) 
            {
                for (unsigned short i_17 = 0; i_17 < 11; i_17 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 0; i_18 < 11; i_18 += 1) 
                        {
                            arr_72 [(unsigned short)3] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned short)19876), (((/* implicit */unsigned short) (signed char)127))))) & (((/* implicit */int) ((unsigned short) min((var_3), (((/* implicit */unsigned long long int) 1184714347))))))));
                            var_30 -= ((/* implicit */int) var_4);
                        }
                        /* vectorizable */
                        for (unsigned char i_19 = 0; i_19 < 11; i_19 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned short) var_8);
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) (unsigned short)40915)) : (((/* implicit */int) (unsigned short)10)))))));
                            arr_75 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_66 [i_15] [8U] [i_15 - 1] [i_15 - 4] [i_15]) : (arr_66 [4] [4] [i_15 - 2] [i_15 - 3] [8])));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_69 [(unsigned char)9] [i_14 - 2] [(unsigned short)0] [i_15 + 1] [2ULL] [i_15 - 1] [(unsigned char)3])) ? ((+(((/* implicit */int) (unsigned char)186)))) : (((/* implicit */int) arr_63 [i_16] [i_15 - 1] [i_16])))))));
                        }
                        /* LoopSeq 1 */
                        for (int i_20 = 0; i_20 < 11; i_20 += 3) 
                        {
                            arr_78 [9LL] [0U] [9LL] [0U] [i_15] [i_14] [5U] = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((arr_12 [i_14 + 1] [i_14 - 1] [i_15 - 2] [i_17]), (arr_12 [i_14 + 1] [i_14 + 1] [i_15 + 1] [10U])))), (max((((/* implicit */long long int) min((arr_54 [i_14] [(unsigned short)8]), (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */long long int) var_8)) : (786259750897103284LL)))))));
                            arr_79 [i_15] [i_15] [7] [(unsigned short)0] [i_15] = ((/* implicit */signed char) (unsigned char)200);
                            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_36 [3U] [4U] [(unsigned short)3])) <= (var_0)))), (((((/* implicit */_Bool) arr_58 [i_16] [i_16])) ? (arr_58 [i_16] [i_16]) : (arr_58 [i_16] [i_16]))))))));
                        }
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1399867689)) || (((/* implicit */_Bool) 11800039656987610205ULL))));
                        var_36 = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_12 [i_14] [i_15] [i_14] [i_17])), (3961171009809150230ULL))), (((/* implicit */unsigned long long int) arr_54 [9ULL] [(signed char)1]))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_0 [(signed char)5] [(signed char)6]))) ? (((/* implicit */int) min(((unsigned short)65511), (((/* implicit */unsigned short) (signed char)93))))) : (((((/* implicit */_Bool) arr_0 [i_14] [8U])) ? (var_1) : (((/* implicit */int) (unsigned char)251)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)13)))))));
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (!(((arr_55 [i_14 + 1]) < (((/* implicit */unsigned int) arr_61 [i_14] [10LL] [(unsigned short)8] [10U])))))))));
    }
}
