/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20916
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
    var_18 = ((/* implicit */unsigned long long int) min((4294967293U), (((/* implicit */unsigned int) (short)-1))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    var_19 -= ((/* implicit */signed char) max(((-((~(7817305371707199235ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)108)), (3948112044063163183LL))))));
                    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 8863875522235916501LL)) || (((/* implicit */_Bool) -1633027801))))))))));
                }
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((8863875522235916499LL) < (min((((/* implicit */long long int) min((-1633027819), (((/* implicit */int) (signed char)-81))))), ((-(-3948112044063163184LL))))))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) (~(3948112044063163153LL)));
            }
        } 
    } 
}
