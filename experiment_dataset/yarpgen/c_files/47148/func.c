/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47148
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
    var_11 = ((/* implicit */short) min((var_11), (var_2)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */int) ((unsigned short) arr_1 [i_0]));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-103))))) ? (1369842225U) : (((/* implicit */unsigned int) max(((-(((/* implicit */int) (short)11758)))), (((/* implicit */int) (unsigned short)3))))))))));
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */int) min((arr_4 [i_4] [i_4 - 1] [i_4]), (((/* implicit */unsigned short) (signed char)-103))))) + ((~(((/* implicit */int) ((short) var_9))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
