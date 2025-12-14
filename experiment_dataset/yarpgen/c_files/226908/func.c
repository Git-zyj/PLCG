/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226908
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
    var_12 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (_Bool)1))) ^ ((((+(((/* implicit */int) var_4)))) * (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
                    var_14 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                }
            } 
        } 
    } 
}
