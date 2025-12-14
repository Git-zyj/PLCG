/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27078
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((int) ((unsigned char) (!((_Bool)1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 += (((_Bool)1) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (18446744073709551615ULL));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (short)4064);
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23697)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)14))) : (5681056374184049714LL)));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) -1))) : (((/* implicit */int) (short)-4053)))));
                                arr_17 [i_0] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
