/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27806
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
    var_18 = ((/* implicit */long long int) var_7);
    var_19 = ((/* implicit */unsigned long long int) var_17);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 7; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */short) ((((/* implicit */int) min((arr_9 [i_3] [i_3 - 3] [i_3 - 3] [i_3 - 3]), (arr_9 [i_0] [i_0] [i_3 + 2] [i_4])))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0] [i_3 - 1] [i_3 - 1])) || (((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_3 + 3] [i_2])))))));
                                var_21 = ((/* implicit */unsigned int) ((arr_0 [i_0] [i_1 - 1]) != (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_0 [i_1] [i_1 - 2]) : (arr_3 [i_1])))));
                                var_22 *= ((/* implicit */int) ((((/* implicit */_Bool) max((2068490272U), (((/* implicit */unsigned int) (short)-20338))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_4 - 4] [i_1]), (((/* implicit */long long int) arr_12 [i_2] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_0] [1LL] [5] [i_3] [i_4]) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4]))))))) : ((-(arr_3 [i_2]))))))));
                            }
                        } 
                    } 
                    var_23 = ((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(_Bool)1] [(unsigned short)8] [i_2] [i_2 + 2] [i_2])) >> (((arr_0 [i_1] [i_1]) - (493974650728872984LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_2])) != (((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_2 - 2] [i_0 + 2])))))) : (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [i_2] [(short)9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1]))) : (arr_10 [(unsigned short)6] [i_1 - 2] [i_2 - 1] [i_2] [i_1 - 2]))))) + (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 1; i_5 < 7; i_5 += 1) 
                    {
                        var_24 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) min((arr_8 [i_2]), (arr_8 [i_2])))) < (((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_2] [i_1] [i_0] [i_5])), (arr_8 [i_2]))))))) != ((~(((arr_17 [i_0 + 2] [i_1 + 1] [i_2] [i_2] [i_5]) ? (((/* implicit */int) arr_7 [i_1] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_0] [i_0 - 1]))))))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) min((((((/* implicit */int) arr_8 [i_1])) != (((/* implicit */int) arr_1 [i_5])))), (((((/* implicit */int) arr_8 [i_1])) >= (arr_6 [8U] [i_2] [i_2])))))) % (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0])) ^ (((/* implicit */int) arr_8 [i_1]))))) ? (((((/* implicit */int) arr_12 [i_1] [i_1])) & (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_2])))) : (((/* implicit */int) arr_1 [i_2 + 2]))))));
                        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_1] [(unsigned short)3] [i_5])) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_5] [i_1])) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_5]))))) ? (((((/* implicit */int) arr_15 [i_5 + 2] [i_2] [i_1 - 1] [i_0] [i_0])) & (((/* implicit */int) arr_12 [i_1] [i_2 - 1])))) : (((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_5])) - (((/* implicit */int) arr_2 [i_5])))))))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_2 + 1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2 - 1])) + (((/* implicit */int) arr_2 [i_2 - 2])))))));
                    }
                    var_28 = min((((/* implicit */long long int) ((((/* implicit */_Bool) -806254112846931192LL)) || (((/* implicit */_Bool) (short)-3869))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_10 [i_0] [i_0] [i_1] [5LL] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_2 - 2]))) : ((-(arr_0 [i_0] [i_2]))))));
                }
            } 
        } 
    } 
}
