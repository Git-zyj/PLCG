/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212963
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
    var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) (-(arr_3 [i_0] [i_0 - 1] [i_2]))))));
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((int) -2532123390523086110LL))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)103)))))));
    var_15 |= ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_7)))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
}
