/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2506
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
    var_19 = var_9;
    var_20 = ((/* implicit */unsigned short) min((var_14), (min((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))), (min((((/* implicit */unsigned long long int) 757373148646049917LL)), (10ULL)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((-757373148646049903LL) - (((757373148646049932LL) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))))), (((unsigned long long int) (~(18079397390565201488ULL)))))))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
                }
            } 
        } 
    } 
}
