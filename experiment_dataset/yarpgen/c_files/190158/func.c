/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190158
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) var_1)) : (var_0))))) ? (((((/* implicit */_Bool) arr_12 [7] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((long long int) var_0))) : (max((((/* implicit */unsigned long long int) (short)0)), (var_2))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2] [i_4 - 4])))))));
                                arr_14 [i_4] [i_0] [i_4] [i_0] [i_2] = ((/* implicit */_Bool) var_6);
                                var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) | (((/* implicit */int) (short)0))))) ? ((~(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) ((max((1073741823ULL), (10889404166771224814ULL))) - (((/* implicit */unsigned long long int) var_4))));
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 7; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((arr_5 [i_5] [i_5] [i_5]) != (max((max((var_3), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_8))))));
                                var_17 = ((/* implicit */long long int) arr_15 [i_1 + 1] [i_1 - 1] [i_6]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) 2480100906U)) & ((-9223372036854775807LL - 1LL))))));
}
