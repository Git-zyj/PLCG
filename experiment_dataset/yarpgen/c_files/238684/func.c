/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238684
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
    var_16 = ((/* implicit */unsigned long long int) ((var_0) ? (max(((+(2962118835U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)57911))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((((/* implicit */long long int) (-2147483647 - 1))), (4611123068473966592LL))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)71)) <= (((/* implicit */int) (_Bool)0))))) << (((2807052892U) - (2807052877U)))))), (((long long int) ((((/* implicit */int) (signed char)-4)) - (((/* implicit */int) (unsigned char)62)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)21863)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38064))) : (0ULL))) - ((((+(13106435079211254840ULL))) - (((/* implicit */unsigned long long int) max((2147483647), (1322976237))))))));
                            arr_13 [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) (signed char)67))) - ((+(35167192219648LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) min(((unsigned short)65520), ((unsigned short)19222)))))), (((/* implicit */int) ((unsigned char) 1650128066)))));
    var_18 = ((/* implicit */_Bool) var_8);
}
