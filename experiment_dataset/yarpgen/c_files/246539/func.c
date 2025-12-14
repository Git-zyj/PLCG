/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246539
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
    var_14 = ((/* implicit */signed char) ((_Bool) (!((!(((/* implicit */_Bool) (unsigned char)180)))))));
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 1U))) ? (((/* implicit */int) ((_Bool) 6938128322879680502ULL))) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6938128322879680504ULL)) || (((/* implicit */_Bool) (signed char)-1)))))) : (11508615750829871113ULL))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((unsigned short) max((max((((/* implicit */int) (short)-4840)), (1083659285))), (-1)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (max((((/* implicit */unsigned long long int) (_Bool)1)), ((~(6938128322879680509ULL)))))));
                                arr_12 [16U] [20U] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */long long int) (-(18446744073709551615ULL)));
                            }
                        } 
                    } 
                    arr_13 [i_2] = ((/* implicit */signed char) arr_7 [i_1 + 1] [i_1 + 2] [i_1 - 2] [i_1 + 2] [i_1 - 2]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((-700903604), (((/* implicit */int) var_3))));
}
