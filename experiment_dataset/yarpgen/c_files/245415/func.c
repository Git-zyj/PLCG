/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245415
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
    var_20 = ((/* implicit */long long int) var_11);
    var_21 = ((/* implicit */signed char) (~((~((~(var_19)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_22 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_2])) != (((/* implicit */int) (signed char)-4))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41081)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_3)) - (15366))))) : ((-(var_16)))))));
                            arr_10 [i_0] [i_1] [(unsigned short)12] [i_3] = ((/* implicit */int) ((long long int) ((_Bool) var_12)));
                        }
                    } 
                } 
                arr_11 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_0] [(signed char)10] [(signed char)0] [i_0] [i_1])) != (5667599141926810361ULL)))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) <= (14372059619881944705ULL))))));
                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1587132656U))))), (2707834629U))))));
                arr_12 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_9);
                arr_13 [i_0] [i_1] [i_0] = ((/* implicit */short) arr_1 [i_0]);
            }
        } 
    } 
}
