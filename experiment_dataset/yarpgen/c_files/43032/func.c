/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43032
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) var_8);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
                            var_19 += ((/* implicit */unsigned long long int) ((var_1) & (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-99)))))));
                        }
                    } 
                } 
                arr_11 [(unsigned short)7] [(unsigned short)7] [10U] = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) (short)-12966)), (15393162788864ULL)))));
                arr_12 [i_0] &= ((long long int) min((((/* implicit */int) arr_5 [i_0] [i_0] [(short)9] [i_1])), (((int) 15393162788885ULL))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_8);
    var_21 = ((/* implicit */unsigned long long int) var_15);
}
