/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24186
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
    var_11 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) min((arr_0 [i_0 + 3]), (arr_0 [i_0 + 2])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 + 3]) : (((/* implicit */int) var_7))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (var_0))));
        var_12 = ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */unsigned int) arr_2 [i_0 + 3])) : (arr_3 [i_0 + 2]))) : (((/* implicit */unsigned int) min((arr_0 [i_0 - 2]), (((/* implicit */int) var_6))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) arr_3 [i_0])))))) ? ((-(min((((/* implicit */unsigned int) var_6)), (arr_3 [i_0]))))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_0 + 2])), (arr_0 [i_0 + 2]))))));
        arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) 5633607986684191814LL)) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((unsigned char) var_2))))) : (((/* implicit */int) max((min((((/* implicit */short) arr_1 [3U])), (var_6))), (((/* implicit */short) ((arr_0 [i_0 - 1]) == (arr_2 [i_0])))))))));
        arr_7 [i_0] [(short)2] = ((unsigned long long int) ((var_0) < (((/* implicit */unsigned int) arr_2 [i_0 + 1]))));
    }
    for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 17; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    arr_14 [i_1 - 2] [i_1] [i_1 - 2] [i_2 - 2] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_8)), (var_5)))), (((unsigned long long int) arr_13 [i_1] [i_2] [i_3])))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_12 [i_1] [i_1 + 1] [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 19; i_5 += 2) 
                        {
                            {
                                var_13 ^= min((max((arr_18 [i_5] [i_5 - 2] [i_5] [i_5] [i_5]), (arr_18 [i_5 + 1] [i_5 - 2] [i_5 + 1] [i_5 - 2] [(unsigned short)19]))), (arr_18 [i_5 - 1] [i_5 + 1] [i_5] [i_5 - 1] [7]));
                                var_14 = ((/* implicit */_Bool) (-(min((arr_10 [i_2 + 2] [i_1]), (arr_10 [i_2 + 3] [i_2])))));
                                arr_19 [i_1] [i_1] [i_1 + 2] [i_1 - 2] [i_1] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1))))));
                                var_15 -= ((/* implicit */unsigned short) arr_18 [i_1] [i_2 + 2] [5ULL] [i_4] [(_Bool)1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [(unsigned short)16] |= ((/* implicit */long long int) arr_13 [18] [i_1] [18]);
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) max((((/* implicit */signed char) arr_21 [i_6] [i_6])), (arr_9 [i_6])));
        arr_23 [i_6] = ((/* implicit */_Bool) arr_2 [i_6]);
    }
    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        arr_28 [(signed char)16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7])) ? (arr_25 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22)))))) || (((/* implicit */_Bool) min((arr_25 [i_7]), (arr_25 [i_7]))))));
        var_17 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((_Bool) arr_27 [i_7]))), (min((arr_27 [i_7]), (arr_27 [i_7])))));
        /* LoopNest 2 */
        for (long long int i_8 = 1; i_8 < 18; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) max((arr_31 [i_8 + 1] [i_10]), (arr_31 [i_8 + 1] [i_8]))))))))));
                        arr_37 [i_7] [i_7] [(short)15] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_1))));
                        arr_38 [i_7] = min((((arr_11 [i_7]) - (((/* implicit */unsigned long long int) arr_16 [i_7] [(_Bool)1] [(_Bool)1] [i_10])))), (((/* implicit */unsigned long long int) (_Bool)1)));
                        var_19 = ((/* implicit */int) max((var_19), (((((arr_33 [i_8 - 1]) | (arr_33 [i_8 - 1]))) + (((/* implicit */int) ((arr_33 [i_8 + 1]) < (((/* implicit */int) var_9)))))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_7] [i_8])) ? (((/* implicit */int) (((-(arr_35 [i_7] [i_8 - 1] [i_9] [i_9]))) != (arr_35 [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 1])))) : (((/* implicit */int) (_Bool)1)))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((arr_34 [i_8]) - (((/* implicit */unsigned long long int) arr_33 [i_11])))), (arr_10 [i_9] [i_11])))) ? (((/* implicit */int) min((arr_41 [i_8] [i_8 - 1] [i_8 - 1] [0U] [i_11] [i_11]), (arr_41 [i_7] [i_8 - 1] [i_8 - 1] [(_Bool)1] [i_11] [(unsigned char)11])))) : (0)));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                        {
                            arr_48 [2LL] [6ULL] [(_Bool)0] [16] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (_Bool)1))));
                            arr_49 [i_13] [i_13] [i_12] [i_9] [i_8] [i_7] = ((/* implicit */int) ((long long int) (_Bool)1));
                            arr_50 [(unsigned char)3] [4LL] [i_9] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_8 - 1])) >= (((/* implicit */int) arr_9 [i_8 + 1]))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((arr_13 [i_13] [i_8] [i_9]) << (((((/* implicit */int) arr_15 [i_7] [i_8])) - (111))))))))));
                        }
                        var_23 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_17 [i_7] [i_8] [14ULL] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((arr_17 [i_7] [i_7] [i_7] [i_12]) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (arr_18 [i_9] [i_8 + 1] [6] [3ULL] [i_7])));
                        var_24 = ((/* implicit */unsigned long long int) ((short) var_2));
                    }
                    var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_8 + 1] [i_8 - 1] [i_8 + 1])) ? (arr_12 [i_8 + 1] [i_8 + 1] [i_8 + 1]) : (arr_12 [i_8 + 1] [i_8 + 1] [i_8 + 1])))) > (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_9] [i_8 - 1])) ^ (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (var_1)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (8088274130787365495ULL)))))));
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) min((((/* implicit */int) arr_41 [(_Bool)1] [(unsigned short)17] [i_9] [i_7] [13LL] [i_7])), (((int) ((var_10) ? (((/* implicit */unsigned int) 0)) : (var_2)))))))));
                }
            } 
        } 
    }
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            for (short i_16 = 3; i_16 < 10; i_16 += 2) 
            {
                for (unsigned long long int i_17 = 4; i_17 < 10; i_17 += 4) 
                {
                    {
                        arr_61 [8ULL] [i_14] [i_16 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_24 [i_14 - 1]) - (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) arr_16 [8] [8] [8] [i_17]))))) ? ((-(var_1))) : (((arr_13 [i_14] [i_15] [i_14 - 1]) - (arr_13 [i_14] [3LL] [3LL])))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_27 [i_14 - 1]), (((/* implicit */long long int) ((4120556580U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22583))) >= (((arr_17 [i_14] [i_16] [i_14] [i_14]) << (((arr_25 [i_14 - 1]) - (12944742096923710399ULL))))))))) : (-6463810275498149085LL)));
                        arr_62 [i_14] [i_15] [i_14] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (((((/* implicit */_Bool) arr_33 [i_14 - 1])) ? (((/* implicit */long long int) var_0)) : (arr_45 [i_17 + 1] [i_16 + 1] [i_15] [18ULL]))))) ? (max((arr_3 [i_14 - 1]), (arr_3 [i_14 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_59 [i_16] [i_15] [i_16] [i_15] [i_15] [i_14 - 1])) >> (((var_4) - (7590700276965464902LL))))))));
                    }
                } 
            } 
        } 
        var_28 = var_3;
    }
    var_29 = ((/* implicit */_Bool) ((var_10) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
}
