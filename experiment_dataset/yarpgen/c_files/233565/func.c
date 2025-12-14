/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233565
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
    var_11 = ((/* implicit */_Bool) ((max((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (var_3)))))) | (((/* implicit */long long int) ((/* implicit */int) (((!((_Bool)0))) || (((/* implicit */_Bool) 2699494096U))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 4; i_3 < 19; i_3 += 2) 
                    {
                        arr_10 [i_1] [i_2] [i_1] [(short)11] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)13884))))) ? (((/* implicit */long long int) (+(var_8)))) : ((((_Bool)1) ? (4194303LL) : (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [(unsigned short)3] [i_1] [(unsigned short)3] [i_3]))) / (4194293LL)))) ? (max((((/* implicit */unsigned int) arr_9 [i_2] [(signed char)16] [(signed char)16] [i_3 - 1])), (0U))) : (max((var_8), (((/* implicit */unsigned int) var_0)))))))));
                        var_12 = ((/* implicit */long long int) min((var_12), (((((/* implicit */_Bool) min((((/* implicit */short) min(((signed char)0), (((/* implicit */signed char) arr_4 [i_0] [i_0]))))), (arr_7 [i_3 - 3] [i_3 - 4] [i_3 - 3] [i_3 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_3 - 1] [i_3] [i_3] [i_3 - 2]), (arr_9 [i_3 - 2] [i_3 + 1] [i_3] [i_3 - 1]))))) : (var_4)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 19; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */int) (short)-13885);
                        arr_15 [(signed char)17] [i_4] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]))) : (((arr_6 [i_2]) | (((/* implicit */long long int) arr_0 [i_0] [i_0]))))));
                    }
                    var_13 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (short)-13905)) && (((/* implicit */_Bool) 4194292LL))))), (((min((-104484577), (((/* implicit */int) (short)-13880)))) - (((/* implicit */int) arr_4 [i_2] [i_2]))))));
                }
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (-(-4194285LL)))) && (((/* implicit */_Bool) var_6)))))));
            }
        } 
    } 
    var_15 = var_6;
    var_16 = ((/* implicit */short) -4194304LL);
}
