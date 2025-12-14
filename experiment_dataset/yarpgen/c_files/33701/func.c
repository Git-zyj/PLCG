/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33701
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
    var_18 = -5474927557971585264LL;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) arr_6 [i_1] [i_1]);
                    arr_9 [i_0] [i_0] [i_0] = ((((((/* implicit */_Bool) arr_7 [(unsigned short)4] [i_1] [i_1 + 3] [i_1])) ? (arr_7 [i_1] [i_1] [i_1 + 3] [i_1 - 1]) : (arr_7 [i_1] [i_1] [i_1 + 3] [(unsigned short)9]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 3])) ? (((/* implicit */int) (short)-13444)) : (((/* implicit */int) arr_3 [i_1 + 1]))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((arr_7 [i_1] [(unsigned short)7] [i_1 + 3] [i_1 + 2]) | (arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 3]))) < (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~((-2147483647 - 1))))) | (((long long int) arr_3 [i_2]))))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 2]))))) & (((/* implicit */int) arr_3 [i_1 + 1]))));
                        var_21 = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_3]);
                        arr_13 [i_0] [i_1] [i_2] [(signed char)8] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 + 3] [i_1 + 1] [i_1 - 1]))))), (((((/* implicit */long long int) arr_4 [i_1 + 3] [i_1 + 1] [i_1 - 1])) - (arr_11 [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_1 - 1])))));
                    }
                    var_22 = ((/* implicit */int) ((3481172067U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114)))));
                }
            } 
        } 
    } 
}
