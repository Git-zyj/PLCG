/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41210
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
    var_11 = ((/* implicit */unsigned long long int) var_6);
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (18366094406322562055ULL)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 6870485394872864642ULL))))) + (max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */int) var_10))))))) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */int) (signed char)-100)) * (((/* implicit */int) (signed char)-109))))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_7))));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) arr_2 [i_0] [i_1]);
                                var_15 = ((/* implicit */unsigned long long int) 2147483647);
                                var_16 = ((/* implicit */int) (signed char)(-127 - 1));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) 4767281975526792111ULL);
                    var_18 = ((/* implicit */int) 16944956377767536286ULL);
                }
            }
        } 
    } 
}
