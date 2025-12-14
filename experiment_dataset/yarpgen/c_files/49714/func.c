/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49714
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
    var_16 ^= ((/* implicit */int) ((((((((/* implicit */int) var_3)) == (((/* implicit */int) var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1))) < (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(((/* implicit */int) max(((unsigned short)29709), (((/* implicit */unsigned short) var_5))))))))));
    var_18 -= ((unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)7857)) : (var_0))) & (((/* implicit */int) (unsigned short)57679))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((var_6), (((/* implicit */short) var_8))))) ? (((/* implicit */int) arr_4 [i_1] [i_0 + 1] [i_0])) : (((((/* implicit */_Bool) (unsigned short)50301)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])))))), (((/* implicit */int) min(((_Bool)0), ((_Bool)1))))));
                var_19 = ((/* implicit */unsigned long long int) var_13);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2704184312U)) || (((/* implicit */_Bool) (short)-21454)))))));
}
