/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195927
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (arr_4 [i_0] [15] [i_1])))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (((max((var_3), (((/* implicit */unsigned long long int) arr_0 [i_0])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                var_13 += ((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [i_0]));
            }
        } 
    } 
    var_14 |= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    var_15 = ((/* implicit */int) max((var_15), (((int) 524287U))));
                    arr_19 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (short)5060);
                }
            } 
        } 
    } 
    var_16 = var_3;
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (short)5060)) ? (-164472352) : (((/* implicit */int) (unsigned short)58130)))))), (((short) (unsigned short)55727))));
}
