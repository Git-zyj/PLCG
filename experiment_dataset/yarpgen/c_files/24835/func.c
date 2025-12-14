/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24835
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
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_1 [i_0]))) & (((/* implicit */int) (unsigned short)0))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) ^ (1)))));
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_1 [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_8 [1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_6 [i_1]))))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (arr_4 [(short)8] [i_1]) : (arr_4 [6U] [(signed char)8]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (short)32767)) : ((~(((/* implicit */int) ((signed char) arr_0 [i_1] [i_1])))))));
        var_21 = ((/* implicit */short) ((int) arr_6 [i_1]));
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) (((~(((((/* implicit */int) var_18)) * (((/* implicit */int) (short)32767)))))) <= (((int) (!(((/* implicit */_Bool) 0U)))))));
        var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */int) ((_Bool) (unsigned short)0))) : (min((-1514423282), (((/* implicit */int) arr_0 [i_2] [(short)16]))))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_19 [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_19)), (arr_4 [i_4] [10])))) ? ((-(((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [8LL] [i_4])))) : (((/* implicit */int) min((arr_6 [(unsigned char)6]), (((/* implicit */unsigned short) arr_17 [i_2] [i_2] [i_4] [(unsigned char)0])))))))), (6LL)));
                        arr_22 [2LL] [i_4] [i_4] = ((long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_21 [i_4] [(signed char)4] [i_5 + 1] [i_4] [i_3])) : (((/* implicit */int) arr_21 [i_4] [i_2] [7LL] [i_4] [i_5 + 1]))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 1; i_6 < 10; i_6 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_12)))));
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((arr_1 [i_2]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_2)) + (1834))))))));
                        var_27 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    /* vectorizable */
                    for (signed char i_7 = 1; i_7 < 10; i_7 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) var_17);
                        var_29 += ((/* implicit */signed char) ((((arr_12 [i_2] [i_3] [i_7 + 1]) + (2147483647))) << (((((arr_12 [i_2] [i_2] [i_7 - 1]) + (1126303488))) - (8)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (signed char i_9 = 1; i_9 < 8; i_9 += 3) 
                        {
                            {
                                arr_34 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) -54783502);
                                var_30 = ((/* implicit */_Bool) ((min((((arr_1 [i_4]) <= (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((((/* implicit */long long int) -406288860)) != (0LL))))) ? (arr_1 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((arr_6 [4U]), ((unsigned short)34688)))) < (((/* implicit */int) min((arr_33 [i_4] [(_Bool)1] [(signed char)3] [i_8] [(signed char)1] [i_3] [i_4]), (arr_33 [i_4] [5] [i_3] [i_4] [i_8] [i_9 + 3] [i_9]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_31 = ((((/* implicit */unsigned long long int) var_14)) != (((((/* implicit */unsigned long long int) ((var_8) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) * (((((/* implicit */_Bool) var_11)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4328))))))));
}
