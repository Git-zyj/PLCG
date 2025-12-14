/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241275
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
    var_13 += max((var_11), (var_2));
    var_14 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)14403))))) ? (max((((/* implicit */int) var_1)), (var_5))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))) ? ((~(8388606ULL))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)64790))))), (max((var_11), (((/* implicit */unsigned long long int) (unsigned short)39305))))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) 2147483647))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) -982679169)) - (3243231473U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2 + 3] [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_2 - 2] [6U] [i_2 - 2])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))))))));
                                var_17 *= ((/* implicit */signed char) ((unsigned int) max((var_5), (arr_11 [i_0] [i_1 - 1] [i_3] [i_3] [i_4 - 1]))));
                                var_18 = ((/* implicit */int) min((var_18), (min((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_12))))), (min((((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (var_5) : (((/* implicit */int) arr_9 [i_0] [(signed char)10] [i_2] [i_0] [i_3])))), (-1426020944)))))));
                                var_19 *= ((/* implicit */unsigned int) max((min((var_4), (((/* implicit */int) arr_4 [i_4 + 2] [i_2 + 3] [i_1 + 2])))), (((((/* implicit */int) (signed char)-1)) | (-1157288435)))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (((~(arr_10 [i_2] [9U]))) + (min((0ULL), (((/* implicit */unsigned long long int) ((int) var_9)))))));
                }
            } 
        } 
    } 
}
