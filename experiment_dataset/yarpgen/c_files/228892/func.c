/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228892
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) ((long long int) ((arr_5 [i_0] [i_0]) + (((/* implicit */unsigned long long int) var_2)))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) 2678476688U);
                                var_21 *= ((/* implicit */_Bool) max((((/* implicit */int) var_18)), (((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (var_4)))) >> (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_2])), ((unsigned short)33993))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) arr_12 [i_0] [i_0]);
                }
            }
        } 
    } 
    var_23 = var_2;
}
