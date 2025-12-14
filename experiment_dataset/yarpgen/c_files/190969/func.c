/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190969
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = (+(var_6));
                arr_4 [i_0] [i_0] = ((/* implicit */int) min(((-(var_2))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)32)), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535))))))));
}
