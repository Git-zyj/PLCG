/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221412
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
    var_15 = var_11;
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0] [i_2])), (arr_7 [i_2] [i_2] [i_2] [8ULL])))) ? (((/* implicit */int) min((arr_11 [i_0] [6] [(unsigned short)4] [i_0 - 1] [(_Bool)1]), (arr_11 [16U] [16U] [i_2] [i_3] [i_4])))) : (((/* implicit */int) ((unsigned char) arr_5 [i_0])))))) ? (((unsigned long long int) max((((/* implicit */long long int) (unsigned char)179)), (-6886135800791650977LL)))) : (((/* implicit */unsigned long long int) arr_9 [i_4 + 3] [i_3] [(_Bool)1] [i_0] [i_0]))));
                                var_17 |= ((/* implicit */_Bool) arr_5 [(unsigned char)0]);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 19; i_5 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [i_1] [i_0])) ? (((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_2] [(unsigned char)19])) : (arr_17 [i_0 - 2] [19LL] [i_2] [i_5])))) ? (((((/* implicit */_Bool) arr_12 [(unsigned char)0] [i_1] [(unsigned char)0] [(unsigned char)8] [i_0] [(unsigned char)0])) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_5] [i_5])) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_13 [(unsigned char)18] [i_0] [15ULL] [i_2] [i_5] [i_5 - 1] [(unsigned char)18])) : (((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned char)14] [i_2] [(unsigned char)9])))))));
                        arr_18 [i_0 + 1] [4U] [i_2] [i_5 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_0] [i_0])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1])))))) ? (((/* implicit */unsigned long long int) arr_9 [(_Bool)1] [(_Bool)1] [i_2] [i_2] [i_2])) : (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_5])) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_5])))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_4 [i_0 - 1] [i_2] [i_5]) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) arr_15 [i_0] [i_0] [(short)11] [i_1])) : (arr_7 [i_0] [i_1] [i_0] [i_5])))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [(short)7])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_2] [i_0]))))));
                        arr_19 [i_5] [i_5] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_13 [17LL] [i_2] [i_2] [17LL] [17LL] [i_0] [i_0])) ? (arr_7 [15] [i_2] [15] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2]))))));
                    }
                    for (signed char i_6 = 2; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) 2034606711)) : (2106228319045627315LL))))));
                        var_21 = min((((((/* implicit */_Bool) (((_Bool)0) ? (-1002087072) : (((/* implicit */int) (unsigned char)93))))) ? (11259980346705726558ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 2147483647)))))), (max((min((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_2 [i_6])))), (((/* implicit */unsigned long long int) ((unsigned char) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [(unsigned char)4] [i_0 - 3]))))));
                        arr_22 [14U] [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) arr_7 [i_1] [i_1] [0U] [i_6 - 2]);
                        var_22 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_11 [i_6] [i_2] [i_1] [i_1] [i_0])) ? (max((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_7 [i_6] [(_Bool)1] [i_1] [i_0])))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [i_0] [(unsigned char)15] [i_0])), (arr_17 [i_0] [i_1] [i_1] [i_0])))))), (((unsigned long long int) ((unsigned char) arr_12 [i_0] [i_0 - 2] [i_1] [i_1] [i_0 - 2] [i_6 - 2])))));
                        var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_20 [i_6 - 2] [i_1])), (((arr_6 [i_0] [i_0 - 3] [(_Bool)1]) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2] [i_6])) ? (((/* implicit */int) arr_6 [i_6 + 1] [i_2] [i_0])) : (((/* implicit */int) arr_5 [i_0])))) : (arr_15 [19ULL] [i_1] [i_2] [i_6])))));
                    }
                    for (signed char i_7 = 2; i_7 < 19; i_7 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) ((unsigned int) arr_24 [i_0] [i_1] [i_1] [i_2] [i_0] [15ULL]));
                        var_25 = ((/* implicit */short) max((((arr_6 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0]) ? (min((arr_9 [i_7 + 1] [i_7 + 1] [i_2] [i_7 - 1] [i_0]), (((/* implicit */unsigned int) arr_23 [i_7] [i_1] [i_2] [i_7])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_1] [i_2] [i_7])) ? (((/* implicit */int) arr_13 [i_7] [i_0] [i_2] [i_2] [i_1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_7 + 2]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -895060516290139914LL)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (unsigned short)252))))) ? (((/* implicit */int) max(((unsigned short)55681), (arr_3 [i_1] [i_1])))) : (max((((/* implicit */int) arr_2 [i_1])), (2147483647))))))));
                        arr_25 [(_Bool)1] [(short)16] [i_1] [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_2] [i_1] [(unsigned short)19] [i_0])) : (((/* implicit */int) arr_20 [i_2] [i_7 + 1]))))), (max((2251799813685248LL), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2])))))), (((/* implicit */long long int) ((_Bool) min((-2251799813685254LL), (-2251799813685249LL)))))));
                        arr_26 [(unsigned char)0] = ((((/* implicit */_Bool) min((((int) arr_17 [i_0] [i_1] [i_1] [i_7])), (((/* implicit */int) max((arr_13 [i_7] [i_7] [i_2] [i_1] [i_0] [i_0] [i_0]), (arr_5 [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0] [i_0 - 1] [i_0])))) : (((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0] [i_0]))) ? (((long long int) arr_24 [i_7] [i_7] [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */long long int) min((((/* implicit */int) arr_13 [i_7 - 2] [i_7] [i_7] [i_0] [i_2] [i_1] [i_0])), (arr_15 [i_0] [i_0] [i_0] [i_0])))))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned char) arr_7 [i_7] [i_7] [i_7] [i_7]))), (((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)8] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7] [i_7] [i_2] [i_2] [i_2] [i_1] [i_0]))) : (arr_17 [i_0] [i_1] [i_2] [i_0])))))) ? (arr_17 [i_0] [i_0 - 3] [i_0] [i_0]) : (((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_1] [i_2] [i_7])), (arr_1 [i_0])))))));
                    }
                    var_27 = ((/* implicit */unsigned long long int) ((int) max((((int) arr_11 [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_0 - 1])), (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))));
                }
            } 
        } 
    } 
}
