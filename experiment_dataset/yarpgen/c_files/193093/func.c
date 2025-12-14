/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193093
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_13 -= ((/* implicit */unsigned int) arr_7 [15LL] [15LL]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((+(arr_8 [i_3] [i_3] [i_3] [i_3] [(short)6] [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_8 [i_3] [i_1] [i_3] [(short)12] [i_1] [i_3])))))))) : (((unsigned long long int) (unsigned short)0))));
                            arr_13 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0]))))) ? (((/* implicit */int) arr_5 [i_1 + 3] [i_2 + 1] [i_4 + 3])) : ((~(var_11)))))) : (var_0));
                            arr_14 [i_3] [2ULL] [i_1] = var_9;
                            var_15 = ((/* implicit */unsigned long long int) (unsigned char)0);
                            arr_15 [i_3] [i_2] [i_2] [i_3] [10LL] [(short)4] = ((/* implicit */_Bool) ((arr_11 [i_4 - 1] [i_4 + 3] [i_4] [i_4 + 3] [i_4 + 3]) / (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0])))))));
                        }
                        for (unsigned int i_5 = 1; i_5 < 19; i_5 += 4) 
                        {
                            var_16 += ((/* implicit */unsigned int) max((((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_0] [i_3])), (arr_8 [i_1] [i_1] [i_1] [i_3] [i_5 - 1] [i_5]))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (0) : (((/* implicit */int) (signed char)(-127 - 1))))))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))))) : (arr_3 [(short)18] [(unsigned char)11])))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) 4294967276U))));
                        }
                        var_18 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_16 [i_1] [i_1] [(short)15] [17ULL] [i_3] [i_0] [i_2 - 3])) ? (((/* implicit */int) arr_7 [i_0] [15ULL])) : (((/* implicit */int) (unsigned char)175)))) * (((((/* implicit */_Bool) (unsigned short)25)) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_3] [i_0] [i_2] [14ULL])) : (((/* implicit */int) var_4)))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [i_0]), (arr_6 [i_0]))))) == (min((arr_8 [i_3] [i_1 - 1] [i_2 + 2] [i_3] [i_1] [i_3]), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))))))));
                    }
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((short) ((arr_19 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_2 - 1] [i_2] [i_2]) | (arr_19 [i_0] [i_1 - 1] [i_2] [i_2 + 1] [i_2 - 1] [(_Bool)1] [i_2])))))));
                    var_20 = var_1;
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_11);
}
