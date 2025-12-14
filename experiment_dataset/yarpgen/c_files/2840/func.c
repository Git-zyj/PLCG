/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2840
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3684536264U)))))));
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)220))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (unsigned char)152)) - (((/* implicit */int) (unsigned char)255)))));
                    var_22 = (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)139))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) (((~(((/* implicit */int) (unsigned short)61769)))) < ((-(2147483647)))))) % (((/* implicit */int) (((!((_Bool)0))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) - (14872279488245582271ULL))))))))))));
                }
            } 
        } 
    } 
}
