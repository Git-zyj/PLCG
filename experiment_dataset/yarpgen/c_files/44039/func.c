/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44039
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
    var_10 += ((/* implicit */_Bool) var_3);
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (18318127968944905171ULL))), (((((/* implicit */_Bool) 128616104764646445ULL)) ? (128616104764646445ULL) : (18318127968944905154ULL)))))) || (((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) (unsigned char)171);
                arr_6 [i_1] = ((/* implicit */signed char) var_3);
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1 - 1])) ^ (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
