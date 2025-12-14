/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23343
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
                    var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) ((arr_5 [i_2] [i_0] [i_0] [i_0]) - (((/* implicit */int) var_8))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(short)3] [i_0] [(short)3])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8215)) | (arr_5 [i_3] [i_0] [i_1] [i_0])))) * (var_1))), (((/* implicit */unsigned long long int) arr_10 [i_3 + 1] [i_2] [i_2] [i_2] [(signed char)4] [i_0]))));
                        var_15 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)91)), (var_5))))));
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_7))))) % (max((((/* implicit */long long int) (signed char)125)), ((-9223372036854775807LL - 1LL))))))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-125))))), (var_9)))));
    var_17 = ((/* implicit */long long int) (((+(((var_11) / (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))) != (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) (signed char)127))))) ? (min((((/* implicit */unsigned long long int) (signed char)125)), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242)))))));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_10))));
}
