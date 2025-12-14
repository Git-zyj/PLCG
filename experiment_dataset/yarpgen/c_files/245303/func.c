/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245303
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
    var_20 = ((/* implicit */signed char) min((min(((+(((/* implicit */int) (signed char)-98)))), (((/* implicit */int) ((unsigned short) -5170289634430694171LL))))), (((/* implicit */int) ((signed char) max((((/* implicit */long long int) var_2)), (var_10)))))));
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) ((unsigned long long int) (unsigned short)32768))))));
    var_22 = ((/* implicit */unsigned long long int) max(((+(((int) var_2)))), (((/* implicit */int) ((_Bool) ((unsigned short) 1430612424))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) max((min((((/* implicit */int) ((unsigned short) 793193719))), (max((-793193719), (966434785))))), (((int) 9164526218605428185LL))));
                    arr_6 [i_0] = ((/* implicit */int) min((-5976657941655641490LL), (((/* implicit */long long int) (unsigned short)0))));
                }
            } 
        } 
    } 
}
