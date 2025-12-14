/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214862
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */long long int) ((unsigned short) ((unsigned int) (!(((/* implicit */_Bool) -1))))));
                    arr_6 [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((_Bool) -17)))))) | (((((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) + (4653047404869390404ULL))) - (((/* implicit */unsigned long long int) 822446214U))))));
                    arr_7 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((822446206U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
                    var_11 = ((/* implicit */signed char) arr_2 [18ULL] [i_2]);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_4);
}
