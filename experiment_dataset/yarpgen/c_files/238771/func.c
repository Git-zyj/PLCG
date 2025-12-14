/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238771
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((((/* implicit */int) (unsigned char)192)) + (((/* implicit */int) (unsigned char)0)));
                arr_7 [i_0] [i_0] [(signed char)6] = ((/* implicit */_Bool) (unsigned char)20);
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((6028640704022708859LL), (var_3)))) && ((!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) -22))) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) var_18)))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) (unsigned char)234)) : (var_15)));
}
