/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237082
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
    var_18 = ((/* implicit */int) min((max((var_2), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(var_8)))), (((((/* implicit */_Bool) var_17)) ? (var_16) : (var_4))))))));
    var_19 = ((/* implicit */unsigned char) ((unsigned int) var_3));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) ((unsigned short) (short)0))) : (((/* implicit */int) max((var_14), (var_9)))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) arr_3 [i_0])), (862656431U)))))), (((((/* implicit */_Bool) ((short) (short)0))) ? (((/* implicit */unsigned long long int) (+(arr_11 [i_0] [i_1] [(_Bool)1] [i_4])))) : (arr_10 [i_0] [i_0] [i_2] [i_2] [i_2 - 1] [i_2 - 1])))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)218)) ? (1964826994U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) arr_0 [i_3])));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */int) (+(arr_4 [i_2] [i_5] [i_5 - 1])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 2) 
                        {
                            var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)15847)) || (((_Bool) var_16))));
                            arr_21 [i_2] [i_1] [i_2] [i_5] [i_6] [i_5] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) min((arr_17 [i_2] [i_2] [i_2] [i_5]), (arr_5 [i_0] [i_0] [i_0])))))));
                            arr_22 [i_0] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [(_Bool)1] [i_0] [i_6]))) : (18446744073709551615ULL))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15847)))));
                            var_24 = ((unsigned long long int) min((arr_20 [i_5 + 2] [i_5] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */short) (_Bool)0))));
                        }
                    }
                }
            } 
        } 
    } 
}
