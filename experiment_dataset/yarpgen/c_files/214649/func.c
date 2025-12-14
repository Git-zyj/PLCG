/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214649
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
    var_10 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_8))))))));
    var_11 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_12 = var_0;
                            arr_9 [i_3] [i_1] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) ? ((+(var_9))) : (((/* implicit */long long int) (+(var_8)))))));
                        }
                    } 
                } 
                arr_10 [i_0] = ((long long int) var_8);
            }
        } 
    } 
    var_13 = var_0;
}
