/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32316
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
    var_20 = ((/* implicit */unsigned int) (!(var_19)));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (signed char)98))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((int) var_18))))) ? (((/* implicit */long long int) (+((+(((/* implicit */int) var_5))))))) : (((((_Bool) (signed char)123)) ? (((((/* implicit */_Bool) -2140407425)) ? (-6923642860887502690LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) var_4)))))))));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        arr_11 [i_3 - 2] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */int) arr_4 [i_2 + 3] [i_3 + 1] [i_0])) | (((/* implicit */int) var_2)))) : (((/* implicit */int) (_Bool)1))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (short)-30235))) ? (((/* implicit */int) var_16)) : (((((/* implicit */int) (short)-29979)) + (((/* implicit */int) arr_9 [i_0 - 2] [(_Bool)1] [i_0] [i_0 + 3]))))));
                        arr_12 [i_0 + 2] [i_0 + 1] [i_1] [i_0 + 2] [i_0 - 1] [i_0 + 2] &= ((/* implicit */short) (signed char)-38);
                    }
                    var_23 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)98)) ? (-1) : (((/* implicit */int) arr_9 [i_0 - 2] [(unsigned short)9] [i_0] [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_1] [i_1 - 1] [i_0] [i_1 - 1])), (arr_0 [i_0]))))));
                }
            }
        } 
    } 
}
