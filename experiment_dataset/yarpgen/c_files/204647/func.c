/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204647
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
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) 1078710999)) : (arr_6 [i_0] [i_0])))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_5 [(unsigned char)14])) : (((/* implicit */int) (_Bool)1))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_19 -= ((/* implicit */int) min((min((((arr_2 [(unsigned char)10]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_3 [(unsigned short)0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [10U])) ^ (((/* implicit */int) arr_1 [2])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_14 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */int) arr_3 [i_0]);
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            var_20 = arr_9 [i_4] [i_4] [i_4] [i_4];
                            var_21 = ((/* implicit */unsigned short) ((int) arr_2 [i_0]));
                        }
                        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0]))) ? (((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (arr_6 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))));
                            var_23 = (unsigned short)50049;
                            arr_21 [i_3] [i_1] [i_2] [i_3] [i_1] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_3] [i_3] [i_3] [i_3]))) ? (((/* implicit */int) arr_18 [i_1])) : (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_3] [i_0] [i_2] [i_3]))))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned short) ((arr_2 [i_0]) + (((/* implicit */unsigned long long int) ((arr_13 [(_Bool)1] [i_3] [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_6 + 1] [i_2] [i_2])))))));
                            var_25 += ((((/* implicit */_Bool) arr_4 [i_6 - 1] [i_6 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) arr_4 [i_6 + 1] [i_1] [i_0 - 1])));
                        }
                        for (unsigned char i_7 = 1; i_7 < 17; i_7 += 3) /* same iter space */
                        {
                            var_26 += ((/* implicit */unsigned int) ((unsigned char) arr_2 [i_3]));
                            arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((_Bool) arr_5 [i_3])) ? (((arr_9 [i_0 + 1] [(_Bool)1] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3] [i_3]))))) : (((arr_15 [i_0 - 1]) << (((((/* implicit */int) (unsigned short)56276)) - (56276)))))));
                            var_27 = arr_22 [i_2] [i_7 + 1] [i_3] [i_1] [i_2] [i_1] [i_0];
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_18 [i_0]))))) ? (arr_15 [i_2]) : (((((/* implicit */_Bool) arr_12 [i_0])) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0 - 1])))));
                        }
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_18 [i_0]) ? (arr_26 [i_0] [i_0] [i_0 + 1]) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2]))))) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) arr_15 [i_0 + 1])))))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_26 [i_0] [i_0 + 1] [i_0 + 1])))) != (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                    }
                    var_31 = ((/* implicit */_Bool) arr_24 [i_0 - 1]);
                }
                arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_3 [i_0])), (arr_11 [i_0] [i_0] [i_0] [i_0])))), (arr_6 [i_0 + 1] [i_0 - 1]))) % (((/* implicit */long long int) ((/* implicit */int) min((((arr_10 [i_1] [i_1] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))), (((arr_7 [i_0] [i_1] [i_1]) && (((/* implicit */_Bool) arr_0 [i_1]))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                {
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_9])) && (((/* implicit */_Bool) (~(14439453343321714251ULL))))));
                    var_33 = ((/* implicit */unsigned char) ((((arr_2 [i_9]) & (((/* implicit */unsigned long long int) arr_12 [i_9])))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1024)) ? (arr_12 [i_9]) : (((/* implicit */int) arr_16 [i_10] [i_10] [i_9] [i_9] [i_8 + 1] [i_8])))))));
                    var_34 = ((/* implicit */short) -1988438219);
                }
            } 
        } 
        arr_38 [i_8] = ((/* implicit */long long int) (_Bool)1);
        /* LoopSeq 1 */
        for (int i_11 = 1; i_11 < 9; i_11 += 3) 
        {
            arr_41 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_40 [i_11] [i_11] [i_11]))) << (((1988438205) - (1988438202)))));
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_11 + 2])) ? (((/* implicit */int) arr_33 [i_11 + 1] [i_11 + 2])) : (((((/* implicit */_Bool) arr_36 [i_8] [i_8])) ? (((/* implicit */int) arr_22 [i_8] [i_8] [i_8] [i_8] [4LL] [i_8] [i_8])) : (((/* implicit */int) (unsigned char)207))))));
            arr_42 [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> (((((((/* implicit */_Bool) (unsigned char)181)) ? (arr_35 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) - (17327812443260827633ULL)))));
            var_36 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_9 [i_8] [i_8 + 1] [i_8 + 1] [i_8]) + (arr_10 [i_8] [17LL] [i_8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_29 [i_8])))) : (arr_32 [i_8 + 1])));
            arr_43 [i_8] [i_8] = ((/* implicit */_Bool) (+(arr_15 [i_8 + 1])));
        }
    }
}
