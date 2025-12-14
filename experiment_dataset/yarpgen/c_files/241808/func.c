/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241808
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
    var_20 = ((/* implicit */unsigned short) ((unsigned long long int) min((6280569315768260532ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) > (((/* implicit */int) (unsigned short)960))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (_Bool)1))));
                var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)33212)) << (((16156532297833626512ULL) - (16156532297833626507ULL))))), (((/* implicit */int) (unsigned short)7187))))) > (((max((((/* implicit */unsigned long long int) (unsigned short)58357)), (2ULL))) + (((((/* implicit */_Bool) (unsigned short)7198)) ? (2290211775875925104ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7184)))))))));
                var_23 += ((/* implicit */unsigned int) ((unsigned short) (_Bool)1));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned int) 968445118));
            }
        } 
    } 
}
