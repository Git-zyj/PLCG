/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208517
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) ? ((~((~(var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((int) 13142277374606974505ULL)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (13142277374606974514ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)44918)))))));
                            arr_13 [(short)13] [(short)13] [i_1] [i_3] = ((/* implicit */signed char) (unsigned short)33173);
                            arr_14 [i_3] [i_3] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_0] [i_1 + 1] [i_0])), (arr_3 [i_1 - 4] [i_1 - 4])));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) 0ULL))))), (arr_9 [i_0] [i_1] [8U] [i_1 - 2])));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_23 &= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_5 [i_1 + 1] [i_1 - 4]))) | (((/* implicit */int) (!(arr_5 [i_1 - 4] [i_1 + 1]))))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (short)3))));
                        }
                    } 
                } 
            }
        } 
    } 
}
