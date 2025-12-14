/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36626
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
    var_13 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) ((max((3303811707U), (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0 + 2] [4LL] [i_4 - 2])))) > (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535)))))));
                                var_15 = ((/* implicit */long long int) max((arr_9 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 4]), (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) arr_8 [i_3] [i_0])))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = max((((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)0), ((unsigned short)0))))) | ((-(991155589U))))), (((/* implicit */unsigned int) (unsigned char)70)));
                                arr_15 [13U] [i_1] [i_2] [13U] = ((/* implicit */unsigned long long int) (unsigned short)59177);
                            }
                        } 
                    } 
                    arr_16 [i_0 + 3] [14LL] [i_2] [i_1] = ((/* implicit */unsigned short) max((arr_1 [i_0 + 4]), (((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
                    arr_17 [i_0] [3U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((arr_6 [i_0 + 2] [i_2] [i_2] [i_0 + 1]) + (9223372036854775807LL))) << (((((arr_6 [i_1] [i_1] [i_1] [i_0 + 1]) + (301215226910147558LL))) - (25LL)))))));
                    arr_18 [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (arr_3 [i_0 - 2] [i_0]))), (max((((/* implicit */unsigned long long int) arr_7 [i_0 + 4] [i_0] [i_0 + 3] [i_0 + 3])), (arr_3 [i_0 - 1] [(unsigned char)16])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
}
