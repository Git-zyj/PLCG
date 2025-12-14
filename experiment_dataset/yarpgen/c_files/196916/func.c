/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196916
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (-(1796056143426894491ULL))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_2 [i_1]))))));
                var_16 &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_1 - 1]))));
                var_17 = ((unsigned int) (-(((((/* implicit */int) (signed char)-116)) + (((/* implicit */int) arr_2 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) ((((_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) max((arr_10 [i_2 + 2]), (arr_10 [i_2 - 3]))))));
                            var_19 = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned long long int) (signed char)-116)), (arr_11 [3ULL] [i_2] [i_3 + 2] [i_2]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
