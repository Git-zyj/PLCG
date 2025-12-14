/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231440
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) arr_15 [(unsigned short)10] [i_1] [(unsigned char)4]);
                                arr_16 [i_0 + 1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_9 [i_4] [i_2] [i_0]);
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_7)) ? (var_1) : ((+(1616022686U))))));
                var_13 = ((/* implicit */short) (-(((/* implicit */int) (short)30334))));
            }
        } 
    } 
    var_14 -= ((/* implicit */unsigned int) var_4);
}
