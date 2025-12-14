/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237635
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = var_15;
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 6; i_3 += 4) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_1] [(_Bool)1] [7LL] = ((/* implicit */signed char) 7588156016208997509LL);
                            var_20 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (unsigned char)191)))), (((int) (unsigned char)65))));
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [(_Bool)0] [i_4] |= ((/* implicit */unsigned short) ((arr_12 [i_4] [i_3] [i_3] [i_2] [i_1] [i_1] [(_Bool)1]) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((var_18) >> (((var_6) - (3161913362U)))))) : (((long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_4])))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_3 - 1] [i_4] = (unsigned char)135;
                            }
                            for (short i_5 = 1; i_5 < 7; i_5 += 1) 
                            {
                                var_21 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)188)) - (((/* implicit */int) arr_16 [i_2]))))) ^ (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2] [i_2] [0U])) ? (15408697041018514871ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [6] [9LL] [i_3 + 1] [i_3 + 3] [(short)1]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14181693239896028130ULL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                                arr_19 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((long long int) max((arr_17 [i_2] [i_3 - 2] [i_3 + 1] [i_3 - 3] [i_5 + 1] [i_5 - 1] [i_5]), (arr_17 [i_0] [i_1] [i_3 + 1] [i_3 - 3] [i_5 + 1] [i_5 - 1] [i_5 - 1]))));
                            }
                        }
                    } 
                } 
                arr_20 [(unsigned short)6] [i_0] [i_1] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_6 [3] [4] [i_1] [i_1]))))));
                arr_21 [i_0] [i_0] [0U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [6LL] [i_1])) ? (var_0) : (((/* implicit */int) arr_8 [i_1] [i_0] [i_0])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_15);
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)12516)) + (max((((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)51738)) && (((/* implicit */_Bool) var_3)))))))));
}
