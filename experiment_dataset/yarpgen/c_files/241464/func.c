/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241464
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) max((2803142697598703629LL), (((/* implicit */long long int) (short)32136))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_14 [i_2] [i_3] [i_2 - 1] [2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((arr_10 [i_2]) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_2 [i_4] [i_3] [i_1]))))) ? (-1244115655) : (((/* implicit */int) ((2143069497) == (((/* implicit */int) var_9))))))));
                                var_12 = ((/* implicit */unsigned short) var_1);
                            }
                        } 
                    } 
                    arr_15 [i_2] = ((/* implicit */signed char) max((((unsigned long long int) arr_6 [i_0] [i_2 - 1] [(unsigned char)6] [i_1 - 1])), (((/* implicit */unsigned long long int) var_0))));
                }
            } 
        } 
    } 
    var_13 -= ((/* implicit */_Bool) -2143069497);
    var_14 = ((/* implicit */_Bool) var_6);
}
