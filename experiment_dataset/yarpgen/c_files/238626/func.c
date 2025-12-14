/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238626
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned char) arr_1 [i_0] [11U]);
                var_12 = ((/* implicit */long long int) arr_3 [8U] [8U] [i_1]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned short i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_13 ^= ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */long long int) arr_5 [i_1 + 2] [i_3 + 2] [i_1 + 2] [i_3 - 4])), ((+(arr_7 [i_0]))))));
                            var_14 -= ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) 1709733393)) ? (3405462156U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) % ((-(var_2)))))));
                            arr_11 [i_0] [i_0] = ((/* implicit */int) arr_6 [i_3 + 3] [i_1 - 1] [i_2] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_6);
    var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 11208318329962395077ULL))) << (((var_9) + (671247782)))));
}
