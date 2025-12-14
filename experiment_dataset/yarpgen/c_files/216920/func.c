/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216920
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
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) 5816647445597456756LL);
                var_12 -= (+(((/* implicit */int) max((((/* implicit */unsigned short) ((arr_3 [i_0] [i_0] [i_0]) < (((/* implicit */unsigned long long int) var_1))))), (((unsigned short) (short)-4))))));
                var_13 = min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0] [(_Bool)1]))))), (((unsigned long long int) (unsigned char)33)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)33)) > (((((/* implicit */int) (unsigned short)60839)) << (((/* implicit */int) arr_4 [(unsigned short)6] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_2);
}
