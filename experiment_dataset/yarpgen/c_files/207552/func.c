/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207552
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
    var_18 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_5 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_0])))))) >= ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2]))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */long long int) max((var_14), (((/* implicit */int) (_Bool)1))));
                            arr_18 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((signed char) (_Bool)1)))));
                        }
                        for (unsigned char i_5 = 2; i_5 < 18; i_5 += 1) 
                        {
                            arr_21 [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */int) arr_11 [i_5 + 2] [i_5 + 2] [i_3 + 3] [i_0] [i_5 + 1])) ^ (((/* implicit */int) arr_11 [i_5] [i_0] [i_2] [i_0] [i_0]))))));
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)127), ((signed char)-15)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_1 - 1])), (arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [i_5])))))))) % (((((/* implicit */unsigned long long int) var_14)) & ((((_Bool)1) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3])))))))));
                            arr_22 [i_3] [i_0] [8U] = min((10657470344286166894ULL), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) var_17)))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            arr_26 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_19 [(signed char)9] [i_2] [i_0]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) max((arr_2 [i_2] [i_3]), (((/* implicit */unsigned long long int) var_12)))))) : (((unsigned long long int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_6 [8LL] [i_3]))))));
                            arr_27 [i_0] [i_1] [i_2] [i_3 + 4] [i_3] [i_6 - 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_10 [i_6 + 1])), (max((0U), (((/* implicit */unsigned int) var_10))))))) % (((arr_7 [i_2 - 1] [i_3] [i_6 + 1] [i_6 + 1]) / (arr_7 [i_2 - 1] [i_3 - 1] [i_6 + 1] [i_6])))));
                            var_22 = ((((/* implicit */_Bool) ((arr_7 [16] [i_1] [i_1 - 1] [i_3 + 3]) * (arr_7 [i_3 + 3] [i_3 + 3] [i_3] [i_3 - 2])))) ? (((arr_7 [i_1] [(short)7] [i_1] [i_3 + 1]) % (18446744073709551599ULL))) : (((arr_23 [i_1 - 1] [i_3] [i_3] [i_3 + 4] [i_6 - 1]) | (arr_7 [i_0] [i_1] [i_3 + 1] [i_3 + 1]))));
                            var_23 = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */int) (signed char)51)) * (((/* implicit */int) (signed char)-56)))) | (((/* implicit */int) ((signed char) 3408572509U))))));
                        }
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_24 [i_0] [i_0] [i_0] [i_0] [3] [i_0] [i_0]))));
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 18; i_7 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) arr_16 [i_1 - 1] [i_1] [i_2 - 1])) : (((/* implicit */int) (signed char)12)))))));
                        var_26 = ((((arr_23 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2]) == (arr_23 [i_2] [i_2 + 1] [i_2 - 1] [i_2] [i_2]))) ? (min((((/* implicit */int) min((arr_10 [i_1]), (((/* implicit */short) arr_12 [i_0] [i_0] [i_0] [i_0]))))), (arr_25 [i_1] [i_1 - 1] [i_1 - 1] [7LL] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_24 [3ULL] [i_1] [i_1 - 1] [i_1] [i_2] [i_2 + 1] [i_7])) ? ((~(((/* implicit */int) (short)26760)))) : (((/* implicit */int) max(((short)8065), (((/* implicit */short) var_2))))))));
                    }
                }
            } 
        } 
        var_27 -= ((/* implicit */signed char) (((+(arr_3 [i_0]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17)) ? (((/* implicit */int) arr_16 [(short)19] [i_0] [i_0])) : (((/* implicit */int) var_0))))) ? (((((/* implicit */int) (signed char)15)) + (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_4 [i_0] [4])))))));
    }
    for (int i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 5)) ? (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26760))) : (511092639U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17)))))))));
        var_29 -= ((/* implicit */signed char) arr_6 [i_8] [i_8]);
        arr_33 [i_8] [i_8] = ((/* implicit */_Bool) ((((((arr_5 [i_8] [i_8]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_16 [i_8] [i_8] [i_8])) - (7262))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_16 [(short)20] [i_8] [i_8])))));
        var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */int) arr_1 [i_8] [(_Bool)1])) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)5)))))) : (((arr_13 [i_8]) - (((/* implicit */long long int) var_12))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_8])) ? (arr_2 [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-122)) ? (arr_30 [i_8]) : (((/* implicit */long long int) var_12)))))))) : (arr_24 [i_8] [i_8] [i_8] [i_8] [12] [i_8] [i_8]));
        var_31 = arr_24 [i_8] [i_8] [i_8] [17ULL] [i_8] [i_8] [i_8];
    }
}
