/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248461
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 4; i_2 < 23; i_2 += 3) 
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_2] [i_1])) / (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [i_2 - 1]) / (var_8)))))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        {
                            var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 - 4] [i_4] [i_4] [(signed char)20] [i_2 - 4])) ? (arr_11 [i_2 - 4] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) arr_6 [i_2 - 4] [i_4] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) arr_6 [i_2 - 4] [i_2] [i_2] [i_2 - 1])) ? (arr_11 [i_2 - 4] [i_4] [i_2 - 4] [i_4] [10U]) : (arr_11 [i_2 - 4] [i_2 - 4] [(unsigned char)4] [i_3] [i_4]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_2 - 4] [i_2 - 4] [(_Bool)1] [i_3])))))));
                            arr_15 [i_1] [i_4] [(unsigned char)4] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_6 [11LL] [i_2 - 2] [i_2] [i_3])) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (8108140611365981633ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_2 - 4] [i_4])), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_0))))) : (((arr_2 [i_1] [i_2] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4])))))))) : (max((((/* implicit */unsigned long long int) ((arr_6 [i_1] [i_2] [i_3] [i_4]) + (((/* implicit */long long int) arr_5 [i_0] [i_2] [i_0]))))), (max((((/* implicit */unsigned long long int) arr_13 [i_4] [i_0])), (8108140611365981633ULL)))))));
                            var_15 = ((/* implicit */int) ((((((/* implicit */int) arr_13 [i_0] [i_1 + 2])) < (((/* implicit */int) arr_13 [i_0] [i_1 + 2])))) ? (((((/* implicit */_Bool) ((2137286396274045516LL) % (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 - 2] [i_2 - 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))) : ((-(var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1522088389U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (14007703638346714007ULL)))) ? ((-(arr_3 [i_4]))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_4 [i_3])) : (arr_5 [i_4] [i_2 - 1] [i_1]))))))));
                        }
                    } 
                } 
                arr_16 [i_0] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 75590))) * (((/* implicit */int) var_11)))))));
                var_16 = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_1] [i_2 - 2]);
                var_17 = ((/* implicit */unsigned short) arr_3 [i_0]);
            }
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) min((((((/* implicit */_Bool) (-(var_8)))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (arr_7 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) var_9)))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (arr_3 [i_0]) : (((/* implicit */int) ((unsigned short) var_2)))))))))));
            var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-102)))) ? (((unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1])) % (((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_0] [i_0]))))) : (((/* implicit */unsigned int) arr_5 [i_1] [i_1] [i_0]))));
            var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 75590)) || (((/* implicit */_Bool) 590416945)))))));
            arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [(short)5]);
        }
    }
    var_21 = ((/* implicit */unsigned char) 1522088389U);
    var_22 = ((/* implicit */int) var_5);
}
