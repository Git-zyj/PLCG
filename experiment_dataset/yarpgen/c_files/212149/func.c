/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212149
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((unsigned int) (signed char)127));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) arr_4 [i_3] [i_2 + 1] [i_1])) : (((/* implicit */int) var_4))));
                            var_14 = ((/* implicit */_Bool) (signed char)127);
                            arr_12 [i_1] [i_4] [i_3] [i_2 - 2] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((int) arr_9 [i_3] [i_2 - 1] [i_2 - 2] [i_3] [i_1] [i_3] [i_1]));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) ((var_1) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))) : (var_10))))));
            }
            arr_13 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) var_3)) != (arr_5 [i_0]))));
            arr_14 [i_1] [i_1] [i_0] = ((/* implicit */long long int) (-(3203549172U)));
            arr_15 [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned int) 335126358)) & (1071210792U))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_18 [(signed char)5] [i_5] = 731210521;
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    {
                        arr_25 [i_0] [i_5] [i_6] = (+((-(((/* implicit */int) var_4)))));
                        arr_26 [i_0] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((arr_5 [i_0]) / (arr_5 [i_0])));
                        arr_27 [14] [i_5] [i_6] [(_Bool)1] [i_6] [i_0] = ((/* implicit */long long int) ((unsigned char) 1071210792U));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            arr_31 [i_0] [1] [(unsigned char)9] [i_8] [i_8] [i_6] [i_7] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_5 [i_0])))) ? (((/* implicit */int) arr_6 [i_0] [i_6] [i_0] [3ULL])) : (((/* implicit */int) arr_17 [8]))));
                            arr_32 [(signed char)3] [i_5] [i_6] [i_6] [i_6] = ((731210521) / (((/* implicit */int) arr_3 [i_6] [i_5] [i_0])));
                        }
                    }
                } 
            } 
        }
    }
    var_16 = (+(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)3))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (731210521)))) : (((((/* implicit */_Bool) var_0)) ? (9029270867776242015ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    var_17 &= ((((/* implicit */_Bool) max((max((var_0), (((/* implicit */int) (unsigned char)32)))), (((/* implicit */int) var_7))))) ? (((((/* implicit */int) (signed char)95)) & (((/* implicit */int) (unsigned char)59)))) : (((/* implicit */int) (_Bool)1)));
}
