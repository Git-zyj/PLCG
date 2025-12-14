/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191337
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
    var_12 = max((var_3), (((/* implicit */unsigned int) var_5)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_3] [i_3]);
                                var_14 -= ((/* implicit */unsigned short) 4209458826U);
                                arr_11 [i_0] [i_4] [i_1] [i_4 - 2] [i_2] [i_4] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0 - 1]), ((-(arr_0 [i_0]))))))));
                            }
                        } 
                    } 
                    var_15 = max(((~((+(var_7))))), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4492825848054578878ULL)))))))));
                    var_16 &= 4492825848054578878ULL;
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(max((0ULL), (((/* implicit */unsigned long long int) var_3)))))))));
}
