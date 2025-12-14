/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45815
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54084)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_8)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-29))) == (((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234)))))));
                    var_14 += ((/* implicit */unsigned long long int) ((long long int) ((signed char) var_3)));
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (1241530499U)))) - (min((var_8), (16900491830677047100ULL)))))));
}
