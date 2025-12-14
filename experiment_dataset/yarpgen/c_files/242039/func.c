/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242039
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
    var_13 = ((/* implicit */long long int) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))), ((-((+(var_9)))))));
    var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)26724)))), (((/* implicit */int) ((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))) ? (((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) var_4))))) ^ (max((var_5), (((/* implicit */long long int) var_3)))))) : (max((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) var_12))))), ((~(var_5)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned short) max((arr_5 [11] [i_1]), (((/* implicit */unsigned int) -1428987427))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
                    {
                        arr_12 [(short)4] [i_1] [i_2] [i_1] [(short)5] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) (short)-23330)) & (((/* implicit */int) (short)23328))))) ? (((/* implicit */int) (short)-23330)) : (((/* implicit */int) (short)23333)))), (((/* implicit */int) (unsigned short)18701))));
                        arr_13 [i_1] [(unsigned char)9] [3LL] [i_1] = ((/* implicit */unsigned short) max(((((+(arr_4 [(_Bool)1] [(_Bool)1] [i_1]))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_1 [i_0]))))), (((/* implicit */unsigned int) max((arr_11 [i_0] [i_1 - 3] [3ULL] [(short)1]), (arr_11 [i_2] [i_1 - 1] [i_2] [(short)15]))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
                    {
                        arr_17 [1ULL] [(short)12] [4] [i_4] [i_1] [(short)14] = arr_7 [i_0];
                        var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) var_6)), ((unsigned short)4277)))))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23329)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_2 [15U]))))) ? ((~(arr_20 [(short)11] [i_1] [2ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(signed char)12] [(unsigned char)11]))))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23330)) ? (((/* implicit */int) (short)23329)) : (((/* implicit */int) arr_8 [9U] [(unsigned char)7] [(short)1]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1] [(unsigned short)12] [i_1]))) | (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                }
                /* vectorizable */
                for (unsigned char i_6 = 4; i_6 < 16; i_6 += 2) 
                {
                    arr_23 [i_0] [(signed char)0] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */int) (short)3441)) % (((/* implicit */int) arr_7 [9U]))))));
                    arr_24 [12ULL] [7U] [14U] [i_1] = ((/* implicit */unsigned int) ((short) ((arr_20 [i_0] [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))));
                    arr_25 [(unsigned char)1] [i_1] [i_1] [i_6] = ((((((/* implicit */int) (short)8527)) / (((/* implicit */int) (signed char)-105)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3437))))));
                    var_19 += ((/* implicit */signed char) (+(arr_20 [i_1 + 2] [i_6 - 3] [i_6 - 2])));
                }
                var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_10 [10LL] [i_1 - 2] [i_1 - 2] [2] [(unsigned short)8] [i_1 - 2])) + (((/* implicit */int) arr_10 [(signed char)2] [i_1 - 3] [i_1 + 2] [(short)16] [(short)13] [i_1 + 2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 9; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 3; i_9 < 9; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        {
                            arr_38 [i_7] [i_9] [0LL] [6ULL] = ((/* implicit */unsigned short) max((max((arr_34 [i_7 - 1]), (((/* implicit */unsigned long long int) arr_5 [(unsigned short)5] [13LL])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_26 [(unsigned short)9] [(unsigned char)8])))) || (((/* implicit */_Bool) max((((/* implicit */short) arr_36 [4] [i_7] [i_9] [i_10])), ((short)-5000)))))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1047191887)) ? (((long long int) max((((/* implicit */unsigned int) (short)15580)), (arr_0 [6U] [i_8])))) : (max((max((((/* implicit */long long int) arr_15 [(short)11] [12U])), (arr_26 [i_9] [i_10]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_8 [(unsigned short)4] [(short)12] [i_10])), (arr_20 [i_10] [5U] [(short)4]))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 1; i_12 < 9; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) max((arr_6 [i_12] [2U]), (((/* implicit */unsigned short) arr_21 [11LL])))))) ? (((((((/* implicit */unsigned int) arr_9 [i_12] [(signed char)16])) == (arr_5 [(short)12] [(unsigned char)2]))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_43 [i_7] [7LL] [i_7] [(signed char)7] [0])) : (2380849990U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_5 [(short)15] [10]), (((/* implicit */unsigned int) var_4))))) ? (((((/* implicit */_Bool) arr_29 [(unsigned char)8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) (short)3444)) & (((/* implicit */int) (short)-5000)))))))));
                                var_23 = ((/* implicit */short) (~(max((((((/* implicit */_Bool) arr_32 [3U] [i_8])) ? (((/* implicit */int) (short)-3445)) : (((/* implicit */int) arr_35 [i_13])))), (((((/* implicit */int) (short)5008)) & (((/* implicit */int) (unsigned short)37174))))))));
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((((-3405321084462885397LL) & (((/* implicit */long long int) var_9)))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_8] [i_8] [i_8])))))) == (((/* implicit */long long int) max((((int) arr_20 [15LL] [(short)3] [(short)5])), (((/* implicit */int) max((((/* implicit */short) arr_10 [i_7] [i_8] [(short)3] [(short)7] [(unsigned short)8] [(unsigned short)14])), (arr_15 [(_Bool)1] [(unsigned short)13]))))))))))));
                                var_25 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3405321084462885421LL)) ? (arr_20 [0LL] [2U] [(unsigned char)6]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    var_26 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [(unsigned short)2] [i_8])) % (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) arr_43 [(short)6] [i_8] [6U] [(signed char)1] [6U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (682026069U))))))));
                }
                var_27 ^= ((/* implicit */unsigned short) arr_20 [(unsigned short)0] [13LL] [(unsigned short)4]);
                var_28 = ((/* implicit */short) (+(((((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_7] [13U] [i_7])), ((unsigned short)63302)))) & (arr_44 [(unsigned short)6] [i_8] [(_Bool)1] [i_7] [2LL])))));
            }
        } 
    } 
}
