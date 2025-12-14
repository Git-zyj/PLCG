/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39540
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(8329822639744330698LL))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_3 [i_1] [16])))), (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (((/* implicit */int) (short)4486)) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)52))) : (arr_2 [i_0]))) > (arr_2 [i_0]))))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((_Bool) 35184372088831ULL))), (((((((/* implicit */int) arr_4 [i_0])) != (((/* implicit */int) (signed char)103)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) == (((/* implicit */int) arr_4 [i_0])))))) : (((arr_2 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)199)))))))));
            arr_6 [i_0] = ((/* implicit */short) (~((-(((/* implicit */int) arr_0 [i_0]))))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) - (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_2 [(unsigned short)21])))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 ^= ((/* implicit */_Bool) ((signed char) (((+(((/* implicit */int) arr_8 [10LL])))) != (((/* implicit */int) ((((/* implicit */int) arr_8 [(_Bool)1])) >= (((/* implicit */int) (short)-19272))))))));
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((unsigned long long int) arr_9 [(signed char)8] [(signed char)8])) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [(signed char)0] [i_2]), (arr_9 [16ULL] [i_2]))))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        var_25 = ((/* implicit */short) arr_15 [i_3] [i_4 - 2]);
                        var_26 ^= ((/* implicit */short) ((((unsigned int) arr_18 [i_3] [i_3] [i_3] [i_3])) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_19 [i_4 - 2] [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1] [i_4 - 1]))))));
                        var_27 ^= ((/* implicit */short) min((((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) | (14347633123612774306ULL))))), ((-(((((/* implicit */_Bool) arr_18 [i_3] [10U] [9] [9])) ? (arr_2 [i_3]) : (arr_2 [i_4])))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 1) 
                        {
                            arr_22 [11U] [i_3] [i_5] [i_3] [i_7] [i_4] [(unsigned short)6] = ((/* implicit */unsigned long long int) arr_15 [i_3] [i_4]);
                            arr_23 [i_3] [i_3] [i_5] [i_3] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) (unsigned short)34483)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (65535ULL)))));
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 4) 
                        {
                            arr_27 [i_3] [i_3] [(signed char)11] [i_6] [i_8] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_15 [i_3] [i_4])), (((long long int) arr_18 [i_3] [i_4] [i_3] [i_3])))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_3])) | (((/* implicit */int) (short)32767))))) : (((unsigned int) (short)17419)))))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_20 [i_8 + 1] [i_5] [i_6] [i_8] [i_3])) ? (((/* implicit */int) arr_3 [i_6] [i_4])) : (((/* implicit */int) arr_15 [i_6] [i_4 - 2])))) | (((/* implicit */int) ((short) arr_3 [i_5] [(unsigned short)4]))))))));
                        }
                        for (short i_9 = 3; i_9 < 16; i_9 += 3) 
                        {
                            arr_30 [i_3] [i_3] [i_3] [i_3] [(unsigned short)10] = ((/* implicit */unsigned char) ((((_Bool) ((short) arr_9 [i_3] [i_3]))) ? (arr_11 [i_3] [(short)17]) : ((-(((/* implicit */int) arr_18 [i_3] [i_5] [i_6] [i_9]))))));
                            var_29 = ((/* implicit */signed char) (-(arr_16 [i_3] [i_4 + 2])));
                        }
                        var_30 = ((/* implicit */unsigned short) arr_18 [i_6] [i_5] [i_3] [i_3]);
                    }
                    for (unsigned int i_10 = 4; i_10 < 17; i_10 += 4) /* same iter space */
                    {
                        arr_34 [6] [i_4] [i_4] [i_3] [i_5] [i_10] = ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) arr_15 [i_3] [i_4])) ? (((/* implicit */int) arr_18 [1U] [i_4] [i_5] [i_10 - 2])) : (((/* implicit */int) arr_8 [i_3]))))))));
                        arr_35 [i_5] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_32 [i_3] [i_3] [i_3] [i_4 - 1] [i_3])), ((~(((/* implicit */int) arr_28 [i_3] [i_3] [i_5] [i_3] [12ULL] [i_10 - 1] [12ULL]))))))) ? (((/* implicit */int) ((arr_25 [i_10 - 1] [i_4 + 2] [i_5] [i_10 - 2]) != (arr_25 [i_10 - 2] [i_4 + 2] [i_3] [i_10 - 2])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4185402087U)) ? (arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) 1979161341))))) ? (((/* implicit */int) arr_18 [i_4 + 1] [i_10 - 3] [i_10] [i_10 - 3])) : (((/* implicit */int) max((arr_4 [i_3]), (arr_19 [i_3] [(unsigned char)10] [i_3] [i_5] [9ULL] [i_10]))))))));
                        var_31 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_18 [i_3] [i_4] [15U] [(short)11])), (((short) arr_19 [(unsigned char)8] [6ULL] [i_5] [i_3] [i_3] [(short)15])))))) / (((((/* implicit */_Bool) (-(arr_26 [i_3] [i_4] [i_3] [(short)5] [i_5] [i_5] [i_5])))) ? (arr_31 [i_3] [12] [i_3] [i_10 + 1]) : (((/* implicit */unsigned long long int) (~(8329822639744330698LL))))))));
                    }
                    for (unsigned int i_11 = 4; i_11 < 17; i_11 += 4) /* same iter space */
                    {
                        var_32 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_33 [i_3] [i_5] [i_5] [i_3] [i_11 + 1])), (arr_25 [(unsigned short)8] [i_4 + 2] [2U] [i_11])))) ? ((+(((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [(short)3])))) : (((/* implicit */int) arr_37 [i_3] [i_3] [i_11 + 1] [i_11]))))));
                        arr_38 [i_3] [i_4 + 2] [i_5] [i_3] = ((/* implicit */short) arr_1 [i_3]);
                    }
                    arr_39 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_20 [i_5] [i_4] [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) arr_17 [i_5] [i_4 + 3] [i_5] [i_5])))) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_5]))) : (arr_24 [i_3] [i_5]))) : (((arr_28 [i_3] [i_3] [i_3] [(short)12] [i_3] [i_3] [i_3]) ? (arr_10 [i_3]) : (arr_14 [i_5])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [13ULL] [i_4 + 1] [i_3] [i_4 + 2] [i_3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5] [i_4] [i_3] [i_3])) ? (((/* implicit */int) arr_12 [i_3] [i_5])) : (((/* implicit */int) arr_0 [i_3])))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1274428153)), (2697208144494793235ULL)))) || (((/* implicit */_Bool) arr_20 [i_3] [i_4 + 2] [i_3] [i_5] [i_3])))))));
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(arr_17 [i_5] [i_4 - 1] [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((int) -1766005686)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-32767)), (arr_10 [i_5])))) && (((/* implicit */_Bool) (+(arr_13 [(short)3])))))))) : (((arr_17 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4]) | (((unsigned long long int) 5586047624273208242ULL)))))))));
                    var_34 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [(signed char)8] [i_5] [i_5] [i_5] [i_3])) ? (((/* implicit */int) arr_33 [i_3] [i_5] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_33 [i_3] [i_5] [i_3] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) arr_17 [i_4 - 2] [i_5] [i_4 - 2] [i_4 + 2])) ? (arr_17 [(_Bool)1] [i_5] [i_4 + 1] [i_4 + 3]) : (arr_17 [i_5] [i_4] [i_4 + 2] [i_4 + 3]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_20 [16U] [i_4] [i_5] [i_4 + 1] [i_4]), (((/* implicit */unsigned short) arr_3 [i_5] [i_5])))))))));
                }
            } 
        } 
        arr_40 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_3]))))) ? (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_28 [i_3] [i_3] [i_3] [i_3] [i_3] [(signed char)7] [(signed char)8])))) + (2147483647))) << (((((((/* implicit */int) (short)-5515)) + (5546))) - (31)))))) : ((+(arr_25 [i_3] [i_3] [2] [i_3])))));
        arr_41 [i_3] = ((/* implicit */short) max((((((arr_16 [i_3] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-19272))))) % (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_3] [i_3]))))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [2U] [i_3] [i_3] [i_3]))) | (arr_16 [i_3] [i_3]))), (arr_16 [i_3] [i_3])))));
    }
}
